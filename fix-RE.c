#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(b == 0){
        printf("infinity");
    }
    
else{
    printf("%d\n", a / b);
}
}