#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter Your Number A : ");
    scanf("%d", &a);

    printf("Enter Your Number B :  ");
    scanf("%d", &b);

    printf("Enter Your Number C :  ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("%d", a);
    }
    else if(b>a && b>c){
         printf("%d", b);
    }
    else
        printf("%d", c);
}