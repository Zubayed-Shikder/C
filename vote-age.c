#include<stdio.h>
int main(){
    int age;
    int vage = 18;
    printf("Enter your age:");
    scanf("%d", &age);
    if (age >= vage)
    {
    printf("Old enough to vote");
    } else{
        printf("Not old enough to vote.\n");
        printf("Wait for %d years.", vage - age);
    }
 return 0;   
}