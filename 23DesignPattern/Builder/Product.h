//Product.h
//

#ifndef __PRODUCT_H__
#define __PRODUCT_H__


class Product
{
public:
  Product();
  ~Product();
  void ProducePart();
};

class ProductPart
{
public:
  ProductPart();
  ~ProductPart();
  ProductPart * BuildPart();
};

#endif
