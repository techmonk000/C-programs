// This is used to print area of circle or volume of cylinder according to user's choice
#include <stdio.h>
#include <math.h>
int main()
{
    int option; // takes choice from user
    const float pi = 3.14;
    float radius, area, height, volume; // creates variables for radius , height , area and volume of circle and cylinder
    printf("Enter 1 for area of circle and 2 for cylinder volume ");
    scanf("%d", &option); // user input of choice
    if (option == 1)
    {
        printf("Enter radius of circle");
        scanf("%f", &radius);
        area = pi * pow(radius, 2); // it calculates the area using formula for it
        printf("The area of circle is %0.2f", area);
    }
    else if (option == 2)
    {
        printf("Enter radius of cylinder");
        scanf("%f", &radius);
        printf("Enter height of cylinder"); // takes height as additional input
        scanf("%f", &height);
        volume = pi * pow(radius, 2) * height; // it calculates volume of cylinder using its formula
        printf("The volume of cylinder is %0.2f", volume);
    }
    else {
        printf("Enter correct options");
    }
}
