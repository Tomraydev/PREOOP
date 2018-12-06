#include<iostream>
#include<cmath>
#include"FlexiTab.h"

int FlexiTab::getStart(){
    return start;
}
int FlexiTab::getEnd(){
    return end;
}
double* FlexiTab::getA(){
    return A;
}

FlexiTab::FlexiTab(int s, int e){ 
    start = s;
    end = e;
    A = new double[arrSize()];
}
FlexiTab::FlexiTab(const FlexiTab& S){ 
    start = S.start;
    end = S.end;
    A = new double[arrSize()];
    for(int i = 0; i < arrSize(); i++){
        A[i] = S.A[i];
    }
}

FlexiTab::FlexiTab(const FlexiTab& S, int s, int e){ 
    start = s;
    end = e;
    A = new double[arrSize()];

    int shift = s - S.start;
    for(int i = 0; i < arrSize(); i++){
        A[i] = S.A[ shift+i ];
    }
}

FlexiTab::~FlexiTab(){ 
    delete [] A;
}

void FlexiTab::setAll(double val){ 
    for(int i = 0; i < arrSize(); i++){
        A[i] = val;
    }
    return;
}
double& FlexiTab::at(int index){ 
    int i = arrSize() - (end - index);
    return A[i];

}

bool FlexiTab::inRange(int x)const{ 
    if( x < end && x >= start){
        return 1;
    } else{
        return 0;
    }
}

int FlexiTab::FlexiTab::arrSize()const{ 
    return end - start;
}

void FlexiTab::print(const FlexiTab& Tab){ 
    for(int i = 0; i < Tab.arrSize(); i++){
        std::cout << Tab.start+i << ":" << Tab.A[i] << " ";
    }
    std::cout << std::endl;
    return;
}