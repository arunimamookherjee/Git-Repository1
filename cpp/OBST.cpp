/*Optimal Binary Search Tree---->Cost calculation*/
#include<stdio.h>
#include<conio.h>


int node[50],freq[50],node2[50],freq2[50],freqSum=0, min=99999;

int OBST(int i, int j);

int sumF(int i, int j);

/*typedef struct tree
{
	int inf;
	int pos;
	tree *lchild;
	tree *rchild
 } */
 
main()
{
	int n,i, OBSTsum=0;
	
	printf("\n Calculating the cost of Optimal Binary Tree....\n");
	printf("\n Enter the number of nodes in the OBST...");
	scanf("%d",&n);
	printf("\nEnter the node info along with the frequency in ARRANGING FORM....");
	for(i=0;i<n;i++)
	{
		printf("\nNode...");
		scanf("%d",&node[i]);
		printf("\nFrequency...");
		scanf("%d",&freq[i]);
	}
/*	printf("\nEnter the node info along with the frequency in PREORDER FORM....");
	for(i=0;i<n;i++)
	{
		printf("\nNode...");
		scanf("%d",&node[i]);
		printf("\nFrequency...");
		scanf("%d",&freq[i]);
	}*/
		
	OBSTsum=OBST(0,n-1);
	
	
	printf("\nThe cost of OPTIMAL BINARY TREE IS....%d", OBSTsum);
	
	
	
		

	getch();
	
}



int OBST(int i, int j)
{
	int n, cost, fsum, min;
	
	
   if (j < i)      // If there are no elements in this subarray
     return 0;
   if (j == i)     // If there is one element in this subarray
     return freq[i];
 
  
   fsum = sumF( i, j);
 
   // Initialize minimum value
   min = 99999;
 
   
   for ( n = i;n <= j; n++)
   {
       cost = OBST( i, n-1) + OBST( n+1, j);
       if (cost < min)
          min = cost;
   }
 
    return min + fsum;


}



 



int sumF(int i, int j)
{
	int k, s=0;
	for(k=i;k<=j;k++)
	s+=freq[k];
	
	return s;
	
}



