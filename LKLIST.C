#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
typedef struct lklist{
		   int info;
		   struct lklist *next;
		   }node;
void main()
{ int ch,item,data;
 node *head=NULL;
 void insert_at_beg(node **,int);
 void insert_at_end(node ** ,int);
 void traverse(node *);
 createlist(&head);
 while(1)
 {
 printf("enter your choice 1: enter at beg 2: enter at end 3: traverse 4: exit");
 scanf("%d",&ch);
 switch(ch)
 { case 1: printf("enter data to be enter");
		  scanf("%d",&item);
		  insert_at_beg( &head,item);
		  break;
  case 2: printf("enter data to be enter");
		  scanf("%d",&item);
		  insert_at_end(&head,item);
		  break;
  case 3: traverse(head);
		   break;
  case 4: exit(1);
		  break;
  default :printf("u enter galat option");
		   break;

 }
}
getch();
}
void insert_at_beg(node ** head ,int data)
{ node * temp;
temp=(node *)malloc(sizeof(node));
temp->info=data;
temp->next=*head;
*head=temp;
printf("insert successfully");
}

void traverse(node * head)
{ node * temp;
 temp=head;
 while(temp!=NULL)
 {
 printf("%d ",temp->info);
 temp=temp->next;
 }
 }
/*void insert_at_end(node **,int data)
{
node *temp,*ptr;
ptr=(node *)malloc(sizeof(node));
temp=*head;
temp- */





