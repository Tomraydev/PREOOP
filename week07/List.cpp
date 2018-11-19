#include "List.h"
#include <iostream>

int List::Begin = 0;
int List::End = 1;

List::List(){
    head = NULL;
}

List::~List(){}

List& List::insert(int val, int where){
    //where == 0 na poczatek
    if(where == 0){
        return *this;
    }else{
        return *this;
    }
    //where == 1 na koniec
    //return *this;
}
void List::print(){
    Node *temp = head;
    while(temp){
        std::cout << temp->data() << " ";
        temp=temp->next;
    }
    std::cout << std::endl;
    return;
}

const Node* List::find(int val)const{
    return NULL;
}