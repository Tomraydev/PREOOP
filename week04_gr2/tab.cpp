#include <iostream>
#include <cstdlib>
#include "tab.h"

using namespace std;

void init(Tab *A, int rows, int columns, double val){
    A->x = rows;
    A->y = columns;
    int size = rows * columns * sizeof(double);
    A->arr = (double *)malloc(size);
    return;
}

void diag(Tab *, double){
    return;
}

void set(Tab *, int, int, double){
    return;
}

void set_part(Tab *, TabRange, double){
    return;
}

void print(Tab *){
    return;
}

Tab * extract(Tab *, TabRange ){
    Tab *x = NULL;
    return x;
}

void clean(Tab *A){
    free(A->arr);
    return;
}