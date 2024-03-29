#include "TwoDArray.h"
#include <string>
#include <iostream>
#include <assert.h>

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def) {
  rows = r;
  cols = c;
  defaultValue = def;
  theArray = new T*[r];
  for(int i=0; i<r; ++i){
    theArray[i] = new T[c];
    for(int j=0; j<c; j++) {
      theArray[i][j] = def;
    }
  }
}
template <typename T>
TwoDArray<T>::~TwoDArray(){
  delete theArray;
}
template <typename T>
void TwoDArray<T>::insert(int r, int c, T value) {
  assert(r<rows);
  assert(c<cols);
  theArray[r][c] = value;
}
template <typename T>
T TwoDArray<T>::access(int r, int c){
  assert(r<rows);
  assert(c<cols);
  T result;
  result = theArray[r][c];
  return result;
}
template <typename T>
void TwoDArray<T>::remove(int r, int c){
  assert(r<rows);
  assert(c<cols);
  theArray[r][c] = defaultValue;
}
template <typename T>
void TwoDArray<T>::print(){
  for (int i=0; i<rows; ++i) {
    std::cout << "[";
    for (int k=0; k<cols-1; ++k) {
      std::cout << theArray[i][k] << ", ";
    }
    std::cout << theArray[i][cols-1] << "]" << std::endl;
  }
}
template <typename T>
int TwoDArray<T>::getNumRows() {
  return rows;
}
template <typename T>
int TwoDArray<T>::getNumCols() {
  return cols;
}

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
