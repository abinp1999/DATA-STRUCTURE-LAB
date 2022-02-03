#include<stdio.h>
#include<stdlib.h>
#define size 10
int front=0;
int rear=0;
int q[size];

void main()
{
void insert(int);
int delete();
int search(int);
int c,d,k=0,z;
do
{

printf("1.Insertion\n");
printf("2.Deletion\n");
printf("3.Search\n");
printf("4.Exit\n");
printf("Enter your choice\n");
scanf("%d",&c);


switch(c)
{
case 1:printf("Enter a value to insert..\n");
scanf("%d",&d);
insert(d);
break;
case 2:d=delete(&z);
if(z==1)
printf("The deleted item is: %d\n",d);
break;
case 3:printf("Enter a value to search:\n");
scanf("%d",&d);
k=search(d);
if(k==0)
printf("item not found...\n");
break;
case 4:printf("exiting....\n");
exit(0);
}
}
while(1);

}

//function to insert data
void insert(int x)
{
int t;
t=(rear+1)%size;
if(front==t)
{
printf("queue is full....\n");
}
else
{

rear=t;
q[rear]=x;
printf("item inserted..\n");
}

}

//function to delete data
int delete(int *y)
{
//int r;
if(front==rear)
{
printf("queue empty...\n");
*y=0;
}
else
{
front=(front+1)%size;
*y=1;

return q[front] ;


}
}

//function to search
int search(int item)
{
int f,r;
f=front;
r=rear;
while(f!=r)
{
f=(f+1)%size;
if(q[f]==item)
{
printf("item found..\n");
return 1;
}

}
 return 0;

}
