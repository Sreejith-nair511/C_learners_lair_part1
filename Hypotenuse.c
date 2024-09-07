#include<stdio.h>
#include<math.h>
int main(){
    double a;
    double b;
    double c;

    printf(" \n Enter the side a");
    scanf("%lf",&a);
    printf("enter the side b");
    scanf("%lf",&b);

    c=sqrt(a*a+b*b);//hypotenuse

    printf("The hypotenuse is %lf",c);
}