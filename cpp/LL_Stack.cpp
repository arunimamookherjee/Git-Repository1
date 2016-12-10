/*Implement the stack using linked list*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct node{
 	int info;
 	struct node *next; 
 }*top, *newptr, *ptr, *save;
 
 struct node *createNode(int inf);
 void push(struct node *np);
 void pop();
 void display();
 
 main()
 {
 	int inf, chk=1, choice;
 	char ch='y';
 	top=NULL;
 	
 	system("cls");
 	
 	while(chk==1)
 	{
		printf("\nMENU:: (choose your option.. press any other key to exit)");
		printf("\n1.PUSH 2.POP ");
		printf("\nEnter your choice...");
		scanf("%d",&choice);
		
		switch(choice)
		{
		case 1:printf("\nEnter data for the new node...");
		 		scanf("%d", &inf);
		 		
		 		newptr=createNode(inf);
		 		
		 		if(newptr==NULL)
		 		printf("\nMission Fail! Run Away!");
		 		else
		 		push(newptr);
		 		
		 		printf("\nNow the stack is....");
		 		display();
		 		
				 break;
				 
		case 2:printf("Popping Elements!!");
				pop();
				printf("\nNow the stack is....");
		 		display();
				
				
				
				break;
		 		
		}
		
		printf("\nPress 1 to continue...");
		scanf("%d", &chk);
		
	}
	
	getch();
	
 }
 
 struct node *createNode(int inf)
 {
 	ptr=(node *)malloc(sizeof(node));
 	ptr->info=inf;
 	ptr->next=NULL;
 	return ptr;
 	
 }
 void push(struct node *np)
 {
 	if(top==NULL)
		top=np;
	else
		{
			save=top;
			top=np;
			np->next=save;
		} 	
 }
 void pop()
 {
 	if(top==NULL)
 	printf("Underfloww!!!");
 	else
 	{
 		ptr=top;
 		top=top->next;
 		printf("Popped element is...%d",ptr->info);
 		free(ptr);
	 }
 }
 void display()
 {
 	struct node *np=top;
 	while(np!=NULL)
 	{
 		printf("%d ->", np->info);
 		np=np->next;
	 }
 }
 
 
 
 
 
 
