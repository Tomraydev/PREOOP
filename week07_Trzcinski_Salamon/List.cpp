#include <iostream>
#include "List.h"

using std::cout;
using std::endl;

bool List::Begin = true;
bool List::End = false;

List::List(){
    head_ = nullptr;
}

List::List(List &skad){
	head_ = new Node(skad.getHead()->data(),nullptr);
    //head_ = nullptr;
	Node* tmp = skad.getHead();
	tmp = tmp->next_;
    while(tmp!=nullptr){
        insert(tmp->data(), false);
		tmp=tmp->next_;
    }
}

List::~List(){
    Node* tmp = head_;
    Node* tmp2 = head_;
    while(tmp != nullptr){
        tmp = tmp->next_;
        delete tmp2;
        tmp2 = tmp;
    }
}

List& List::insert(int wartosc, bool gdzie){
    if(gdzie){
        Node* tmp = new Node(wartosc, head_);
        head_ = tmp;
    }
    else{
        Node* temp = new Node(wartosc, nullptr);
        Node* temp2 = head_;
        while(temp2->next_ != nullptr) temp2 = temp2->next_;
        temp2->next_ = temp;
    }
	// print();
    return *this;
}

void List::print(){
    cout << "[  ";
    Node* tmp = head_;
    while(tmp){
        cout << ' ' << tmp->data();
        tmp = tmp->next_;
    }
    cout << ']' << endl;
}

Node* List::find(int wartosc) const{
    Node* tmp = head_;
    while(tmp != nullptr){
        if(tmp->data() == wartosc)
            return tmp;

        tmp = tmp->next_;
    }
    return nullptr;
}
