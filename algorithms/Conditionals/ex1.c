#include<stdio.h>

int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", number);

    if(number > 20) {
        printf("Square");
    } else {
        if(number == 20) {
            printf("equals");
        } else {
            printf("not equals");
        }
        printf("triangle");
    }

    return 0;
}