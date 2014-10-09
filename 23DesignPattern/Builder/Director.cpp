//Director.cpp
//
//

#include "Director.h"
#include "Builder.h"

#include <iostream>
using namespace std;

Director::Director(Builder *bld)
{
  _bld = bld;
  cout << "Director ... " << endl;
}

Director::~Director() 
{
  cout << "~Director ... " << endl;
}

void Director::Construct()
{
  _bld->BuildPartA("user-defined PartA");
  _bld->BuildPartB("user-defined PartB");
  _bld->BuildPartC("user-defined PartC");

  delete _bld->GetProduct();
}
