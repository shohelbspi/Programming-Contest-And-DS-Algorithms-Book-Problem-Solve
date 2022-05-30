#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,x;
    int digree = 180;

    printf("Enter Your Arms\n");
    scanf("%d %d %d", &a,&b,&c);

    x =(digree/(a+b+c));

    printf("First Degreee: %d\n", x*a);
    printf("Second Degreee: %d\n", x*b);
    printf("third Degreee: %d\n", x*c);


}