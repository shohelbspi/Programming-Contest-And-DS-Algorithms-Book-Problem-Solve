#include<stdio.h>

int main(){
    int i,j,sum=0;

    int n;
    printf("Enter Your N: ");
    scanf("%d", &n);

    for (  i = 0; i <= n; i++)
    {
       
        sum = sum+i;
    }
    printf("%d", sum);
    
}