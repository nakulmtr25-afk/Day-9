// Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
int main(){
    double a,b,c,D;
    printf("Enter a : ");
    scanf("%lf",&a);
    printf("Enter b : ");
    scanf("%lf",&b);
    printf("Enter c : ");
    scanf("%lf",&c);
    D = (b*b) - (4*a*c);
    if(D>0){
        printf(" Roots are real and different");
    }
    else if(D<0){
        printf("Roots are imaginary  and complex");
    }
    else{
        printf("Roots are real and same");
    }
    return 0;
}
