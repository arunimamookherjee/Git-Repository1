#include<stdio.h>
#include<conio.h>
#include<windows.h>

void sort(int a[5]);
main()
{
	int mat1[5][5], mat2[5][5], mat[5][5], inp, i, j, k, sum=0, m, n, p, q, chk=0, ar[10], ele,pos , a[5], b[5], c[10],flag=0;
	
do{

	printf("MENU (for a 3x3 matrix) :::");
	printf("\n1.Addition 2.Subtraction 3.Multiplication 4.Transpose");
	printf("\n5.Find Greatest Number From Each Row");
	printf("\n6.Addition of Major Diagonal Elements");
	printf("\n7.Addition of Minor Diagonal Elements");
	printf("\n8.Upper Triangular Matrix");
	printf("\n9.Lower Triangular Matrix");
	printf("\n10.Find Whether Matrix is Symmetric or not?");
	printf("\n11.Insertion in an array");
	printf("\n12.Deletion in an array");
	printf("\n13.Merging of Sorted Array");
	printf("\n\nENTER YOUR CHOICE::::");
	scanf("%d",&inp);
	
	switch(inp)
	{
		case 1: 
                printf("\nEnter the number of rows and columns for matrix 1:::");
				scanf("%d %d",&m,&n);
				printf("\nEnter the number of rows and columns for matrix 2:::");
				scanf("%d %d",&p,&q);
				if(m!=p &&n!=q)
				{
				printf("~~~~ERROR~~~~");
				break;
				}
				
				printf("\nEnter matrix 1");
				for(i=0;i<m;i++)
				for(j=0;j<n;j++)
				{
					printf("\nEnter element");
					scanf("%d", &mat1[i][j]);
				}
				printf("\nEnter matrix ");
				for(i=0;i<p;i++)
				for(j=0;j<q;j++)
				{
					printf("\nEnter element ::",i,j);
					scanf("%d",&mat2[i][j]);
				}
				printf("\nSUM OF MATRIX 1 AND MATRIX 2::\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
					printf("%d  ",mat1[i][j]+mat2[i][j]);
					}
					printf("\n");
				}
				getch();
                system("cls");
				
			break;
			
			case 2: printf("\nEnter the number of rows and columns for matrix 1:::");
				scanf("%d %d",&m,&n);
				printf("\nEnter the number of rows and columns for matrix 2:::");
				scanf("%d %d",&p,&q);
				if(m!=p &&n!=q)
				{
				printf("~~~~ERROR~~~~");
				break;
				}
				
				printf("\nEnter matrix 1");
				for(i=0;i<m;i++)
				for(j=0;j<n;j++)
				{
					printf("\nEnter element");
					scanf("%d", &mat1[i][j]);
				}
				printf("\nEnter matrix ");
				for(i=0;i<p;i++)
				for(j=0;j<q;j++)
				{
					printf("\nEnter element :",i,j);
					scanf("%d",&mat2[i][j]);
				}
				printf("\nDIFFERENCE OF MATRIX 1 AND MATRIX 2::\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
					printf("%d  ",mat1[i][j]-mat2[i][j]);
					}
					printf("\n");
				}
				getch();
                system("cls");
				
				
			break;
			
			case 3: printf("\nEnter the number of rows and columns for matrix 1:::");
				scanf("%d %d",&m,&n);
				printf("\nEnter the number of rows and columns for matrix 2:::");
				scanf("%d %d",&p,&q);
				if(m!=p &&n!=q &&m!=n)
				{
				printf("~~~~ERROR~~~~");
				break;
				}
				
				printf("\nEnter matrix 1");
				for(i=0;i<m;i++)
				for(j=0;j<n;j++)
				{
					printf("\nEnter element");
					scanf("%d", &mat1[i][j]);
				}
				printf("\nEnter matrix ");
				for(i=0;i<p;i++)
				for(j=0;j<q;j++)
				{
					printf("\nEnter element :",i,j);
					scanf("%d",&mat2[i][j]);
				}
				printf("\nPRODUCT OF MATRIX 1 AND MATRIX 2::\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						sum=0;
						for(k=0;k<n;k++)
						{
						sum+=mat1[i][k]*mat2[k][i];
						
						printf("%d  ",sum);
						}
					}
					printf("\n");
				}
				getch();
                system("cls");
				
			break;
			
			
			
			case 4: printf("\nEnter the number of rows and columns for matrix 1:::");
				scanf("%d %d",&m,&n);
			
				
				printf("\nEnter matrix 1");
				for(i=0;i<m;i++)
				for(j=0;j<n;j++)
				{
					printf("\nEnter element");
					scanf("%d", &mat1[i][j]);
				}
			
				printf("\nTRANSPOSE OF MATRIX IS :::\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
										
						printf("%d  ",mat1[j][i]);
					
					}
					printf("\n");
				}
				getch();
                system("cls");
				
			break;
			
			
			case 5:
				 printf("\nEnter the number of rows and columns for matrix 1:::");
				scanf("%d %d",&m,&n);
				
				printf("\nEnter matrix 1");
				for(i=0;i<m;i++)
				for(j=0;j<n;j++)
				{
					printf("\nEnter element");
					scanf("%d", &mat1[i][j]);
				}
				
								
				for(i=0;i<m;i++)
				{
					p=mat1[i][0];
					for(j=0;j<n;j++)
					{
					 if(p<mat1[i][j])
					 p=mat1[i][j];
					 printf("%d  ",mat1[i][j]);
					}
					
					printf("\nGREATEST ELEMENT OF ROW %d is::: %d\n", i, p);
				}
				getch();
                system("cls");
			break;
			
			case 6: printf("\nEnter the number of rows and columns for matrix 1:::");
				scanf("%d %d",&m,&n);
			
				
				printf("\nEnter matrix 1");
				for(i=0;i<m;i++)
				for(j=0;j<n;j++)
				{
					printf("\nEnter element");
					scanf("%d", &mat1[i][j]);
				}
			
				printf("\n\n");
				sum=0;
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						if(i==j)
						sum+=mat1[i][j];
					
					}
					
				
				}
				printf("\nSUM OF MAJOR DIAGONAL:::%d", sum);
				getch();
                system("cls");
				break;
				
				
			case 7: printf("\nEnter the number of rows and columns for matrix 1:::");
				scanf("%d %d",&m,&n);
			
				
				printf("\nEnter matrix 1");
				for(i=0;i<m;i++)
				for(j=0;j<n;j++)
				{
					printf("\nEnter element");
					scanf("%d", &mat1[i][j]);
				}
			
				printf("\n\n");
				sum=0;
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						if(i+j==m-1)
						sum+=mat1[i][j];
						
					}
					printf("\n");
				
				}
				
				printf("\nSUM OF MINOR DIAGONAL:::%d", sum);
				getch();
                system("cls");
				break;
				
			case 8: printf("\nEnter the number of rows and columns for matrix 1:::");
				scanf("%d %d",&m,&n);
			
				
				printf("\nEnter matrix 1");
				for(i=0;i<m;i++)
				for(j=0;j<n;j++)
				{
					printf("\nEnter element");
					scanf("%d", &mat1[i][j]);
				}
			
				printf("\n\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
										
						printf("%d  ",mat1[i][j]);
					
					}
					printf("\n");
				}
				
				printf("\nUPPER TRIANGULAR MATRIX\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						if(i<=j)
						 printf("%d  ",mat1[i][j]);
						else
						printf("  ");
					}
				printf("\n");
				}
				getch();
                system("cls");
				break;	
			
			case 9: printf("\nEnter the number of rows and columns for matrix 1:::");
				scanf("%d %d",&m,&n);
			
				
				printf("\nEnter matrix 1");
				for(i=0;i<m;i++)
				for(j=0;j<n;j++)
				{
					printf("\nEnter element");
					scanf("%d", &mat1[i][j]);
				}
			
				printf("\n\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
										
						printf("%d  ",mat1[i][j]);
					
					}
					printf("\n");
				}
				
				printf("\nLOWER TRIANGULAR MATRIX\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
							if(i+j>=m-1)
						 printf("%d",mat1[i][j]);
						else
						printf("  ");
					}
				printf("\n");
				}
				getch();
                system("cls");
				break;
				
			case 10: printf("\nEnter the number of rows and columns for matrix 1:::");
				scanf("%d %d",&m,&n);
			
				
				printf("\nEnter matrix 1");
				for(i=0;i<m;i++)
				for(j=0;j<n;j++)
				{
					printf("\nEnter element");
					scanf("%d", &mat1[i][j]);
				}
			
				printf("\nMATRIX IS :::\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
										
						printf("%d  ",mat1[i][j]);
					
					}
					printf("\n");
				}
			
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
										
					if(mat1[j][i]!=mat1[i][j]);
					{
						printf("\nNOT A SYMMETRIC MATRIX!");
						break;
					}
										
					}
					
					printf("\n");
				}
				getch();
                system("cls");
				break;
				
				
				
			case 11:       printf("Enter your array:::\n");
	        	           for(i=0;i<10;i++)
	                       scanf("%d",&ar[i]);
                           printf("\nEnter the new element::");
                           scanf("%d", &ele);
	                       printf("\nEnter the position of the new element::");
	                       scanf("%d", &pos);
	
	
	                
	                	for(i=9;i>pos-1;i--)
	                 	ar[i]=ar[i-1];
	                   	
	                    pos--;
                      	ar[pos]=ele;
		
                         printf("\nThe new array is::\n");
                         for(i=0;i<10;i++)
	                     printf("\nPosition %d  --> Element %d",i, ar[i]);
                    getch();
                    system("cls");    
                    break;
                    
                    
             case 12: printf("Enter your array:::\n");
	                  	for(i=0;i<10;i++)
	                   	scanf("%d",&ar[i]);
	                    printf("\nEnter position of the element you wish to delete::");
	                     scanf("%d", &pos);
	                                pos--;	
                                 	for(i=pos;i<9;i++)
                                  	ar[i]=ar[i+1];
	
	                               printf("\nThe new array is::\n");
	                               for(i=0;i<9;i++)
	                               printf("\nPosition %d  --> Element %d",i+1, ar[i]);
	                             getch();
                                 system("cls");  
                                 break;
                                 
	       case 13: 	printf("Enter your 1st array:::\n");
	                 	for(i=0;i<5;i++)
	                  	scanf("%d",&a[i]);
	                   	sort(a);
		                printf("\nEnter your 2nd array:::\n");
	                 	for(i=0;i<5;i++)
	                  	scanf("%d",&b[i]);
		
	                   	sort(b);
	
                        	//merging
                         	i=0;j=0;k=0;
	                      for( ;i<5||j<5;k++ )
	                      {
	                      	if(a[i]<b[j])
	                       	{
		                    c[k]=a[i];
	                     	i++;
		
		                  }
	                   	else
	                      	{
	                       	c[k]=b[j];
	                        	j++;
	                         }
                          	}
		                   printf("\nk=%d::\n", k);
                     	printf("\nThe new array is::\n");
	                  for(i=0;i<k;i++)
	                  printf("\nPosition %d  --> Element %d",i, c[i]);
	                  getch();
                system("cls");
	                  break;
                
                 
				
	
		default:
			printf("!!OOPS!!! INVALID INPUT!!!");
					
			
		
	}
	printf("TO CONTINUE PRESS 1::");
	scanf("%d", &chk);
}while(chk==1);
	
	getch();
}









void sort(int a[5])
 {
 	int temp,i,j;
	for( i = 0; i < 5; i++)
	{
	  for( j = i+1; j < 5; j++)
	  {
			   if(a[j] < a[i])
			   {
					//swap them
				   temp = a[i];
				   a[i] = a[j];
				   a[j] = temp;
				}
	   }
	   
	}
	printf("\nThe sorted array is::\n");
	for(i=0;i<5;i++)
	printf("\n%d", a[i]);
}


 
