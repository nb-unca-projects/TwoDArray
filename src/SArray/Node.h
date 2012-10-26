#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
  private:
    T value;
    int row;
    int col;
    Node<T>* down;
    Node<T>* right;
    
  public:
    Node<T>(int r, int c, T v);
    ~Node<T>();
    void setValue(T v);
    T getValue();
    int getRow();
    int getCol();
    void setNextDown(Node<T>* nd);
    void setNextRight(Node<T>* nr);
    Node<T>* getNextDown();
    Node<T>* getNextRight();
};

#endif
