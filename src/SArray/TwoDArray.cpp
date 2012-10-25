#include "TwoDArray.h"
#include <string>

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def){

}
TwoDArray<T>::~TwoDArray(){

}
void TwoDArray<T>::insert(int r, int c, T value){

}
T TwoDArray<T>::access(int r, int c){
  return NULL;
}
void TwoDArray<T>::remove(int r, int c) {

}
void TwoDArray<T>::print(){

}
int TwoDArray<T>::getNumRows(){
  return rows;
}
int TwoDArray<T>::getNumCols(){
  return cols;
}

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std:string>;
