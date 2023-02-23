#include<stdio.h>
int main()
{
    int a[50],i,j,l,temp;
        printf("Enter the Number of Integer:");
        scanf("%d",&l);
        for(i=0;i<l;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<l;i++)
        {
            for(j=i+1;j<l;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
            
        }
        for(i=0;i<l;i++)
        {
            printf("%d",a[i]);
        }
        printf("the second largest num is:\n%d",a[i-2]);
        



}


