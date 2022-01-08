#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start;
create_list();
display();
insert_beg();
main()
{
	int choice,n,m,pos,i;
	start=NULL;
	while(1)
	{
		printf("1.Create List\n");
		printf("2.Display\n");
		printf("3.Insert at beginning\n");
		printf("4.Quit\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("How many nodes you want:");
				scanf("%d",&n);	
				for(i=0;i<n;i++)
				{
					create_list();
				}

				break;	
			case 2:
				display();
				break;
			case 3:
				insert_beg();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Please enter a correct choice:");


		}
	}
}
create_list()
{
	int data;
	struct node *q,*tmp;
	tmp=malloc(sizeof(struct node));
	q=malloc(sizeof(struct node));
	printf("Please enter the data part:");
	scanf("%d",&tmp->data);
	tmp->next=NULL;
	if(start==NULL)
		start=tmp;
	else
	{
		q=start;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=tmp;

	
	}
}
display()
{

	struct node *q;
	q=malloc(sizeof(struct node));
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
	q=start;
	printf("List is:\n");
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
}
insert_beg()
{
	struct node *tmp;
	tmp=malloc(sizeof(struct node));
	printf("Enter the data part:");
	scanf("%d",&tmp->data);
	tmp->next=start;
	start=tmp;
}








