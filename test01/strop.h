#ifndef STROP
#define STROP

typedef struct {
    const char *tab[3];
}delimited ;

void chunk(const char *, delimited *, char);

int next(delimited *);

void part(delimited *, const char*);

#endif