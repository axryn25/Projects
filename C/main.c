#include <stdio.h>
#include <string.h>

int main(){

    // adding all the variables before hand 

    char item[50] = "";
    char currency = '$';
    float quantity = '\0';
    float price = '\0';
    float total;
    // adding user input 
    printf("please enter the item needed: ");
    getchar();
    fgets(item,sizeof(item),stdin);
    //removing an '\0' charecter and possibly a \n charecter
    
    printf("please enter the quantity required: ");
    scanf("%f",&quantity);

    printf("please enter the price for each: ");
    scanf("%f", &price);

    //now we add the math to find the total cost

    total = quantity*price;
    printf("you have bought %.3f %s\n",quantity,item);
    printf("your total price to be paid is : %.3f %c",total,currency );



    return 0;
}