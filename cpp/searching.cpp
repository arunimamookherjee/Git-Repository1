/*  Assignment 6 
	Linear Search
	Binary Search
	Linear search with multiple occurance
*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	int a[20], to_look, i, j, num, inp,temp, beg=0, mid, end;
	
					printf("Enter number of elements you want in the array (less than 20)::::");
					scanf("%d", &num);
			  		printf("Enter the elements in the array::::\n");
					for(i=0;i<num;i++)
					scanf("%d", &a[i]);
					

	
	do{
		
		printf("\nMenu::");
		printf("\n1-->Linear Search");
		printf("\n2-->Binary Search");
		printf("\n3-->Linear Search with multiple occrance");
		
		scanf("%d", &inp);
		
		switch(inp)
		{
			
		
			case 1:	printf("\n\n\nEnter the element to you wish to search...");
					scanf("%d",&to_look);
					j=0;
					for(i=0;i<num;i++)
					if(a[i]==to_look)
					{
					printf("Element found!! at position %d",i+1);
					j=1;
					break;
					}
					
					if(j==0)
					printf("\nElement not found!");
					break;
					system("cls");
					
			case 2:	end=num;
					beg=0;
					i=1;
					mid=end/2;
					printf("\n\n\nEnter the element to you wish to search...");
					scanf("%d",&to_look);
					 
					 while(mid!=0)
					 {
					 	if(to_look<a[mid])
					 	{
					 		end=mid;
					 	}
					 	else if(to_look>a[mid])
					 	{
					 		beg=mid;
					 	}
					    else
					 	{
					 		printf("\nThe element found!! at position %d", mid+1);
					 		i=1;
					 		break;
					 		
					 	}
					 	
					 	mid=(beg+end)/2;			
						 
					}
					if(i==0)
					printf("\nElement not found!");
					break;
			
			case 3: printf("\n\n\nEnter the element to you wish to search...");
					scanf("%d",&to_look);
					j=0;
					for(i=0;i<num;i++)
					if(a[i]==to_look)
					{
						if(j==1)
						{
							printf("\nElement found again !! at position %d",i+1);	
						}
						else
						{
						printf("Element found!! at position %d",i+1);
						j=1;
						}
					
					}
					
					if(j==0)
					printf("\nElement not found!");
					break;
			default:
			printf("\nOOPS! Invalid input!");		
					
					
					
					
					
					
		}
		
		printf("\n \nPress 0 to continue!...");
		scanf("%d",&inp);
		getch();
		system("cls");
		
	}while(inp==0);
	
	getch();
}
