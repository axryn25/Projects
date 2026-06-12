#include <stdio.h>
#include <math.h>

int main(){
    // adding al the variables
    double principal = 0;
    double rate = 0;
    double years = 0;
    double compound_intrest = 0;
    double total = 0;

    

    // adding the god damn user input

    printf("please enter the principal amount: ");
    scanf(" %lf",&principal);


    printf("please enter the intrest rate: ");
    scanf(" %lf",&rate);

    printf("please enter the number of years the amount should be calculated for: ");
    scanf(" %lf", &years);
    // adding the math formula for compound intrest

    total = principal*pow(1+rate/100,years);
    compound_intrest = total-principal;
    printf("the amount to be paid would be %.2lf with a compound intrest of %.2lf",total, compound_intrest);
    




    return 0;
}