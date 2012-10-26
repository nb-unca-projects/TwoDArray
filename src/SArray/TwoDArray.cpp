#include "TwoDArray.h"
#include <string>
#include <assert.h>

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def) {
  rows = r;
  cols = c;
  defaultValue = def;
  rowArray = new Node<T>*[r];
  colArray = new Node<T>*[c];  
}
template <typename T>
TwoDArray<T>::~TwoDArray() {

} 
template <typename T>
void TwoDArray<T>::insert(int r, int c, T value) {
  assert(r<rows && r>=0);
  assert(c<cols && c>=0);
  Node<T>* n = new Node<T>(r, c, value);
  
  delete n;
}
template <typename T>
T TwoDArray<T>::access(int r, int c) {
  assert(r<rows && r>=0);
  assert(c<cols && c>=0);
  Node<T>* curr = rowArray[r];
  while (curr != 0) {
    if (curr->getCol() == c) {
      return curr->getValue();
    }
    curr = curr->getNextRight();
  }
  return defaultValue;
}
template <typename T>
void TwoDArray<T>::remove(int r, int c) {
  assert(r<rows && r>=0);
  assert(c<cols && r>=0);
  Node<T>* beforeRow = rowArray[r];
  Node<T>* currRow = rowArray[r];
  Node<T>* beforeCol = colArray[c];
  Node<T>* currCol = colArray[c];
  //loop across starting from rowArray
  while (currRow->getNextRight() != 0 && currRow->getCol() != c) {
    beforeRow = currRow;
    currRow = currRow->getNextRight();
  }
  //loop down starting from colArray
  while (currCol->getNextDown() != 0 && currCol->getRow() != r) {
    beforeCol = currCol;
    currCol = currCol->getNextDown();
  }
  if (currRow->getCol() == c) {
    beforeRow->setNextRight(currRow->getNextRight());
    beforeCol->setNextDown(currCol->getNextDown());
    delete currRow;
    delete currCol;
  }
}
template <typename T>
void TwoDArray<T>::print(){

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
