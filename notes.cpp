#include <iostream>
#include <cstdlib>

using namespace std;


class Name {
    public:
        Name() // Constructor
        ~Name() // Destructor
        Name(const Name &source) // Copy constructor
        void print() // method
        void print()const // const method
        static void print() /// static method. can only access static members.
        
    private:
        int member;
        static int member; // shared across all instances

}
// HEADER FILES
#pragma once; // Only include once in a compilation

// Miscellaneous
enum weekend {SAT, SUN}; // enumeration type declaration
weekday day = SAT; // day is a variable of type weekend
static int x; // Global lifetime even if local scope