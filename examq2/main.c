#include<stdio.h>

int main()
{
    
    int num=1,i,j;
    
    for(i=5;i<=num;i++)
    {
        for(j=num;j<=i;j++)
        {
            
            printf("%d",j);
            
        }
        printf("\n");
    }
    
    return 0;
}