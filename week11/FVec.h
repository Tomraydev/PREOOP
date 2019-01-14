#pragma once

class FVec{
    private:
        int *vec; // Vector
        int length; // Vector length
    public:
    FVec(int n); // Vector of length n
    FVec(const FVec&); // Copying constructor
    ~FVec(); // Deallocate memory

    FVec& set(int i, int val); // set vec[i] to 'val' 
    void print(std::string)const; // print the vector

    const FVec& operator+(int a)const; // Add a to all elements
    const FVec& operator+(const FVec& S)const; // Add two vectors together (value to value)
    FVec& operator=(const FVec& S); // Assign vector to vector
};