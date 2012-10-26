#include "Node.h"
#include <string>

template <typename T>
Node<T>::Node(int r, int c, T v) {
  row = r;
  col = c;
  value = v;
}
template <typename T>
Node<T>::~Node(){

}
template <typename T>
void Node<T>::setValue(T v){
  value = v;
}
template <typename T>
T Node<T>::getValue() {
  return value;
}
template <typename T>
int Node<T>::getRow() {
  return row;
}
template <typename T>
int Node<T>::getCol() {
  return col;
}
template <typename T>
void Node<T>::setNextDown(Node<T>* nd) {
  down = nd;
}
template <typename T>
void Node<T>::setNextRight(Node<T>* nr) {
  right = nr;
}
template <typename T>
Node<T>* Node<T>::getNextDown() {
  return down;
}
template <typename T>
Node<T>* Node<T>::getNextRight() {
  return right;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;
