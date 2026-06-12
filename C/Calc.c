#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    int operation = 0;
    float value1 = '\0';
    float value2 = '\0';
    float result = '\0';

    printf("please enter an operation (in numbers)\n");
    printf("1) addition\n");
    printf("2) subtraction \n");
    printf("3) multiplication \n");
    printf("4) division\n");
    printf("please enter your choice: ");
    scanf(" %d", &operation);

    switch(operation){
        case 1: 
        printf("please enter the first value: ");
        scanf(" %f", &value1);

        printf("your second value: ");
        scanf(" %f", &value2);
        result = value1+value2;
        printf("required result: %.2f",result);



        break;
        case 2: 
        printf("note: the 2nd value will be subtracted from the 1st value.For positive results, enter the bigger value as the first calue...\n");
        printf("please enter the first value: ");
        scanf(" %f", &value1);

        printf("your second value: ");
        scanf(" %f", &value2);
        result = value1-value2;

        printf("required result: %.2f",result);

        break;
        case 3:
        printf("please enter the first value: ");
        scanf(" %f", &value1);
    

        printf("your second value: ");
        scanf(" %f", &value2);
        result = value1 * value2;

        printf("required result: %.2f",result);
        break;
        case 4: 
        printf("Note: this will do value1/value2\n");
        printf("please enter the first value: ");
        scanf(" %f", &value1);

        printf("your second value: ");
        scanf(" %f", &value2);

        if(value2 == 0){
            printf("required result: Undefined");
        }
        else{
            result = value1/value2;
            printf("required result: %.2f",result);
        }

        
        break;
        default:
        printf("invalid option please restart the program...");

    }
 







    return 0;
}