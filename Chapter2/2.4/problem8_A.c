#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int row, col;

    for (int row = 1; row <= n; row++)
    {
        printf("\n");
        for ( col = 1; col <= row; col++)
        {
           printf("* ");
        }

        
    }
    
}