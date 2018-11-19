#pragma once
#include <iostream>

class Node {
    public:
        Node();
        Node(int , Node*);
        int data()const {return data_;};

        Node *next;
    private:
        int data_;
};