#ifndef tab_h
#define tab_h

struct Tab {
    int x;
    int y;
    double *arr;
    double value;
};

struct TabRange {
    int x1;
    int y1;
    int x2;
    int y2;
};

void init(Tab *, int, int, double);

void diag(Tab *, double);

void set(Tab *, int, int, double);

void set_part(Tab *, TabRange, double);

void print(Tab *);

Tab * extract(Tab *, TabRange );

void clean(Tab *);




#endif