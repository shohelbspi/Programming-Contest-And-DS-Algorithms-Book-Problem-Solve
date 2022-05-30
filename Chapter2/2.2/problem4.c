#include<stdio.h>
#include<math.h>

int main(){
    int r, range;

    printf("Enter Your Redius\n");
    scanf("%d", &r);

    double pi = acos(-1);

    range = 2*pi*r;


    printf("%d", range);



}