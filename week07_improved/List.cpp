#include "List.h"
#include <iostream>

using namespace std;

int List::Begin = 0;
int List::End = 1;

List::List(){
    head_ = nullptr;
}

List::List(const List &source){ 
    head_ = new Node(source.head_->data(), nullptr);
    Node *tmp = source.head_;
    while(tmp != nullptr){
        insert(tmp->data(), List::End);
        tmp = tmp->next;
    }
}

List::~List(){
    Node *prev = head_;
    Node *tmp = head_;
    while( tmp != nullptr){
        tmp = tmp->next;
        delete prev;
        prev = tmp;
    }
}

List& List::insert(int val, int append){
    if(append){
        Node *new_node = new Node(val, nullptr);
        Node *tmp = head_;
        while(tmp->next != nullptr) {tmp = tmp->next;}
        tmp->next = new_node;
    } else{ //prepend
        Node* new_node = new Node(val, head_);
        head_ = new_node;
    }
    //cout << "Inserted " << val << " at " << append << ": ";
    //print();
    return *this;
}
void List::print()const{
    cout << "[ ";
    Node *tmp = head_;
    while(tmp){
        cout << tmp->data() << " ";
        tmp=tmp->next;
    }
    cout << " ]" <<endl;
    return;
}

Node* List::find(int val)const{
    Node* tmp = head_;
    while(tmp != nullptr){
        if(tmp->data() == val){
            return tmp;
        }
        tmp = tmp->next;
    }
    return nullptr;
}