#include "TwoDArray.h"
#include <string>
#include <vector>

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def){
  rows = r;
  cols = c;
  defaultValue = def;
  theArray = new std::vector< std::vector<T> >();
  for (int i=0; i<r; ++i){
    for (int j=0; j<c; ++j){
      theArray->at(r).at(c) = def;
    }
  }
}
template <typename T>
TwoDArray<T>::~TwoDArray(){

}
template <typename T>
void TwoDArray<T>::insert(int r, int c, T value){
  theArray->at(r).at(c) = value;
}
template <typename T>
T TwoDArray<T>::access(int r, int c){
  T result;
  result = theArray->at(r).at(c);
  return result;
}
template <typename T>
void TwoDArray<T>::remove(int r, int c) {
  theArray->at(r).at(c) = defaultValue;
}
template <typename T>
void TwoDArray<T>::print() {

}
template <typename T>
int TwoDArray<T>::getNumRows(){
  return rows;
}
template <typename T>
int TwoDArray<T>::getNumCols(){
  return cols;
}

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
