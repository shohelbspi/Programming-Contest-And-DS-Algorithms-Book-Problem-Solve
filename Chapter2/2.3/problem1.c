#include<stdio.h>

int main(){
    int num, sum=0, temp, r;
    printf("Enter N : ");
    scanf("%d", &num);

    temp = num;

    while (temp!=0)
    {
        r = temp%10;
        sum =  sum*10+r;
        temp = temp/10;
    }
    if (num == sum)
    {
        printf("Number Pallindrome");
    }
    else
        printf("Number Not Pallindrome");
    
}