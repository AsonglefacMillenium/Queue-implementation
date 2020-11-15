/*
 * C Program to Implement a Queue using an Array
 */
#include<stdlib.h>
#include <stdio.h>
//#define MAX 50
void insert();
void delete();
void display();
void size();
void head();
void tail();
void close();
int i=0,MAX=0;
int queue_array[];
int rear = - 1;
int front = - 1;
main()
{
 printf("\n\n\t\t\t Enter the size of the queue .: ");
 scanf("%d",&MAX);
 queue_array[MAX];
    int choice;
    while (1)
    {
        system("color 0a");
        printf("\n\n ========================================\n");
		printf("\t>>>\t1.Insert element to queue (Enqueue) \n");
        printf("\t>>>\t2.Delete element from queue (Dequeue)\n");
        printf("\t>>>\t3.Display all elements of queue \n");
        printf("\t>>>\t4.Size of queue \n");
        printf("\t>>>\t5.Head of queue \n");
        printf("\t>>>\t6.End of queue \n");
        printf("\t>>>\t7.Quit \n");

        printf("\t\tEnter your choice :\t ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            size();
            break;
            case 5:
            head();
            break;
            case 6:
            tail();
            break;
            case 7:
            close();
            default:
            printf("Wrong choice \n");
        } /* End of switch */
    } /* End of while */
return 0;
} /* End of main() */

void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Insert the element in queue : ");
        scanf("%d", &add_item);
        rear++;
        i++;
        queue_array[rear] = add_item;
    }
} /* End of insert() */

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
        i--;
    }
} /* End of delete() */

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("  %d | ", queue_array[i]);
        printf("\n");
    }
} /* End of display() */
void size(){
	printf("The size of the queue is : %d\n" , i);
	//  rear + 1 because the value of queue is the index of the element
} //End of size of queue
void head(){
	if(i == 0 ){
		printf("Sorry queue is empty");
	}else{
	printf("The head of queue is : %d" , queue_array[rear]);
	}
} //End of head of queue
void tail(){

    if (front == - 1 || front > rear)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("The last element in the queue is : %d \n", queue_array[front]);
    }
}
void close(){
	printf("\n\n\t\t/**********************\\ \n\t\t| see you next time... | \n\t\t\\**********************/ \n\n");
	exit(0);
		}
