//Product.h
//
//This a simple example for Factory Design Pattern

#ifndef __PRODUCT_H__
#define __PRODUCT_H__

class Product
{
public:
  virtual ~Product() = 0;

protected:
  Product();
};

class ConcreteProduct : public Product
{
public:
  ~ConcreteProduct();
  ConcreteProduct();
};

#endif
