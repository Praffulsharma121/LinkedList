// Single linked list operation//
#include<iostream>
#include<stdlib.h>// for mallloc function//

struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;// Default value is NULL in C for global declerations//

void append()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data :");
	scanf("%d",&temp->data);
	temp->link =NULL; 
	
	if(root==NULL)// LIst is empty;
	{
		root=temp;
	}
	else
	{
		struct node* p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		} 
		p->link=temp;
    }
}

int length()
{
	int count=0;
	struct node* temp;
	temp=root;
	
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}
	return count ;
}

void display()
{
	struct node* temp;
	temp=root;
	if(temp!=NULL)
	{
		printf("****\n*\n*\n****\n*\n*\n****MTY");
	}
	else
	{
		while(temp!=NULL )
		{
		printf("&d-->",temp->data);
		temp=temp->link;
	    }
	    printf("\n\n");
	}
}
int len;
int main()
{
	int choice;
	while(1)
	{
		printf("Single Linked list operations :  \n");
		printf("1. Append \n");
		printf("2. Find lenth of Linked list \n");
		printf("3. Display Linked list\n");
		
		printf("Enter you choice :");
		scanf("%d",&choice);
		
		
		switch(choice)
		{
			case 1: append();break;
			case 2: len=length();
			         printf("Length is %d",len);break;
			case 3: display();break;
			default: printf("Invalid Input******");
		
		}
		
		
	}
	return 0;
}
