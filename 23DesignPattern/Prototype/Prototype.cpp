//Prototype.cpp
//
//

#include "Prototype.h"

#include <iostream>
using namespace std;

Prototype::Prototype()
{
  cout << "Prototype ..." << endl;
}

Prototype::~Prototype()
{
  cout << "~Prototype ... "  << endl;
}

Prototype *Prototype::Clone() const
{
  return 0;
}

ConcretePrototype::ConcretePrototype()
{
  cout << "ConcretePrototypetype ... "  << endl;
}

ConcretePrototype::~ConcretePrototype()
{
  cout << "~ConcretePrototype ... " << endl;
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype &cp)
{
  cout << "ConcretePrototype copy ... " << endl;
}

Prototype * ConcretePrototype::Clone() const 
{
  return new ConcretePrototype(*this);
}
