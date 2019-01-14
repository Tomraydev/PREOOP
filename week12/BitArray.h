#pragma once

class BitArray{
    private:
        int size;
        int byte_size;
        unsigned char* arr;
    public:

    BitArray(int n, bool v = false);
    ~BitArray();
    void print()const;
    bool& operator [](int i);



};