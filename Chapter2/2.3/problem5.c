#include<stdio.h>

int main(){
    int x,y;

    printf("Enter Your X Value: ");
    scanf("%d", &x);

    printf("Enter Your Y Value: ");
    scanf("%d", &y);

    if(x>0 && y>0){
        printf("First Quadrant");
    }
    else if(x<0 && y>0){
        printf("Second Quadrant");
    }
    else if(x<0 && y<0){
        printf("Third Quadrant");
    }
    else if(x>0 && y<0){
        printf("Four Quadrant");
    }

    

}