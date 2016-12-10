/*Circular Linked List
operations== Create, insert beginning-middle-end,deletion beginning-middle-end, search;*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


typedef struct node1
{
	int data;
	struct node1 *next;
}node;

node *start, *newnode, *temp,  *temp1;

void create();
void insert_beg();
void insert_mid();
void insert_end();
void del_beg();
void del_mid();
void del_end();
void search();
void display();


int main()
{
	int ch;
	start = NULL;
	temp = NULL;
	do
	{
	    system("cls");
		printf("........Circular Linked List .......\n");
		printf("1. Create List\n");
		printf("2. Insert beginning\n");
		printf("3. Insert middle\n");
		printf("4. Insert last\n");
		printf("5. Delete beginning\n");
		printf("6. Delete middle\n");
		printf("7. Delete last\n");
		printf("8. Display List\n");
		printf("9. Search\n");
		printf("10. Exit\n");
        
        printf("Enter Your Choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
        	case 1: create();getch();
        			break;
        	case 2: insert_beg();getch();
        			break;
			case 3: insert_mid();getch();
        			break;	
        	case 4: insert_end(); getch();
        			break;
        	case 5: del_beg();getch();
        			break;
			case 6: del_mid(); getch();
        			break;	
        	case 7: del_end();getch();
           			break;
			case 8: display();getch();
        			break;	
        	case 9: search(); getch();
        			break;
        	case 10: printf("You wish to exit!")	;		
        }
	} while(ch != 9);
	getch();
	return 0;
}

void create()
{
	if(start==NULL)
	{
	    newnode=(node *)malloc(sizeof(node *));
		printf("Enter data:");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
		
		start=newnode;
		newnode->next = start;
		
	    printf("Created Successfully\n");
	}
	else
	{
	    printf("List is not empty\n");
	}
	return;
}
void reverse()
{
    
}

void display()
{
    temp=start;
    if(temp==NULL)
    	printf("List is empty\n");
    else
    {
	    printf("The Linked List:  START-> ");
	    
	    while(temp -> next != start)
	    {
	        printf("%d -> ",temp->data);
	        temp=temp->next;
	        //temp=temp->next;
	    }
	    printf("%d -> ",temp->data);
	    printf("START\n");
	} 
	
	return;  
}

void search()
{
	int num, i=0;
  temp=start;
    if(temp==NULL)
    	printf("List is empty\n");
    else
    {
    	printf("\n Enter the number you are looking for..");
    	scanf("%d", &num);
	    
	    
	    while(temp -> next != start)
	    {
	    	++i;
	        if(temp->data==num);
	        {
			printf("\n%d found at position %d", num, i);
			return;
			}	
	        temp=temp->next;
	        //temp=temp->next;
	    }
	    printf("\n%d not found", num);
	    return;
	} 
	return;	
}

void insert_beg()
{
	if(start==NULL)
	{
	    printf("List is empty\n");
	}
	else
	{
	    newnode=(node *)malloc(sizeof(node *));
		printf("Enter data:");
		scanf("%d",&newnode->data);
		newnode -> next = NULL;
		
		temp = start;
	    while(temp -> next != start)
	        temp = temp -> next;
	        
	    temp -> next = newnode;
	    newnode -> next = start;
	    start = newnode;
	    
	    printf("Inserted Successfully\n");
	}
	return;
}

void insert_mid()
{
	int pos;
	if(start==NULL)
	{
	    printf("List is empty\n");
	}
	else
	{
	    newnode=(node *)malloc(sizeof(node *));
		printf("Enter data:");
		scanf("%d",&newnode->data);
		newnode -> next = NULL;
		
		printf("Enter data after which you want ot insert:");
		scanf("%d",&pos);
		
		temp = start;
	    while(temp -> data != pos)
	        temp = temp -> next;
	    newnode -> next = temp -> next;    
	    temp -> next = newnode;
	    printf("Inserted Successfully\n");
	}
	return;
}

void insert_end()
{
	if(start==NULL)
	{
	    printf("List is empty\n");
	}
	else
	{
	    newnode=(node *)malloc(sizeof(node *));
		printf("Enter data:");
		scanf("%d",&newnode->data);
		newnode -> next = NULL;
		
		temp = start;
	    while(temp -> next != start)
	        temp = temp -> next;
	        
	    temp -> next = newnode;
	    newnode -> next = start;
	    
	    printf("Inserted Successfully\n");
	}
	return;
}

void del_beg()
{
    
    int num,flag = 0;
    temp = start;
    if(temp == NULL)
	{
	   printf("List is empty\n");
	   return;
	}
	else
	{
	
		if(temp -> next == start)
		{
	 		free(temp);
	 		start = NULL;
	 		printf("Node is deleted sucessfully.\n");
		}
		else
		{
			temp1 = start;
			while(temp1 -> next != start)
			{
			   temp1 = temp1 -> next;
			}
		 
				start = start -> next;
				temp1 -> next = start;
				temp -> next = NULL;
		  		free(temp);
		  		printf("Node is deleted sucessfully.\n",num);
			
		
		}	
	}
}

void del_mid()
{
	int num;
    temp = start;
    if(temp == NULL)
	{
	   printf("List is empty\n");
	   return;
	}
	else
	{
		printf("Enter data to be deleted:");
		scanf("%d",&num);
		temp1 = temp -> next;
		while(temp1 -> data != num)
		{
			temp = temp1;
			temp1 = temp1 -> next;
		}
		temp -> next = temp1 -> next;
		temp1 -> next = NULL;
		free(temp1);
		printf("No. %d is deleted sucessfully.\n",num);
	}
	
}

void del_end()
{
	int num;
	temp = start;
    if(temp == NULL)
	{
	   printf("List is empty\n");
	   return;
	}
	else
	{
		

		temp1 = temp -> next;
		while(temp1 -> next != start)
		{
			temp = temp1;
			temp1 = temp1 -> next;
		}
		 
			temp -> next = start;
			temp1 -> next = NULL;
		 	free(temp1);
	
	}
}

