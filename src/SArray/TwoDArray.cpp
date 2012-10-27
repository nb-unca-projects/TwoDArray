#include "TwoDArray.h"
#include <string>
#include <assert.h>
#include <iostream>
#include <vector>

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def) {
  rows = r;
  cols = c;
  defaultValue = def;
  rowArray = std::vector< Node<T>* >(r, new Node<T>(0,0,0));
  colArray = std::vector< Node<T>* >(c, new Node<T>(0,0,0));
  }
template <typename T>
TwoDArray<T>::~TwoDArray() {

} 
template <typename T>
void TwoDArray<T>::insert(int r, int c, T value) {
  assert(r<rows && r>=0);
  assert(c<cols && c>=0);
  
  Node<T>* beforeRow = rowArray[r]->getNextRight();
  Node<T>* currRow = rowArray[r]->getNextRight()
  Node<T>* beforeCol = colArray[c]->getNextDown();
  Node<T>* currCol = colArray[c]->getNextDown();
  //the empty case
  if (currRow == 0 && currCol == 0) {
    Node<T>* newNode = new Node<T>(r, c, value);
    beforeRow->setNextRight(newNode);
    beforeCol->setNextDown(newNode);
  } else {
  
  while (currRow->getNextRight() != 0 
	&& currRow->getCol() != c) {
    beforeRow = currRow;
    currRow = currRow->getNextRight();
  }
  while (currCol->getNextDown() != 0 
	&& currCol->getRow() != r) {
    beforeCol = currCol;
    currCol = currCol->getNextDown();
  }
  Node<T>* newNode = new Node<T>(r, c, value);
  currRow->setNextRight(newNode);
  currCol->setNextDown(newNode);
  } //end else*/
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
//template class TwoDArray<double>;
//template class TwoDArray<std::string>;
