#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||j>i)
            printf("*");
            else
            printf(" ");
        }
        printf(" \n");
    }

}