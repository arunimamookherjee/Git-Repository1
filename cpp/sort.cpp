/*Sorting
1) Selection sort
2)	Bubble Sort
3)	Insertion Sort*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
int takeip(int a[10]);
void display(int a[10], int n);
main()
{
	int ar[10], temp, i,n, j, inp;
	
	do{
		
	printf("MENU...(CHOOSE YOUR OPTIONS!)");
	printf("\n1. Selection Sort");
	printf("\n2. Bubble Sort");
	printf("\n3. Insertion Sort");
	printf("\nYOUR CHOICE....");
	
	scanf("%d",&inp);
	switch(inp)
		{
	
		case 1: n=takeip(ar);
				printf("\nSelection Sort begins now!!!");
				
				for(i=0;i<n;i++)
				for(j=i+1; j<n; j++)
					if(ar[i]>ar[j])
					{
						temp=ar[i];
						ar[i]=ar[j];
						ar[j]=temp;
					}
				display(ar,n);
					
			
				break;
				
		case 2: n=takeip(ar);
				printf("\nBubble Sort begins now!!!");
 
  				for (i=0;i<n;i++)
  				  for (j=0;j<n-i;j++)
    				 if(ar[j]>ar[j+1]) 
      					{
       				 	temp=ar[j];
       					 ar[j]= ar[j+1];
      				  	 ar[j+1] = temp;
    					}
 				display(ar,n);
 				
				break;
		case 3: 
				n=takeip(ar);
				printf("\nInsertion Sort begins now!!!");
				
				for(i=1; i<n ; i++)
					for(j=i; j>0; j--)
					{
						if(ar[j]<ar[j-1])
						{
							temp=ar[j];
							ar[j]=ar[j-1];
							ar[j-1]=temp;
						}
					}
				display(ar,n);
			
				break;
				
				
		
		default: printf("\nOOPS! Invalid input. Try again");
		
		}
		
	printf("\nPress 1 to continue...");
	scanf("%d",&inp);
	getch();
	system("cls");
	
	}while(inp==1);
}

int takeip(int a[10])
{
	int i, n; 
				printf("\nEnter the number of elements in the array....");
				scanf("%d", &n);
				printf("\nINPUT FOR THE ARRAY\n");
				for(i=0;i<n;i++)
				{
					scanf("%d", &a[i]);
				}
			return n;
			
}
void display(int a[10], int n)
{
		int i;
		printf("The sorted array is:::");
				for(i=0;i<n;i++)
				{
					printf("%d ", a[i]);
				}
}
