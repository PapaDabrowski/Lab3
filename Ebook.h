#pragma once 
#include "Book.h"

class Ebook:public Book
{
  unsigned int rozmiar_MB_;
public:
  virtual void info();
  Ebook(unsigned int ,unsigned int);
};
