//For C beginners
#include<stdo.h> //wrong library included (typo)
#include<stdlib.h>
#include<string.h>

int helloto(char* name) //return type is not int
{
    printf("Hello, %s", &name); //unnecessary address operator
}

int main(void)
{
    char name[25];
    printf("Enter your name: ");
    scanf("%s", name) //no line termination
    helloto(name);
}