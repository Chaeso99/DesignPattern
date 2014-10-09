//Product.cpp
//
//

#include "Product.h"


#include <iostream>
using namespace std;


Product::Product()
{
  ProducePart();
  cout << "return a product" << endl;
}

Product::~Product()
{
  cout << "~Product ... " << endl;
}

void Product::ProducePart()
{
  cout << "Build part of product ... " << endl;
}

ProductPart::ProductPart()
{
  cout << "ProductPart ... " << endl;
}

ProductPart::~ProductPart()
{
  cout << "~ProductPart ... " << endl;
}

ProductPart * ProductPart::BuildPart()
{
  return new ProductPart;
}

