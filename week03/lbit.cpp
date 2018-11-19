#include <iostream>

void resetBits(unsigned char *arr , int mask, int len){
    for(int i = 0; i < len; i++){
        arr[i] = '0'; //temporary
    }
    return;
}

void printBits(const unsigned char *arr, int stop, int start){
    if(start != 0){
        int temp = start;
        start = stop;
        stop = temp;
    }
    for(int i = start; i < stop; i++){
        std::cout << arr[i];
        if( i%8 == 0 && i != 0){
            std::cout << ' ';
        }
    }
    std::cout << std::endl;
    return;
}

void flipBit(unsigned char *arr, int n){
    arr[n] = '1' - arr[n];
}

void setBit(unsigned char *arr, int n, int value){
    arr[n] = (unsigned char) value;
}

const unsigned char getBit(const unsigned char *arr, int n){
    return arr[n];
}
