#include<stdio.h>

int main(){
    int a,b;

    printf("Enter Your Number A : ");
    scanf("%d", &a);

    printf("Enter Your Number B :  ");
    scanf("%d", &b);

    if(a>b){
        printf("%d", a);
    }
    else
        printf("%d", b);
}