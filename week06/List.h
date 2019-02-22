#ifndef LIST_H
#define LIST_H

struct elem{
    int *A;
    elem *next;
};

struct List{
    elem *head;
};


void prepare(List *, const List *list_2 = nullptr);

void add(List *, int [2][2]);

int empty(const List*);

void print(const List*);

void clear(List*);

#endif