#include<stdio.h>
#include<math.h>

int main(){
    int x1,x2,y1,y2, result;

    printf("Enter Your x1 : ");
    scanf("%d", &x1);

    printf("Enter Your x2 : ");
    scanf("%d", &x2);

    printf("Enter Your y1 : ");
    scanf("%d", &y1);

    printf("Enter Your y2 : ");
    scanf("%d", &y2);

    result = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("%d", result);

    return 1;
}