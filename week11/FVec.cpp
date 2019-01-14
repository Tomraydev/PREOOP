#include<iostream>
#include"FVec.h"

FVec::FVec(int n){
    length = n;
    vec = new int[n];
    for(int i = 0; i < length; i++){
        vec[i] = 0;
    }
}
FVec::~FVec(){
    delete[] vec;
}

FVec::FVec(const FVec& S){
    length = S.length;
    vec = new int[S.length];
    for (int i = 0; i < S.length; i++){
        vec[i] = S.vec[i];
    }
}

FVec& FVec::set(int i, int val){
    vec[i] = val;
    return *this;
}

void FVec::print(std::string desc)const{
    std::cout << desc;
    // std::cout << "length = " << length << ",";
    for(int i = 0; i < length; i++){
        std::cout << " " << vec[i];
    }
    std::cout << std::endl;
}

const FVec& FVec::operator+(int a)const{
    for(int i = 0; i < length; i++){
        vec[i] = vec[i] + a;
    }
    return *this;
}

const FVec& FVec::operator+(const FVec& S)const {

    for(int i = 0; i < length; i++){
        vec[i] = vec[i] + S.vec[i];
    }
    return *this;
}

FVec& FVec::operator=(const FVec& S) {
    if (this == &S){
        return *this;
    }
    length = S.length;
    vec = new int[length];
    for (int i = 0; i < length; i++){
        vec[i] = S.vec[i];
    }
    return *this;
}