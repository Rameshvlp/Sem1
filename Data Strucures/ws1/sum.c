#include<stdio.h>
int main()
{
    int x,n,y,sum;
    printf("the x value is :");
    scanf("%d",&x);
    printf("the n value is :");
    scanf("%d",&n);
    int mult=x;
    for(y=0;y<n;y++)
    {
        mult=(mult*10)+x;
        }
        printf("the sum is:%d",sum);
    return 0;
}
