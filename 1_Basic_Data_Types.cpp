#include <iostream>
#include <stdio.h>

int main() {
    int a;
    long b;
    char c;
    float d;
    double f;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &f);
    printf( "%d\n%ld\n%c\n%.3f\n%.9lf",a,b,c,d,f);
}
