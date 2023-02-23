#inclue<stdio.h>
#include<stdlib.h>
{

    struct node {
        int data;struct node*next;
 };
 int main (){
     struct node *head;
     struct node *one=null;
     struct node *two=null;
     struct node *three=null;

     one=malloc(sizeof(struct node));
     two=malloc(sizeof(struct node));
     three=malloc(sizeof(struct node));
     one->data=5;
     two->data=3;
     three->data=8;
     one->next=two;
     two->next=three
 }

}
