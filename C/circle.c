#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    // adding the variables before hand so we dont fret later
    float radius = '\0'; 
    float area = '\0';
    float volume = '\0';
    const double PI = 3.14;
    float perimeter = '\0';
    float curved_surfaced_area = '\0';



    // first we add a user input for the user to typein a radius
    printf("please enter a radius to find the details: ");
    scanf("%f",&radius);


    //here we add a formula for area
    
    area = PI * pow(radius, 2);
    printf("the area 2 dimentionally is : %.2f\n", area);
    



    // formula for the perimeter
    
    perimeter = PI*2*radius;
    printf("the perimeter 2 dimentionally would be: %.2f\n", perimeter);



    // now we add the curved surface area

    curved_surfaced_area = PI*4*pow(radius,2);
    printf("the curved surface area of the sphere would be: %.2f \n",curved_surfaced_area);

    // adding the volume

    volume = 1.3333*PI*pow(radius,3);
    printf("the volume of the sphere would be : %.2f\n", volume);
    







    return 0;
}