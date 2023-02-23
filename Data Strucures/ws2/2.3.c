#include<stdio.h>

int main()
{
    float a;
    printf(" Enter th value");
    scanf("%f",&a);
    while (a>0)
    {
        a=a-0.5;
        printf("%f\n",a);
    }


}
