#ifndef VENDING_MACHINE_MICROSERVICES_BEVERAGEHANDLER_H_
#define VENDING_MACHINE_MICROSERVICES_BEVERAGEHANDLER_H_

#include "../../gen-cpp/BeveragePreferenceService.h"

namespace vending_machine {

class BeveragePreferenceServiceHandler : public BeveragePreferenceServiceIf {
 public:
  BeveragePreferenceServiceHandler() = default;

  void getBeverage(std::string& _return, const BeverageType::type btype) override {
    if (btype == BeverageType::COLD) {
      _return = "soda";
    } else {
      _return = "tea";
    }
  }
};

}  // namespace vending_machine

#endif  // VENDING_MACHINE_MICROSERVICES_BEVERAGEHANDLER_H_
