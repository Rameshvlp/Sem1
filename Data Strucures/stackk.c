#include<stdio.h>
#define size 4
top=-1,inputarr[size];
void push();
int main()
{
    while(1)
    {
        int choice;

        printf("Operations to be performed\n");
        printf("\n1.push the Element \n2. pop the element \n3.show \n4.End\n");
        scanf("%d",&choice);
         switch(choice)
    {

        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: show();
                break;
        case 4: exit(0);
                break;
         default:printf("\n Invalid choice!!\n");
    }

    }
}
void push()
{

    int x;
    if(top==size-1)
    {

        printf("overflow!!");

    }
    else{
            printf("\nEnter the value to be pushed!!");
    scanf("%d",&x);
        top=top+1;
        inputarr[top]=x;
    }
}
void pop()
{
    if(top==-1){
        printf("Under flow");
    }
    else{
        top=top-1;
        printf("poped element is %d",inputarr[top]);
    }
}
void show()
{
    if(top==-1){
        printf("underflow!!");
    }
    else{
            int u;
        printf("Elements present in a stack is");
        for(u=top;u>=0;u--){
            printf("%d\n",inputarr[u]);
        }
    }
}
