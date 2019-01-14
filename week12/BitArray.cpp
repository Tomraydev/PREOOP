#include<iostream>
#include "BitArray.h"


BitArray::BitArray(int n, bool v){
    size = n;
    byte_size = (n+8)/8;
    arr = new unsigned char[byte_size];
    if(v){
        for(int i = 0; i < byte_size; i++){
            arr[i] = 0xFF;
        }
    }else{
        for(int i = 0; i < byte_size; i++){
            arr[i] = 0x00;
        }
    }
}
BitArray::~BitArray(){
    delete [] arr;
}

void BitArray::print()const{
    for(int i = 0; i < byte_size; i++){
        unsigned char tmp = arr[i];
        for(int j = 0; j < 8; j++){
            printf("%d", tmp & j);
        }
        printf("\n");
    }
    return;
}

bool& BitArray::operator[](int i){
    return *this;
}