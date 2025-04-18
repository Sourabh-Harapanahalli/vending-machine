/**
 * Autogenerated by Thrift Compiler (0.16.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef BeveragePreferenceService_H
#define BeveragePreferenceService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "vending_machine_types.h"

namespace vending_machine {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class BeveragePreferenceServiceIf {
 public:
  virtual ~BeveragePreferenceServiceIf() {}
  virtual void getBeverage(std::string& _return, const BeverageType::type btype) = 0;
};

class BeveragePreferenceServiceIfFactory {
 public:
  typedef BeveragePreferenceServiceIf Handler;

  virtual ~BeveragePreferenceServiceIfFactory() {}

  virtual BeveragePreferenceServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(BeveragePreferenceServiceIf* /* handler */) = 0;
  };

class BeveragePreferenceServiceIfSingletonFactory : virtual public BeveragePreferenceServiceIfFactory {
 public:
  BeveragePreferenceServiceIfSingletonFactory(const ::std::shared_ptr<BeveragePreferenceServiceIf>& iface) : iface_(iface) {}
  virtual ~BeveragePreferenceServiceIfSingletonFactory() {}

  virtual BeveragePreferenceServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) override {
    return iface_.get();
  }
  virtual void releaseHandler(BeveragePreferenceServiceIf* /* handler */) override {}

 protected:
  ::std::shared_ptr<BeveragePreferenceServiceIf> iface_;
};

class BeveragePreferenceServiceNull : virtual public BeveragePreferenceServiceIf {
 public:
  virtual ~BeveragePreferenceServiceNull() {}
  void getBeverage(std::string& /* _return */, const BeverageType::type /* btype */) override {
    return;
  }
};

typedef struct _BeveragePreferenceService_getBeverage_args__isset {
  _BeveragePreferenceService_getBeverage_args__isset() : btype(false) {}
  bool btype :1;
} _BeveragePreferenceService_getBeverage_args__isset;

class BeveragePreferenceService_getBeverage_args {
 public:

  BeveragePreferenceService_getBeverage_args(const BeveragePreferenceService_getBeverage_args&) noexcept;
  BeveragePreferenceService_getBeverage_args& operator=(const BeveragePreferenceService_getBeverage_args&) noexcept;
  BeveragePreferenceService_getBeverage_args() noexcept
                                             : btype(static_cast<BeverageType::type>(0)) {
  }

  virtual ~BeveragePreferenceService_getBeverage_args() noexcept;
  /**
   * 
   * @see BeverageType
   */
  BeverageType::type btype;

  _BeveragePreferenceService_getBeverage_args__isset __isset;

  void __set_btype(const BeverageType::type val);

  bool operator == (const BeveragePreferenceService_getBeverage_args & rhs) const
  {
    if (!(btype == rhs.btype))
      return false;
    return true;
  }
  bool operator != (const BeveragePreferenceService_getBeverage_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BeveragePreferenceService_getBeverage_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class BeveragePreferenceService_getBeverage_pargs {
 public:


  virtual ~BeveragePreferenceService_getBeverage_pargs() noexcept;
  /**
   * 
   * @see BeverageType
   */
  const BeverageType::type* btype;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _BeveragePreferenceService_getBeverage_result__isset {
  _BeveragePreferenceService_getBeverage_result__isset() : success(false) {}
  bool success :1;
} _BeveragePreferenceService_getBeverage_result__isset;

class BeveragePreferenceService_getBeverage_result {
 public:

  BeveragePreferenceService_getBeverage_result(const BeveragePreferenceService_getBeverage_result&);
  BeveragePreferenceService_getBeverage_result& operator=(const BeveragePreferenceService_getBeverage_result&);
  BeveragePreferenceService_getBeverage_result() noexcept
                                               : success() {
  }

  virtual ~BeveragePreferenceService_getBeverage_result() noexcept;
  std::string success;

  _BeveragePreferenceService_getBeverage_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const BeveragePreferenceService_getBeverage_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const BeveragePreferenceService_getBeverage_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BeveragePreferenceService_getBeverage_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _BeveragePreferenceService_getBeverage_presult__isset {
  _BeveragePreferenceService_getBeverage_presult__isset() : success(false) {}
  bool success :1;
} _BeveragePreferenceService_getBeverage_presult__isset;

class BeveragePreferenceService_getBeverage_presult {
 public:


  virtual ~BeveragePreferenceService_getBeverage_presult() noexcept;
  std::string* success;

  _BeveragePreferenceService_getBeverage_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class BeveragePreferenceServiceClient : virtual public BeveragePreferenceServiceIf {
 public:
  BeveragePreferenceServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  BeveragePreferenceServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getBeverage(std::string& _return, const BeverageType::type btype) override;
  void send_getBeverage(const BeverageType::type btype);
  void recv_getBeverage(std::string& _return);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class BeveragePreferenceServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<BeveragePreferenceServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) override;
 private:
  typedef  void (BeveragePreferenceServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_getBeverage(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  BeveragePreferenceServiceProcessor(::std::shared_ptr<BeveragePreferenceServiceIf> iface) :
    iface_(iface) {
    processMap_["getBeverage"] = &BeveragePreferenceServiceProcessor::process_getBeverage;
  }

  virtual ~BeveragePreferenceServiceProcessor() {}
};

class BeveragePreferenceServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  BeveragePreferenceServiceProcessorFactory(const ::std::shared_ptr< BeveragePreferenceServiceIfFactory >& handlerFactory) noexcept :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) override;

 protected:
  ::std::shared_ptr< BeveragePreferenceServiceIfFactory > handlerFactory_;
};

class BeveragePreferenceServiceMultiface : virtual public BeveragePreferenceServiceIf {
 public:
  BeveragePreferenceServiceMultiface(std::vector<std::shared_ptr<BeveragePreferenceServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~BeveragePreferenceServiceMultiface() {}
 protected:
  std::vector<std::shared_ptr<BeveragePreferenceServiceIf> > ifaces_;
  BeveragePreferenceServiceMultiface() {}
  void add(::std::shared_ptr<BeveragePreferenceServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void getBeverage(std::string& _return, const BeverageType::type btype) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getBeverage(_return, btype);
    }
    ifaces_[i]->getBeverage(_return, btype);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class BeveragePreferenceServiceConcurrentClient : virtual public BeveragePreferenceServiceIf {
 public:
  BeveragePreferenceServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  BeveragePreferenceServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getBeverage(std::string& _return, const BeverageType::type btype) override;
  int32_t send_getBeverage(const BeverageType::type btype);
  void recv_getBeverage(std::string& _return, const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
