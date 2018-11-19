#include <iostream> 

int getBit(const unsigned char * bits, const int bit) {
    int word = bit / 8;
    int place = bit % 8;

    unsigned char mask = 1 << place;

    return (bits[word] & mask) && 1; 

}

void flipBit(unsigned char * bits, const int bit) {
    int word = bit / 8;
    int place = bit % 8;

    unsigned char mask = 1 << place;

    unsigned char c = bits[word] ^ mask;

    bits[word] = c;
}

void setBit(unsigned char * bits, const int bit, const int value) {
    if (getBit(bits, bit) != value) {
        flipBit(bits, bit);
    }
}


void printBits(const unsigned char * bits, const int first_bit, const int last_bit) {
    for (int i = first_bit; i < last_bit; i++) {
        if ( (i != 0) && (i % 8 == 0) ) {
            std::cout << " ";
        }
        std::cout << getBit(bits, i);
    }
    std::cout << std::endl;
}

void printBits(const unsigned char * bits, const int length) {
    printBits(bits, 0, length);
}

void resetBits(unsigned char * bits, const unsigned char mask, const int first_bit, const int last_bit) {
    for (int i = 0; i < last_bit; i++) {
        unsigned char value = mask & (1 << (i % 8));
        setBit(bits, i, value);

    }
}
void resetBits(unsigned char * bits, const unsigned char mask, const int length) {
    resetBits(bits, mask, 0, length);
}


