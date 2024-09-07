//usage of fgets 
//basic syntax is fgets(var name,25,stdin)
//includes a variable name ,input limit and std input 
//lets try an example
#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    printf("what is your name");
//use fgets 
   fgets(name,30,stdin);
   name[strlen(name)-1]='\0';//strlen is the string length 
   printf("hello %s,how are you feeling",name);
   //with this whitespace is no longer a issue
   //by deafult fgets have a new line character 
   //to remove this 
   //this is how you do it 

}