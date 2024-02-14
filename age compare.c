#include <stdio.h>

int main() {
 
int your_age, f_age;
printf("Enter Your weight: \n");
scanf("%d", &your_age);
printf("Enter your friend weight: \n");
scanf("%d", &f_age);
if(your_age > f_age){
    printf("You are heavier than your friend!");
}
else if(f_age > your_age){
    printf("Your friend is heavier than you!");
}
else{
    printf("Both have the same weight!");
}
}