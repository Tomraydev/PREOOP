#include "Node.h"

Node::Node(){
    data_ = 0;
    next = nullptr;
}

Node::Node(int val, Node* next_node){
    data_ = val;
    next = next_node;
}