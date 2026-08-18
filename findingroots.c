// Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
int main(){
    double a,b,c,D,root1,root2,root;
    printf("Enter a : ");
    scanf("%lf",&a);
    printf("Enter b : ");
    scanf("%lf",&b);
    printf("Enter c : ");
    scanf("%lf",&c);
    D = (b*b) - (4*a*c);
    root1 = (-b + sqrt(D))/2*a;
    root2 = (-b - sqrt(D))/2*a;
    root = b/(2*a);
    if(D>0){
        printf("%.1lf %.1lf Roots are real and different",root1,root2 );
    }
    else if(D<0){
        printf("Roots are imaginary  and complex");
    }
    else{
        printf("%.1lf Roots are real and same",root);
    }
    return 0;
}
