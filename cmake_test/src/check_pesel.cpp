#include <iostream>
#include "check_pesel.h"

char find_pesel_crtl(const char *pesel){
    int digits[10];
    int weights[10] = {1,3,7,9,1,3,7,9,1,3};
    for(int i = 0; i < 10; i++){
        digits[i] = pesel[i] - '0';
    }
    
    unsigned int ctrl_num = 0;
    for(int i = 0; i < 10; i++){
        ctrl_num += digits[i] * weights[i];
    }
    ctrl_num = ctrl_num%10;
    ctrl_num = (10 - ctrl_num)%10;
    char ctrl_num_char = '0' + ctrl_num;

    return ctrl_num_char;
}

int pesel_correct(const char *pesel){
    char ctrl_num = find_pesel_crtl(pesel);
    if (pesel[10] == ctrl_num){
        return 1;
    } else {
        return 0;
    }
}
