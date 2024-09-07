//this is a temp convertor 
//we will convert celcius and fahrenhit 

#include<stdio.h>
#include<ctype.h>
int main()
{
    float temp;
    char unit;

   printf("Is the temp in celuis or fahrenhit ");
   scanf("%c",&unit);
unit=toupper(unit);//to convert upper and lower case 
//this will let us enter lower case lettter 
//the formual for conversion is important 

//c--->f:c=((f-32)*5)/9
//f--->c:(c*9/5)+32
if(unit=='C'){
    printf(" \n Enter temp in celcius ");
    scanf("%f",&temp);
    temp=(temp*9/5)+32;
    printf("temperature in fahernhit is:%0.1f ",temp);

}
else if (unit=='F')
{
    printf("enter temperature in farenhit :");
    scanf("%f",&temp);
    temp=((temp-32)*5)/9;
    printf("The temperature in celius is %0.1f",temp);
}
else{
    printf("please enter valid meaursment ");
}

return 0;

}