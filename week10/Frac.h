#pragma once

class Frac {
    private:
        int l; // numerator
        int m; // denominator
        static int precision;
    public:
        Frac(int x, int y = 1); // fraction = x/y
        Frac(double); // construct fraction from double. Simplify if it's an integer
        operator double()const {return static_cast<double>(l)/m;};// convert fraction to double

        void print()const; // print the fraction
        void print(std::string)const; // print out the fraction. Takes a string as description

        static void setCnvPrecision(int); // set precision for all future instances
        Frac add(const Frac&)const; // add two fractions together (no simplify)
};