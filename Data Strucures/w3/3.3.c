#include<stdio.h>
#include<string.h>
int main()
{
    char a[26],b[26];
    int i,j,l;
    printf("Enter a lowercase string :");
        scanf("%s",a);
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            b[i]=a[i]-32;
        }
        printf("%s",b);

}
