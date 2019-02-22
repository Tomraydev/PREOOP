#include <iostream>
#include "List.h"

void prepare(List *list1, const List *list2){
    list1->head = nullptr;
    return;
    // implement overwrite
}

void add(List *list1, int val[2][2]){
    elem *tmp = list1->head;
    //Searching for the end of the list
    if (empty(list1)){
        tmp = new elem;
        list1->head = tmp;
    }else {
        while(tmp->next != nullptr){
            tmp = tmp->next;
        }
        tmp->next = new elem;
        tmp = tmp->next;
    }
    
    tmp->A = new int[4];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            tmp->A[i*2 +j] = val[i][j];
        }
    }
    //std::cout << tmp->A[0] << tmp->A[1] << tmp->A[2] << tmp->A[3] << std::endl;
    return;
}

int empty(const List *list1){
    if (list1->head == nullptr){
        return 1;
    }else {
        return 0;
    }
}

void print(const List *list1){
    //Print the first row
    elem *tmp = list1->head;
    while (tmp != nullptr){
        printf("%d %d   ", tmp->A[0], tmp->A[1]);
        tmp = tmp->next;
    }
    printf("\n");

    //Print the second row
    tmp = list1->head;
    while (tmp != nullptr){
        printf("%d %d   ", tmp->A[2], tmp->A[3]);
        tmp = tmp->next;
    }
    printf("\n");

    return;
}

void clear(List *list1){
    if (empty(list1)){
        return;
    }

    elem *previous = list1->head;
    elem *current = list1->head->next;

    while (current != nullptr){
        delete[] previous->A;
        delete previous;
        previous = nullptr;
        previous = current;
        current = current->next;
    }
    delete[] previous->A;
    delete previous;
    previous = nullptr;
    
    return;
}