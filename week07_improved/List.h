#pragma once
#include <iostream>
#include "Node.h"

class List {
    public:
        List();
        List(const List &source); // Copy constructor
        ~List();

        List& insert(int val, int append = List::End);
        void print()const; // Prints the list in the console
        Node * find(int val)const; // Returns a pointer to an element with a given value or returns null
        Node *get_head() {return head_;};

        static int Begin;
        static int End;

    private:
        Node *head_;
};