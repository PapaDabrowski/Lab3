#pragma once 
#include "Book.h"
#include <string>

class Drukowana:public Book
{
  std::string oprawa_;
public:
  virtual void info();
  Drukowana(unsigned int,std::string);
};
