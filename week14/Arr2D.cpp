#include<iostream>
#include"Arr2D.h"

using std::cout;
using std::endl;

Arr2D::Arr2D(int x, int y): dim_1(x), dim_2(y){
    tab = new int[dim_1*dim_2];
    manage_mem = true;
}

Arr2D::Arr2D(int* data_arr, int x, int y): dim_1(x), dim_2(y){
    tab = data_arr;

}

Arr2D::~Arr2D(){
    if(manage_mem){
        delete [] tab;
    }
}

int* Arr2D::operator[](int x){
    return tab + dim_1*x;
}

void operator<<=(const char *text, const Arr2D& A){
    cout << text << endl;
    A.print();
    cout << text << endl;
}

void Arr2D::print()const{
    for(int i = 0; i < dim_1; i++){
        for(int j = 0; j < dim_2; j++){
            printf("%d ", tab[dim_1*i + j] );
        }
        printf("\n");
    }
}

Arr2D Arr2D::adopt(int* data_arr, int x, int y){
    return Arr2D(data_arr, x, y);
}