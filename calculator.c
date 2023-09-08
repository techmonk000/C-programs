// A program to build a simple calculator
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int k ;
    float a , b;
    int n1 , n2;
    float add , subtract , divide , multiply ;
    int rem , exp ;
    printf("Enter the operation you want to perform \n ");
    printf("1. Addition 2. Substraction 3. Multiplication 4. Division 5. Modulus 6. Exponent \n ");
    printf("Now Enter your choice");
    scanf("%d",&k);
    if (k == 1){
        printf("Enter the two numbers ");
        scanf("%f %f",&a,&b);
        add = a + b;
        printf(" The result of addition is %f \n ",add);
    }
    else if (k==2){
        printf("Enter the two numbers");
        scanf("%f %f",&a,&b);
        subtract = a - b;
        printf(" The result of subtracting is  %f \n ",subtract);
    }
    else if (k==3){
        printf("Enter the two numbers ");
        scanf("%f %f",&a,&b);
        multiply = a*b;
        printf(" The result of multiplying is  %f \n ",multiply);
    }
    else if (k==4){
        printf("Enter the two numbers ");
        scanf("%f %f",&a,&b);
        if (b != 0) {
            divide = a / b ;
            printf("The result of division is %f\n", divide);
        }
        else {
            printf("Division by zero is not allowed.\n");
        }
    }
    else if (k==5){
        printf("Enter the two integer numbers ");
        scanf("%d %d",&n1 ,&n2);
        rem = n1 % n2; 
        printf("The result of modulus is %d \n ",rem);
    }
    else if (k==6){
        printf("Enter the two integer numbers ");
        scanf("%d %d",&n1 ,&n2);
        exp = pow(n1,n2);
        printf("The result of exponent is %d \n ",exp);
    }
    else {
        printf("Enter correct choice ");
    }
    return 0 ; 
}