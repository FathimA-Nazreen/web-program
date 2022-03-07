#include<stdio.h>
#include<stdlib.h>
struct link_list
       {
         int data;
         struct link_list *next;
       };
typedef struct link_list node;
void Insert(node *p)
      {
         node *temp=(node*)malloc(sizeof(node));
         if(temp)
      {
	printf("Enter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
if(p->data!=-999)
      {
	  while(p->next)
	  p=p->next;
	  p->next=temp;
      }
	  else
	  p->data=temp->data;
      }
	  else
	  printf("\nMemory Overflow\n");
	}
void Display(node *p)
	{
	  if(p->data!=-999)
	{
	  printf("\n The list elements are:\n");
          while(p)
	{
	  printf(" %d ",p->data);
          p=p->next;
        }
           printf(" \n ");
        }
              else
              printf("\n List is empty\n");
        }
node *Delete(node*start)
  {
    int ele;
    node *p,*q;
    if(start->data!=-999)
  {
    printf("\n Enter the element to delete:");
    scanf("%d",&ele);
    if(start->data==ele)
  {
	p=start;
	printf("\n The element %d is deleted from the list\n",p->data);
	if(start->next==NULL)
  {
	q=(node*)malloc(sizeof(node));
	q->data=-999;
	q->next=NULL;
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
	printf("\n The element %d is deleted from the list\n",q->data);
	free(q);
	return start;
   }
 	p=p->next;
   }
	printf("\n The element %d is not present in the list\n",ele);
	return start;
   }
   }
	else
	printf("\n Memory underflow\n");
	return start;
   }
/*node *Reverse(node *start)
	{
	  node *q,*r,*s;
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
	}*/
int main()
	{
	 node *start=(node *)malloc(sizeof(node));
	 start->data=-999;
	 start->next=NULL;
int ele=1,ch;
while(ele)
	{
	  printf("\n...........MENU.......\n");
	  printf("\n\t1.insert\n\t2.display\n\t3.delete\n\t4.exit\n");
	  printf("\n.......\n");
	  printf("\nEnter your choice:");
	  scanf("%d",&ch);
switch(ch)
	{
	 case 1:Insert(start);
	 break;
	 case 2:Display(start);
	 break;
	 case 3:
	 start=Delete(start);
	 break;
	 /*case 4:
	 start=Reverse(start);*/
	 break;
	 case 4:ele=0;
	 break;
	 default:printf("\nInvalide choice\n");
	}
	ch=getchar();
	}
return 0;
	}

