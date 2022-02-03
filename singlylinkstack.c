#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
struct node *sp=(struct node*)0;
int flag;

void main()
{
void push(int);
int pop();
int search(int);
int c,d,k=1,m;
do
{
printf("1.push\n");
printf("2.pop\n");
printf("3.search\n");
printf("4.exit\n");
printf("enter your choice: \n");
scanf("%d",&c);
switch(c)
{
case 1:printf("enter some date to push\n");
scanf("%d",&d);
push(d);
break;
case 2:d=pop();
if(flag==1)
printf("poped item is: %d\n",d);
break;
case 3:printf("enter the data to search\n");
scanf("%d",&m);
k=search(m);
if(k==1)
{
printf("item not found...\n");
}

break;
case 4:printf("exiting....");
exit(0);
}

}
while(1);

}

//function to push data
void push(int x)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=sp;
sp=newnode;
}

//function to pop data
int pop()
{
int a;
struct node *temp;
if(sp==(struct node*)0)
{
printf("empty stack \n");
}
else
{
a=sp->data;
temp=sp;
sp=sp->next;
free(temp);
flag=1;
return a;
}

}

//function to search data
int search(int x)
{
struct node *ptr;
ptr=sp;


while(ptr!=(struct node*)0 )
{
if(ptr->data==x)
{
printf("item found...\n");
return 0 ;
}
ptr=ptr->next;
}
return 1;
}
