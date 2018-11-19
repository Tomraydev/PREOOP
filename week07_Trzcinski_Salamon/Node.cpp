#include <iostream>

#include "Node.h"

Node::Node(){
    data_ = 0;
    next_ = nullptr;
}

Node::Node(int wartosc, Node* next){
    data_ = wartosc;
    next_ = next;
}

