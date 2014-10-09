//Director.h
//
//
#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__

class Builder;

class Director
{
public:
  Director(Builder *bld);
  ~Director();
  void Construct();

private:
  Builder* _bld;
};


#endif
