#pragma once

class Arr2D {
    public:
        Arr2D(int x, int y);
        ~Arr2D();
        Arr2D adpot(int* data_arr, int x, int y);

        // int operator[](int x, int y);

        int* operator[](int x);
        void print()const;


    private:
        int dim_1;
        int dim_2;
        int* tab;

        bool manage_mem;
};

void operator<<=(const char *text, const Arr2D& A);