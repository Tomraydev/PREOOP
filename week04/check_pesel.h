#ifndef check_pesel_h
#define check_pesel_h
/**
Calculates given PESEL's control number.
*/
char find_pesel_crtl(const char *);

/**
If the PESEL is correct returns 1, else returns 0.
*/
int pesel_correct(const char *);






#endif