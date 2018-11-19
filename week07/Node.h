#pragma once
#include <iostream>

class Node {
    public:
        Node();
        ~Node();

        int value;
        Node *next;

        int data()const;
};