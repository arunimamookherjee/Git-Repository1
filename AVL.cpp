/*Check whether a given tree is an avl tree or not*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct n 
{
	int info;
	struct n *lchild,*rchild;
}node;
node *n=NULL,*root=NULL, *loc,*par, *ptr,*ptrsave;

void insert();

void find(int ele);
bool avl=true;


void recIn(node *hd);
void recPre(node* hd);

int calcBF(node *n);
int findBF(node *n);

main()
{
	int chk=1, i,n=0, ele;
	
	
	printf("\nEnter elements you wish to enter into a BINARY SEARCH TREE....\n");
	while(chk==1)
	{
		insert();
		
		printf("\nPress 1 to continue or any other key to discontinue....");
		scanf("%d",&chk);
		
	}
	printf("\n");
	//recPre(root);
	printf("\n");
	recIn(root);
	
	if(avl)
	printf("\nCONGRATS! It is an AVL tree");
	else
	printf("\nOops! Badluck This will cause a zombie apocalypse and all your kittens to die!! it is not an AVL tree");
	
	

	
}

void recIn( node *hd)
{
	int bf=0;
	
	if(hd != NULL) {
        recIn(hd->lchild);
        printf("%d ( ", hd->info);
        	
        	if(hd->info>root->info)
        	printf("-");     	
        	
        	
        bf=calcBF(hd);
        if(bf>1)
        avl=false;
        printf("%d), ", bf);
        recIn(hd->rchild);
    }
}


int calcBF(node *n)
{
	int leftBF, rightBF, balanceFactor;
	
	leftBF=findBF(n->lchild);
	rightBF=findBF(n->rchild);
	balanceFactor=leftBF-rightBF;
	
	return balanceFactor;
}

int findBF(node *n)
{
	int bf=0,leftBF,rightBF;
	
	if(n==NULL)
	{
		return bf;
	}
	leftBF=findBF(n->lchild);
	rightBF=findBF(n->rchild);
	if(leftBF>rightBF)
		bf=leftBF;
	else
		bf=rightBF;
	
	return (bf+1);
	
	
}







void recPre(node* hd)
{
  if(hd != NULL) 
	{
        printf("%d, ", hd->info);
        recPre(hd->lchild);
        recPre(hd->rchild);
    }
}











void insert()
{
	int num;
	node *tmp;
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














