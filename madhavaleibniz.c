#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0, sum = 0, fract = 1.0;
    int odd = 1, sign = 0;
    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            sign = 1;
        } else {
            sign = -1;
        }
        fract = 1.0 / (odd * pow (3, i));
        fract = sign * fract;
        sum += fract;
        odd = odd + 2;
        pi = sqrt (12) * sum;
        printf("PI = %f\n", pi); //it gets better at the fifth iteration
    }   
}
