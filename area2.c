#include <stdio.h>
#include <math.h>
int main()
{
    int option;
    const float pi = 3.14;
    float radius, area, height, volume;
    printf("Enter 1 for area of circle and 2 for cylinder volume ");
    scanf("%d", &option);
    if (option == 1)
    {
        printf("Enter radius of circle");
        scanf("%f", &radius);
        area = pi * pow(radius, 2);
        printf("The area of circle is %0.2f", area);
    }
    else if (option == 2)
    {
        printf("Enter radius of cylinder");
        scanf("%f", &radius);
        printf("Enter height of cylinder");
        scanf("%f", &height);
        volume = pi * pow(radius, 2) * height;
        printf("The volume of cylinder is %0.2f", volume);
    }
    else {
        printf("Enter correct options");
    }
}