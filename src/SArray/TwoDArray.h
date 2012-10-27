#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__

#include "Node.h"
#include <vector>

template <typename T>
class TwoDArray {
  private:
    int rows;
    int cols;
    T defaultValue;
    std::vector< Node<T>* > rowArray;
    std::vector< Node<T>* > colArray;

  public:
    TwoDArray<T>(int r, int c, T def);
    ~TwoDArray<T>();
    void insert(int r, int c, T value);
    T access(int r, int c);
    void remove(int r, int c);
    void print();
    int getNumRows();
    int getNumCols();
};

#endif
