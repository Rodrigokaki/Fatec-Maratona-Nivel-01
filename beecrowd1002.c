#include <stdio.h>

int main(){

    double r, pi = 3.14159, area;

    scanf("%lf", &r);

    area = pi*(r*r);

    printf("A=%.4f\n", area);

    return 0;
}