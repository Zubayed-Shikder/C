#include<stdio.h>
#include<string.h>
int main()
{
    char x[10];
    int age;
    scanf("%s", &x);
    printf("Hello %s\n", x);
    printf("Enter Your Age:");
    scanf("%d", &age);
    printf("You are really %d years old...", age);
}