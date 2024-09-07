 //swithc is used when we require several  condtion 
 //else if statement 
    //using else if is not  GOOD CODING PRACTICSE 
    //therefore switch is used
    //lets create a switch statement for grade point 
   
#include<stdio.h>
int main(){
    char grade;

    printf("Enter the grade:");
    scanf("%c",&grade);

    switch ((grade))
    {
    case 'A':
        printf("excellent work\n ");
        break;
    
    case 'B':
        printf("good job \n");
        break;

    case 'C':
        printf("poor \n");
        break;

    case 'D':
        printf("abysmal\n");
        break;

    case 'F':
        printf("Fail \n ");
        break;

    default:
    printf("enter valid grade point");
    
    }
}