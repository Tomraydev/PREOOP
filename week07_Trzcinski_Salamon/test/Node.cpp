#include <iostream>

#include "Node.h"

Node::Node(){
    next_ = nullptr;
    wartosc_ = 0;
}

Node::Node(int wartosc, Node* next){
    next_ = next;
    wartosc_ = wartosc;
}

