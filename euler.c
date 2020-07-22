#include <stdio.h>

float factorial(long long int);

int main() {
    double small_val;
    double e;
    long long int n = 1;

    printf("Enter a very small number: ");
    scanf("%lf", &small_val);

    //computing the value of e based on input
    e += 1;
    while(1/factorial(n) >= small_val){
        e += 1/factorial(n);
        n++;
    }

    //printing the result to screen
    printf("\n e: %.15lf\n", e);
    return 0;
}

//function to compute the factorial of any given integer
float factorial(long long int val){
    for(int i = val-1; i > 0; i--) val = val * i;
    return val;
}