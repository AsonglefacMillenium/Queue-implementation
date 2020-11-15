
#include <stdio.h>

#define MAX 10
	
int cqueue_arr[MAX];
int head = -1;
int end = -1;

// Insert function

void insert(int item){
	if((head == 0 && end == MAX -1)|| (head == end +1)){

		printf("Queue Overflow");
		return;
	
	}

	if(head == -1){
		head = 0;
		end =0;

	}
	else{

		if(end == MAX -1){
			end = 0;

		}
		else{
			end = end +1;
		}
		cqueue_arr[end] = item;
	}


}

// End of enqueuing

//Start of dequeuing

void deletion(void){

	if(head == -1){
		printf("Queue Underflow");
		return;
	}
	printf("Element deleted from queue is: %d\n", cqueue_arr[head]);

	if(head == end){
		head = -1;
		end = -1;
	}
	else{

		if(head == MAX -1){
			head = 0;
		}
		else{
			head = head + 1;
		}
	}


}

// End of dequeuing


//Start of display

void display(void){

	int head_pos = head, end_pos = end;

	if(head == -1){

		printf("Queue is empty\n");
		return;

	}

	printf("Queue elementds: \n");

	if(head_pos <= end_pos){
		while(head_pos <+ end_pos){
			printf("%d", cqueue_arr[head_pos]);
			head_pos ++;
		}
	}

	else {
		while(head_pos <= MAX-1){

			printf("%d", cqueue_arr[head_pos]);
			head_pos ++;
		}

		head_pos = 0;

		while(head_pos == end_pos){

			printf("%d", cqueue_arr[head_pos]);
			head_pos ++;
		}
	}
	printf("\n");

}

// End of display function


//Start of the main function

int main(void)
{

	int choice, item;

	

	do {

		printf("[1} Insert(Enqueue)\n");
		printf("[2} Delete(Dequeue)\n");
		printf("[3} Display\n");
		printf("[4} Quit\n");
		printf("Enter your choice:");
		scanf("%d", &choice);

		switch(choice){

			case 1:
				printf("Input the element tobe inserted into the queue");
				scanf("%d", &item);

				insert(item);
				break;

			case 2:
				deletion();
				break;

			case 3:
				display();
				break;

			default:
				printf("Wrong choice");
		}
	}

	while(choice !=4);



   
    return 0;
}

