#include<stdio.h>
#include<stdlib.h>
struct link_list
{
int data;
struct link_list * next;
};
typedef struct link_list node;
void insert(node * p)
{
node * temp=(node*)malloc(sizeof(node));
if (temp)
{
printf("enter the data");
scanf("%d",&temp->data);
temp->next=NULL;
if(p->data!=999)
{
while(p->next)
p=p->next;
p->next=temp;
}
else
p->data=temp->data;
}
else
printf("memory overflow");
}
void display(node*p)
{
if(p->data!=-999)
{
printf("the list elements are");
while(p)
{
printf("%d",p->data);
p=p->next;
}
}
else
printf("list is empty");
}
node*delete(node*start)
{
int ele;
node*p,*q;
if(start->data!=-999)
{
printf("enter the elements to be deleted:");
scanf("%d",&ele);
int p;
if(start->data==ele)
{
p=start;
printf("the element %d deleted from the list",p->data);
if(start->next==NULL)
{
q=(node * )malloc(sizeof(node));
q->data=-999;
q->data=NULL;
free(p);
return q;
}
start=start->next;
free(p);
return start;
}
else
{
p=start;
while(p->next)
{
q=p->next;
if(q->data==ele)
{
p->next=q->next;
printf("the element is %d deleted from the list",q->data);
free(q);
return start();
}
p=p->next;
printf("the element %d is not present in the list",ele return start;)
}
}
else
printf("memory underflow");
return start;
}
node*reverse(node*start)
{
node*q,*r,*s;
q=start;
r=NULL;
while(q)
{
s=r;
r=q;
q=q->next;
r->next=s;
}
return r;
}
int main()
{
node*start=(node*)malloc(sizeof(node));
start->data=-999;
start->next=NULL;
int ele=1,ch;
while(ele)
{
printf("\n----MENU----\n");
printf("\n\t1. insert \n\t 2.display\n\t 3.delete\n\t 4. reverse\n\t 5.exit\n\t");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:insert(start);
break;
case 2:display(start);
break;
case 3:start=delete(start);
break;
case 4:start=reverse(start);
break;
case 5:ele=0;
break;
default:printf("invalid");
}
ch=getchar();
}
return 0;
}





























