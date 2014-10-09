//Build.cpp
//
//

#include "Builder.h"
#include "Product.h"

#include <iostream>
using namespace std;

Builder::Builder()
{
  cout << "Builder ... " << endl;
}

Builder::~Builder()
{
  cout << "~Builder ... " << endl;
}

ConcreteBuilder::ConcreteBuilder()
{
  cout << "ConcreteBuilder ... " << endl;
}

ConcreteBuilder::~ConcreteBuilder()
{
  cout << "~ConcreteBuilder ... " << endl;
}

void ConcreteBuilder::BuildPartA(const string &buildPara)
{
  cout << "step1: Build PartA ...  " << buildPara << endl;
}

void ConcreteBuilder::BuildPartB(const string &buildPara)
{
  cout << "step1: Build PartB ...  " << buildPara << endl;
}

void ConcreteBuilder::BuildPartC(const string &buildPara)
{
  cout << "step1: Build PartC ...  " << buildPara << endl;
}

Product * ConcreteBuilder::GetProduct()
{
  BuildPartA("pre-defined PartA");
  BuildPartB("pre-defined PartB");
  BuildPartC("pre-defined PartC");

  return new Product();
}
