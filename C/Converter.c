#include <stdio.h>
#include <string.h>

int main(){
    //adding all the variables

    int choice = 0;
    int choice1 = 0;
    
    float kelvin = '\0';
    float Celcius = '\0';
    float fareinheit = '\0';
    float answer = '\0';
    

    // adding user input for the first step

    printf("please pick among the following about the data you have:\n");
    printf("1) kelvin\n");
    printf("2) Celcius\n");
    printf("3) fareinheit\n");
    printf("enter the option you have picked in number only(1/2/3): ");
    scanf(" %d",&choice);

    //adding if statements from here (FUCKIN HELL)

    if(choice == 1){
        //the user has selected Kelvin(1)

        //this if statement enquires what the kelvin value should be changed to 

        printf("which would you convert it into? \n");
        printf("1)kelvin to celcius\n");
        printf("2)kelvin to fareinheit\n");
        printf("your choice(1/2): ");
        scanf(" %d",&choice1);

        if(choice1 == 1 ){
            // another if statement fto convert kelvin --> celcius

            printf("value to be converted: ");
            scanf(" %f",&kelvin);

            answer = kelvin - 273.15;

            printf("the required answer in celcius is : %.2f",answer);
        }
        else if(choice1 == 2){
            // an else if statement to convert Kelvin -> fareinheit

            printf("value to be converted: ");
            scanf(" %f",&kelvin);

            answer = ((kelvin-273.15)*9/5) + 32;
            printf("the required answer in fareinheit scale is: %.2f",answer);

        }
        else{
            // incase of an anomaly

            printf("invalid option");
        }
    }
    else if(choice == 2){
        //user has selected celcius(2)
        // in case the user dosent have 1st type of data

        printf("which would you convert it into? \n");
        printf("1)Celcius to kelvin\n");
        printf("2)celcius to fareinheit\n");
        printf("your choice(1/2): ");
        scanf(" %d",&choice1);

        if(choice1 == 1){
            // converting celcius -> kelvin

            printf("enter the value to be converted: ");
            scanf(" %f",&Celcius);
            answer = Celcius + 273.15;
            printf("required answer is: %.2f",answer);

        }
        else if(choice == 2){
            // converting celcius -> fareinheit

            printf("enter the value to be converted: ");
            scanf(" %f",&Celcius);
            answer = (Celcius*(9/5)) + 32;

        }
        else{
            // incase of anomaly 

            printf("invalid option");
        }
    }
    else if (choice ==3){
        //user has selected fareinheit(3)

        printf("which would you convert it into? \n");
        printf("1)fareinheit to kelvin\n");
        printf("2)fareinheit to celcius\n");
        printf("your choice(1/2): ");
        scanf(" %d",&choice1);
        if(choice1 == 1){
            printf("enter the value to be converted: ");
            scanf(" %f",&fareinheit);

            answer = ((fareinheit-32)*5/9) + 273.15;

            printf("the required value in fareinheit is: %.2f",answer);
        }
        else if(choice1 == 2){
            printf("enter the value to be converted: ");
            scanf(" %f",&fareinheit);

            answer = (fareinheit-32)*5/9;
            printf("the required value in celcius is: %.2f", answer);
        }
        else{
            printf("invalid option");
        }
    }
    else{
        printf("invalid option");
    }

    

    


        

    

    return 0;
}