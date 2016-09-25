#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node *next;
};

struct node* head=NULL;
struct node* tail=NULL;

void addNode(int v)
{
	struct node *n;
	n=(struct node *)malloc(1*sizeof(struct node));
	n->value=v;
	n->next=NULL;

	if(NULL==head)
	{
		head=n;
		tail=n;
	}
	else
	{
		tail->next=n;				
		tail=n;
	}
}
void printForward()
{
	struct node *p;
	for(p=head;p!=NULL;p=p->next)
		printf("%d\n",p->value);
}

void printBackward(struct node *p)
{
	if (NULL==p)
	{
		return;
	}
	printBackward(p->next);
	printf("%d \n",p->value);
	return;
}

void deleteList()
{
	struct node *p;
	for(p=head;p!=NULL;p=head)
	{
		head=head->next;
		printf("Deleting %d on %d\n",p->value,p);
	}
	tail=NULL;
}

int main()
{
	int value,j,i;
	//printf("\n Enter Element you want to insert : ");
	//scanf("%d",&j);

	//for ( i = 0; i < j; i++)
	do{
		printf("Enter A number:=");
		scanf("%d", &value);
		addNode(value);
		//printf("%d \n %d \n",head,tail);
	}while(value!=0);

	printForward();
	printBackward(head);
	deleteList();


}