//this will show how to take input and print output 
//input is taken using scanf

#include<stdio.h>
void main(){
    int age;
    char name[20];
    printf(" \n whats your name loser");
    scanf("%s",&name);
    printf("\n how old are you ");
    scanf("%d",&age);//&age gives us the address
    printf("\n my name is %s",name);
    printf("\n you are %d years old ",age);//age acts like a placeholder
}

//disadvantage of scanf is the whitespaces 
//when scanf encounters white spaces ,it terminates 
//for example see line 8
//to avoid it we use---> fgets 
