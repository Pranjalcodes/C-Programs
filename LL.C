//linear link list pack
#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *link;
}*ptr,*cpt,*first,*last,*nn;
void create();
void ins_beg();
void ins_end();
void ins_mid();
void del_beg();
void del_end();
void del_mid();
void print_ll();
char ch;
int i;
int *add;
void main()
{
 create();
 print_ll();
 ins_beg();
 ins_end();
  ins_mid();
  printf("Select you option for deletion \n->1-from beginning \n->2-from end \n->3-from middle");
  printf("\n");
  scanf("%d",&i);
  switch(i)
  {
  case 1:del_beg();
  break;
  case 2:del_end();
  break;
  case 3:del_mid();
  break;
  default:printf("no del");
  }
  getch();
}

 void create()
{

clrscr();
ptr=(struct node*)malloc(sizeof(struct node*));
printf("Enter the data in the first node=");
scanf("%d",&ptr->info);
first=ptr;
   do
   {
    cpt=(struct node*)malloc(sizeof(struct node*));
     scanf("%d",&cpt->info);
     ptr->link=cpt;
     ptr=cpt;
     printf("Do you want more node say (y/n):");
     scanf("%s",&ch);
   } while(ch=='y'||ch=='Y');
   ptr->link=NULL;
last=ptr;

}
void print_ll()
{
 ptr=first;
 printf("The linked list is as follows:-\n");
printf("%d \n",ptr->info);
do
{
ptr=ptr->link;
printf("%d \n",ptr->info);
} while(ptr!=last);

}
void ins_beg()
{
 printf("....................................... \n" );
ptr=first;
 nn=(struct node*)malloc(sizeof(struct node*));
 printf("Enter the data for new node @ the beginning=\t");
 scanf("%d",&nn->info);
 nn->link=ptr;
 first=nn;
 printf("The new linked list is:- \n");
 print_ll();
}
void ins_end()
{
 printf("....................................... \n" );
ptr=first;
 nn=(struct node*)malloc(sizeof(struct node*));
 printf("Enter the data for new node @ the end=\t");
 scanf("%d",&nn->info);
 last->link=nn;
last=nn;
 printf("The new linked list is:- \n");
 print_ll();

}
void ins_mid()
{
 printf("....................................... \n" );
ptr=first;
 nn=(struct node*)malloc(sizeof(struct node*));
 printf("Enter the data for new node @ in the middle=\t");
 scanf("%d",&nn->info);
 while(ptr->info!=nn->info)
 {
 ptr=ptr->link;
 }
 cpt=ptr->link;
 ptr->link=nn;
 nn->link=cpt;
 printf("The new linked list is:- \n");
 print_ll();
}
void del_beg()
{
printf("....................................... \n" );
 ptr=first;
cpt=ptr->link;
ptr->link=NULL;
first=cpt;
print_ll();

printf("any more deletion (y/n)");
scanf("%s",&ch);
if(ch=='y'||ch=='Y')
{
  printf("Select you option for deletion \n->1-from beginning \n->2-from end \n->3-from middle");
  printf("\n");
  scanf("%d",&i);
  switch(i)
  {
  case 1:del_beg();
  break;
  case 2:del_end();
  break;
  case 3:del_mid();
  break;
  default:printf("no del");
  }
 }
 else
 exit(0);
}
void del_end()
{
printf("...................................................\n");
 ptr=first;
 while(ptr->link!=NULL)
 {
 cpt=ptr;
 ptr=ptr->link;
 }
 ptr->link=NULL;
 free(ptr);
 last=cpt;
print_ll();

printf("any more deletion (y/n)");
scanf("%s",&ch);
if(ch=='y'||ch=='Y')
{
  printf("Select you option for deletion \n->1-from beginning \n->2-from end \n->3-from middle");
  printf("\n");
  scanf("%d",&i);
  switch(i)
  {
  case 1:del_beg();
  break;
  case 2:del_end();
  break;
  case 3:del_mid();
  break;
  default:printf("no del");
  }
 }
 else
 exit(0);

}
void del_mid()
{ int val;
printf("...................................................\n");
 ptr=first;
 printf("Enter the value you want to delete=");
 scanf("%d",&val);
while(ptr->info!=val)
{
cpt=ptr;
ptr=ptr->link;
}
nn=ptr->link;
ptr->link=NULL;
cpt->link=nn;
print_ll();

printf("any more deletion (y/n)");
scanf("%s",&ch);
if(ch=='y'||ch=='Y')
{
  printf("Select you option for deletion \n->1-from beginning \n->2-from end \n->3-from middle");
  printf("\n");
  scanf("%d",&i);
  switch(i)
  {
  case 1:del_beg();
  break;
  case 2:del_end();
  break;
  case 3:del_mid();
  break;
  default:printf("no del");
  }
 }
 else
 exit(0);
}