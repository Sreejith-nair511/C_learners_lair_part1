#include<stdio.h>
int main(){
    const  double  PI =3.14556;
    //const is used to take a fixed values 
    double circumference;
    double radius;
    double area;
    printf("enter prefered radius");
    scanf("%lf",&radius);
    circumference=2* PI *radius;
    area= PI * radius* radius;
    printf(" \n The cicumference is %lf ",circumference);
    printf(" \n The area of circle is %lf",area);

    return 0;
    //note that if we use &here this will give us memort adress of variable 
    //successfully done 
}
