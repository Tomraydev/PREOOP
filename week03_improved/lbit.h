#ifndef LBIT
#define LBIT

/*Applies given mask to the array */
void resetBits( unsigned char *arr , int mask, int len);

void printBits(const unsigned char *arr, int stop, int start=0 );

void flipBit(unsigned char *arr, int n);

void setBit(unsigned char *arr, int n, int value);

const unsigned char getBit(const unsigned char *arr, int n);

#endif