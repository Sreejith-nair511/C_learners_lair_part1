//we will be studying about conditional operator
//now as the name suggest its used for some condition
//for example
//a program to check credit card validity 
#include<stdio.h>
int main(){
    int age;
    printf("\n enter your age");
    scanf("%d",&age);
    if(age>=18){
        printf("eligible for credit card");

    }
    else if (age<=0)
    {
        printf("fetus moron");
    }
    
    else{
        printf("get off thw internet kid");
    }
    return 0;
}