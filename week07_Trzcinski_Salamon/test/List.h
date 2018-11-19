#ifndef List_h
#define List_h

#include "Node.h"

class List{
    public:
        List();
        List(List& skad);
        List& insert(int wartosc, bool gdzie = false);
        void print() const;
        Node* find(int wartosc) const;
        static bool Begin;
        static bool End;
    private: 
        Node *head_;
};


#endif