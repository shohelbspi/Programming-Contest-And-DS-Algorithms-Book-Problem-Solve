#include<stdio.h>
#include<math.h>


int main(){
    int a,b,c,s;
    float area;

    printf("Enter Your 3 Arams\n");
    scanf("%d %d %d", &a,&b,&c);

    s = (a+b+c)/2;


    area = (sqrt(s*(s-a)*(s-b)*(s-c)));
    printf("%f", area);

    return 0;
}