#pragma once

struct SingleBit;

class BitArray {
    public:
        BitArray(int size, bool init = false);
        ~BitArray();
        void print()const;

        bool getByte(int which)const;
        void setByte(int which, bool toWhat);

        SingleBit operator[](int which);
        bool operator[](int which)const;
    private:
        int size_;
        unsigned char* tab_;
};

struct SingleBit{
    SingleBit(BitArray* from, int pos): from_(from), pos_(pos) {};
    void operator=(bool b);
    operator bool();

    private:
        BitArray *from_;
        int pos_;
};