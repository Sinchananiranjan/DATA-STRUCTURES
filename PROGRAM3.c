#include<stdio.h>
#include<stdlib.h> 
#define MAX 3
int s[MAX]; 
int top=-1;
void push(int item)
{
if(top==MAX-1)
{
printf("\nSTACK OVERFLOW\n");
}
else
{
top=top+1;
s[top]=item;
}
}
void pop()
{
int item;
if(top==
-1)
{
printf("
\nSTACK UNDERFLOW
\n");
}
else {
item=s[top];
 printf("The popped element is %d",item); 
top=top
-1;
}
}
void display() {
int i;
if(top==
-1)
{
printf("
\nSTACK IS EMPTY
\n");
}
else {
printf("
\nThe Stack elements are
\n");
for(i=top; i>=0; i--
)
printf("|%d|
\n",s[i]);
}
}
void palindrome() {
int flag=1,i;
printf("
\nStack contents are
\n"); 
for(i=top; i>=0; i--
)
printf("|%d|
\n",s[i]);
printf("
\nReverse of Stack Contents are
\n");
for(i=0; i<=top; i++)
printf("|%d|
\n",s[i]);
for(i=0;i<=top/2;i++) 
{
if(s[i]!=s[top-i])
{
flag=0;
break;
}
}
if(flag==1)
printf("\n It is a Palindrome Number\n"); 
else
printf("\n It is not a Palindrome Number\n");
}
void main()
{
int choice,item; 
while(1)
{
printf("\n MENU\n");
printf("\n=>1. Push the Element to stack and OVERFLOW demo");
printf("\n=>2. Pop the Element from the stack and UNDERFLOW demo");
printf("\n=>3. PALINDROME demo");
printf("\n=>4. Display"); 
printf("\n=>5. Exit"); 
printf("\nEnter your Choice:"); 
scanf("%d",&choice); 
switch(choice)
{
case 1: printf("\nEnter the element to be pushed:"); 
scanf("%d",&item);
push(item);
break;
case 2: pop();
break;
case 3: palindrome(); 
break;
case 4: display(); 
 break;
case 5: exit(0);
break;
default: printf("\nEnter a valid choice\n");
 break;
}
}
}
