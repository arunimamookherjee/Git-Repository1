/*Implement the preorder, inorder and postorder traversal non-recursively*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int max=20;

struct node
{
	int info;
	node *lchild, *rchild;
}*root=NULL, *par=NULL, *loc=NULL, *ptr=NULL, *ptrsave=NULL, *tmp;

struct node stack[20];
int top=-1;

void stackPush(struct node *np);
struct node *stackPop();
void find(int ele);
void insert();
void inorder(struct node *r);

void preorder(struct node *r);

void recPre( struct node* hd);
void recIn(struct node *hd);

main()
{
int ch;
top=-1;
while(ch!=5)
	{
		printf("\nPress 1 to insert element in the tree");
		printf("\nPress 2 to display elements of the tree PREORDER");
		printf("\nPress 3 to display elements of the tree INORDER");
		printf("\nPress 4 to display elements of the tree POSTORDER");
		printf("\nPress 5 to exit");
		printf("\nEnter your choice....");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1: insert();
					break;
			case 2:	recPre(root);
					preorder(root);
					
					break;
		
			case 3: recIn(root);
					inorder(root);
					break;
				
		}
		
		
		
	}
	getch();
}

void stackPush(struct node *np)
{
	if(top>(max-1))
	{
	
	printf("\nCan't print more elements... top %d", top);
	return;
	}
	
	else
	{
	top=top+1;
	stack[top]=*np;
	printf("top%d  ", top);
	}
		
}

struct node *stackPop()
{
	struct node *itm;
	if(top==-1)
	{
		printf("No elements in the tree right now!");
		return NULL;
	}
	else
	{
	
		*itm=stack[top];
		top=top-1;
		return itm;
   }
	
}


void preorder( struct node *r)
{
	
struct node *ptr=r;
if(ptr==NULL)
	{
	printf("Tree is empty");
	return;
	}
	stackPush(ptr);
	while(top!=-1)
	{
     ptr=stackPop();
     printf("%d ", ptr->info);
     if(ptr->rchild!=NULL)
		stackPush(ptr->rchild);
		

	if(ptr->lchild!=NULL)
		stackPush(ptr->lchild);
	getch();
	}	
//if((r->lchild->lchild!=NULL)||(r->rchild->rchild!=NULL)))	
printf("\n");
}

void inorder(struct node *r)
{
	struct node *ptr=r;
	if(ptr==NULL)
	{	
	printf("\nThe tress is empty");
		return;
	}
	while(1)
	{
		while(ptr->lchild!=NULL)
		{
			stackPush(ptr);
			ptr=ptr->lchild;
		}
		while(ptr->rchild!=NULL)
		{
			printf("%d  ", ptr->info);
			if(top==-1)
			return;
			ptr=stackPop();
		}
		printf("%d ", ptr->info);
		ptr=ptr->rchild;
	}
	printf("\n");
}

void recIn(struct node *hd)
{
	if(hd != NULL) {
        printf("%d, ", hd->info);
        recIn(hd->lchild);
        printf("%d, ", hd->info);
        recIn(hd->rchild);
    }
}

void recPre(struct node* hd){
if(hd != NULL) {
        printf("%d, ", hd->info);
        recPre(hd->lchild);
        recPre(hd->rchild);
    }
}











void insert()
{
	int num;
	printf("\nEnter the number you wish to enter in the binary search tree...");
	scanf("%d", &num);
	 
	find(num);
	
	if(loc!=NULL)//first node of the tree
	{
		printf("\nYour Element already exits!");
		return;
	}
	tmp=(node*)malloc(sizeof(node));
	tmp->info=num;
	tmp->lchild=NULL;
	tmp->rchild=NULL;
	
	if(par==NULL)
	{
	root=tmp;
	printf("\n Your element has been inserted successfully");		
	return;
	}
	 else
	{
		if(num  < par->info)
			par-> lchild=tmp;
		else
			par-> rchild=tmp;
			
	printf("\n Your element has been inserted successfully");		
	return;
	}

	
}





void find(int ele)
{
	if(root==NULL)		//if there is no tree yet
	{
		loc=NULL;
		par=NULL;
	}
	
	else if(ele==root->info) //if there is only 1 node in the entire tree and that is same as the element
	{
		loc=root;
		par=NULL;
	}
	
	else
		{
			if(ele<root->info)
			ptr=root->lchild;
			else
			ptr=root->rchild;
			
			ptrsave=root;
			
			while(ptr!=NULL)
			{
			
				if(ele==ptr->info)//element found!
				{
					loc=ptr;
					par=ptrsave;
					return;
				}
				ptrsave=ptr;
				if(ele<ptr->info)
				ptr=ptr->lchild;
				else
				ptr=ptr->rchild;
			}
			loc = NULL;  
			par = ptrsave;
		}

}

/*
void preorder( struct node *r)
{
struct node *ptr =r;
if(ptr==NULL)
	{
	printf("Tree is empty");
	return;
	}
	pushStack(ptr)
	while(!stack_empty())
	{
     ptr=popStack();
     printf("%d ", ptr->info);
     if(ptr->rchild!=NULL)
		pushStack(ptr->rchild);

	if(ptr->lchild!=NULL)
		pushStack(ptr->lchild);
	}
printf("\n");
}*/
