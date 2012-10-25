#include "TwoDArray.h"
#include <string>

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
  theArray[r][c] = value;
}
template <typename T>
T TwoDArray<T>::access(int r, int c){
  T result;
  result = theArray[r][c];
  return result;
}
template <typename T>
void TwoDArray<T>::remove(int r, int c){
  theArray[r][c] = defaultValue;
}
template <typename T>
void TwoDArray<T>::print(){

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
