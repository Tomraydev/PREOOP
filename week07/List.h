#pragma once
#include <iostream>
#include "Node.h"

class List {
    public:
        List();
        ~List();
        static int Begin;
        static int End;

        Node *head;

        List& insert(int val, int where=0);
        void print();
        const Node * find(int val)const;
};