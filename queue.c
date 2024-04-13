#include <stdio.h> 
#include <conio.h> 
# define max 6 
int queue[max]; // array declaration 
int front=-1; 
int rear=-1; 
// function to insert an element in a circular queue 
void enqueue(int element) 
{ 
if(front==-1 && rear==-1) //condition to check queue is empty 
{ 
front=0; 
rear=0; 
queue[rear]=element; 
} 
else if((rear+1)%max==front) //condition to check queue is 
{ 
printf("Queue is overflow..\n"); 
} 
else 
{ 
rear=(rear+1)%max; // rear is incremented 
queue[rear]=element; // assigning a value to the queue 
} 
}
void display() 
{ 
int i=front; 
if(front==-1 && rear==-1) 
{ 
printf("\nQueue is empty..\n"); 
} 
else 
{ 
printf("\nElements in a Queue are : "); 
while(i<=rear) 
{ 
printf("%d ", queue[i]); 
i=(i+1)%max; 
} 
} 
}
int main() 
{ 
int choice=1,x; // variables declaration 
clrscr();
while(choice<4 && choice!=0) // while loop 
{ 
printf("\n1: Insert an element"); 
printf("\n2: Display the element"); 
printf("\n3: exit the program");
printf("\n\nEnter your choice : "); 
scanf("%d", &choice); 
switch(choice) 
{ 
case 1: 
printf("Enter the Value : "); 
scanf("%d", &x); 
enqueue(x); 
break; 
case 2: 
display(); 
case 3: exit (0);
default: printf("wrong selection!!! try again!!!");
} 
} 
return 0; 
}