#ifndef _NEURON_HPP
#define _NEURON_HPP

#include <iostream>
using namespace std;

class Neuron {
public:
  // constructor
  Neuron(double val);

  void setVal(double val);
  // f(x) = x/(1 + |x|) -- fast sigmoid function
  void activate();


  // f'(x) = f(x) * (1 - x)
  void derive();

  double getVal() {
    return this->val;
  }

  double getActivatedVal() {
    return this->activatedVal;
  }

  double getDerivedVal() {
    return this->derivedVal;
  }

  void derived();
private:
  double val;

  double activatedVal;

  double derivedVal;
};

#endif
