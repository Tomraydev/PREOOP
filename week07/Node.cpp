#include "Node.h"

Node::Node(){
    value = 10;
    next = NULL;
}

Node::~Node(){}

int Node::data()const{
    return value;
}