#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *left,*right;
};
struct node *start=(struct node*)0;

void main()
{
void insert(int);
struct node *search(int);
void delet(int);
struct node *temp;
int c,a,b;
do
{
printf("1.Insert\n");
printf("2.Search\n");
printf("3.Delete\n");
printf("4.Exit\n");
printf("Enter your choice: \n");
scanf("%d",&c);
switch(c)
{
case 1:printf("Enter a value to insert:\n");
scanf("%d",&a);
insert(a);
break;
case 2:printf("Enter a value to search:\n");
scanf("%d",&b);
temp=search(b);
if(temp==(struct node*)0)
printf("not found..\n");
else
printf("found..\n");
break;
case 3:printf("Enter data to delete..\n");
scanf("%d",&a);
delet(a);
break;
case 4:printf("exiting..\n");
exit(0);
}
}
while(1);
}

//function to insert at beginning
void insert(int x)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
if(start==(struct node*)0) //case of empty list
{
newnode->left=newnode->right=(struct node*)0;
start=newnode;
}
else //case of atleast one node
{
newnode->left=(struct node*)0;
newnode->right=start;
start->left=newnode;
start=newnode;
}
}
//to search an item
struct node* search(int d)
{
struct node *ptr;
ptr=start;
while(ptr!=(struct node*)0 && ptr->data!=d)
{
ptr=ptr->right;
}
return ptr;
}

//function to delete data
void delet(int x)
{
struct node *t;
t=search(x);
if(t==0)
{
printf("no such element exists..\n");
}
else
{
if(t==start) //case of first node
if(t->right==(struct node*)0) //case of one and only one node
{
start=(struct node*)0;
}
else
{
t->right->left=(struct node*)0;
start=t->right;
}
else if(t->right==(struct node*)0) //case of last node
{
t->left->right=(struct node*)0;
}
else //case of interior node
{
t->left->right=t->right;
t->right->left=t->left;
}
}
free(t);
}





