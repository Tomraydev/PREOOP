#pragma once

class FlexiTab {
    private:
        int start; // first index
        int end; // last+1 index
        double *A; // array of size (end-start) with indices [0 --- (end-start-1)]
    public:

        FlexiTab(int, int); // arguments = (start, end)
        FlexiTab(const FlexiTab& ); // Copy constructor (copy all)
        FlexiTab(const FlexiTab&, int, int); // Copy constructor (copy fragment)
        ~FlexiTab(); // deallocate memory


        void setAll(double); // set all values to the argument of this function
        double& at(int); // return reference to Array member (No range check!)
        bool inRange(int)const; // check if index is within array's range
        static void print(const FlexiTab&); // Print the whole array


        int arrSize()const; // return array size
        double* getA(); // get the pointer to the array
        int getStart(); // get the starting index of the array
        int getEnd(); // get last index of the array

};