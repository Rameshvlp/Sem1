#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Number:",&a);
    scanf("%d",&a);
    for(a=0;a<=110;a++)
    {

        if(a%3==0 && a%5==0 && a%7==0)
        {

            printf(a);
        }
    }
    return 0;


}
