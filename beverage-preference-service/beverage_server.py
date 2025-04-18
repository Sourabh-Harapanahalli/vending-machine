import sys
sys.path.insert(0, './gen-py')

from thrift import Thrift
from thrift.transport import TSocket, TTransport
from thrift.protocol import TBinaryProtocol
from thrift.server import TServer

from gen_py.vending_machine import BeveragePreferenceService
from gen_py.vending_machine.ttypes import BeverageType
import random

class BeveragePreferenceHandler:
    def getBeverage(self, btype):
        hot = ["cappuccino", "latte", "espresso"]
        cold = ["lemonade", "ice tea", "soda"]
        return random.choice(hot if btype == BeverageType.HOT else cold)

handler = BeveragePreferenceHandler()
processor = BeveragePreferenceService.Processor(handler)
transport = TSocket.TServerSocket(host='0.0.0.0', port=9092)
tfactory = TTransport.TBufferedTransportFactory()
pfactory = TBinaryProtocol.TBinaryProtocolFactory()

print("Starting Beverage Preference Service on port 9092...")
server = TServer.TSimpleServer(processor, transport, tfactory, pfactory)
server.serve()
