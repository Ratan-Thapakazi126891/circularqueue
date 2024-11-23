  #include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define qsize 5

struct queue
{
	int data[qsize];
	int rear;
	int front;
	
};
void enqueue(struct queue* q)
{
	  if((q->rear+1) % qsize ==q->front){
	  	printf("queue overflow \n");
	  	return ;
	  	
	  	
	  }
	  printf("enter the number to enter in the queue: ");
	  q->rear=(q->rear+1)%qsize;
	  scanf("%d", &q->data[q->rear]);
	  printf("pushed %d  to queue\n",q->data[q->rear]);
}
void dequeue(struct queue* q)
{
	if(q->rear==q->front){
		printf("queue is empty \n");
		return;
		
	}
	printf("popped %d from the queue\n",q->data[q->front]);
	q->front==(q->front+1)%qsize;
	
}

void display(struct queue* q)
{
	if(q->rear ==-1){
		printf("queue is empty \n");
		return;
		
	}
	for (int i=q->rear;i>=0;i--){
		printf("|%10d|",q->data[i]);
	}
	printf(" ---------\n");
	
	
}
int main()
{
	struct queue qtk;
	qtk.rear=0;
	qtk.front=0;
	int choice;
	while(1) {
		system("cls");
		printf("1.enqueue\n 2.dequeue \n 3.display \n 4.exit \n");
		printf("enter the choice(1,2,3,4):");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				enqueue(&qtk);
				break;
			case 2:
			    dequeue(&qtk);
				break;
			case 3:
 			    display(&qtk);
				break;
			case 4:
			    exit(0);
			default:
			    printf("invalid choice ");	
		}
		getch();
		
	}
	
}



