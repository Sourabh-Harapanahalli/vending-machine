#include <iostream>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TThreadedServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>
#include <signal.h>

#include "BeverageHandler.h"

using apache::thrift::server::TThreadedServer;
using apache::thrift::transport::TServerSocket;
using apache::thrift::transport::TBufferedTransportFactory;
using apache::thrift::protocol::TBinaryProtocolFactory;

using namespace vending_machine;

void sigintHandler(int sig) {
  exit(0);
}

int main(int argc, char** argv) {
  signal(SIGINT, sigintHandler);

  TThreadedServer server(
    std::make_shared<BeveragePreferenceServiceProcessor>(
      std::make_shared<BeveragePreferenceServiceHandler>()
    ),
    std::make_shared<TServerSocket>(9092),
    std::make_shared<TBufferedTransportFactory>(),
    std::make_shared<TBinaryProtocolFactory>()
  );

  std::cout << "Starting BeveragePreferenceService..." << std::endl;
  server.serve();

  return 0;
}
