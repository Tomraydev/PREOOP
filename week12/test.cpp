#include<iostream>
using namespace std;


class BitArray{
    private:
        int size;
        int byte_size;
        unsigned char* arr;
    public:

    BitArray(int n, bool v = false);
    ~BitArray();
    void print()const;
    bool& operator [](int index)const;

};

BitArray::BitArray(int n, bool v){
    size = n;
    byte_size = (n+8)/8;
    arr = new unsigned char[byte_size];
}
BitArray::~BitArray(){
    delete [] arr;
}

int main(){
    int byte_size = 5;
    unsigned char * arr;
    arr = new unsigned char[byte_size];
    
    for(int i = 0; i < byte_size; i++){
            arr[i] = 0xFF;
    }   

    for(int i = 0; i < byte_size; i++){
        unsigned char tmp = arr[i];
        for(int j = 1; j < 256; j*=2){
            unsigned char str =  (tmp & j)<<j;
            printf("%d ", tmp & j);
        }
        printf("\n");
    }
    

    return 0;   
}