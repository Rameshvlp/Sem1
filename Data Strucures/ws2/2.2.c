#include<stdio.h>
int main()
{
    int a,b,sum=0;
    for(a=1;a<1000;a++)
    {
        if(a%3==0||a%5==0)
        {
            sum=sum+a;
           
        }
        
    }
    printf("The num is%d",sum);
    return 0;
}
    
    