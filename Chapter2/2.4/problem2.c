#include<stdio.h>


int main(){
    int i,j,sum=0;

    int n;
    printf("Enter Your N: ");
    scanf("%d", &n);

    for (  i = 1; i <= n; i++)
    {
        sum = sum+i*i;
    }
    printf("%d", sum);
    
}