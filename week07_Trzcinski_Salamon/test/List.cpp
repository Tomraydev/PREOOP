#include <iostream>
#include "List.h"

bool List::Begin = true;
bool List::End = false;

List::List(){
    head_ = nullptr;
}

List::List(List& skad){
    head_ = new Node(skad.head_->data(), nullptr);
    Node* tmp = skad.head_;
    
    while(tmp->next_ != nullptr){
        tmp = tmp->next_;
        insert(tmp->data(), List::End);
    }
}

List& List::insert(int wartosc, bool gdzie){
    if(gdzie){
        Node *tmp = new Node(wartosc, head_);
        head_ = tmp;
    }
    else{
        Node *tmp = head_;
        while(tmp->next_ != nullptr){
            tmp = tmp->next_;
        }
        Node *tmp2 = new Node(wartosc, nullptr);
        tmp->next_ = tmp2;
    }
    return *this;
    
}

void List::print() const{
    Node* tmp = head_;
    std::cout << "[";
    while(tmp != nullptr){
        std::cout << " " << tmp->data();
        tmp = tmp->next_;
    }
    std::cout << "]" << std::endl;
}

Node* List::find(int wartosc) const{
    Node* tmp = head_;
    while(tmp != nullptr){
        if(tmp->data() == wartosc){
            return tmp;
        }
        tmp = tmp->next_;
    }
    return tmp;
}
