/*Assignment 1*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
      int inp, num1, num2, num3, temp, rev, i, bin[10], dec;
      float no;
      do
      {
           system("cls");
      printf("MENUE:::(choose your option)\n");
      printf("1. Print greatest of 3 numbers");
      printf("\n2.Reverse a number ");
      printf("\n3.Printing even numbers between 1-100");
      printf("\n4.Printing multiplication table of a number ");
      printf("\n5.Printing a reciprocal ");
      printf("\n6.Convert a binary number to decimal ");
      printf("\n7.Convert a decimal number to binary ");  
      printf("\nENTER YOUR OPTION:::: ");
      scanf("%d",&inp);
      
      switch(inp)
      {
                 case 1: printf("\nEnter number 1:: ");
                         scanf("%d",&num1); 
                         printf("\nEnter number 2:: ");
                         scanf("%d",&num2);
                         printf("\nEnter number 3:: ");
                         scanf("%d",&num3);   
                         if(num1>num2 && num1>num3)
                         printf("\n%d is the greatest ", num1);
                         else if( num2>num3 && num2>num1)
                         printf("\n%d is the greatest ", num2);
                         else
                         printf("\n%d is the greatest ", num3);
                         break;
                 case 2: printf("\nEnter number:: ");
                         scanf("%d",&num1);  
                         temp=num1;
                         rev=0;
                         while(temp!=0)
                         {
                               rev=rev+temp%10;
                               temp=temp/10;
                               if(temp!=0)
                               rev*=10;
                                  
                         }
                         
                          printf("\nReverse of the number is:::%d",rev);
                          break;
                 
                 case 3:  printf("\nEVEN NUMBERS BETWEEN 1-100");
                          for(i=0;i<=100;i++)
                          if(i%2==0)
                          {
                                     printf("\n%d", i);
                          
                          }
                          
                         
                         break;
                 case 4: printf("\nEnter number :: ");
                         scanf("%d",&num1); 
                         printf("\nTABLE OF %d ", num1);
                        
                         for(i=1;i<=10;i++)
                         {
                                            printf("\n%d x %d = %d", num1, i, num1*i);
                         
                         }
                         break;
                         
                 case 5: printf("\nEnter number :: ");
                         scanf("%f",&no); 
                         printf("\nReciprocal is::: %f ", 1/no);
                         break;
                         
                 case 6: printf("\nEnter a binary number :: ");
                         scanf("%d", &num1);
                         i=0;
                         temp=num1;
                         dec=0;
                         while (temp!=0)
                         {
                          num2 = temp%10;
                          temp/=10;
                          dec += num2*pow(2,i);
                          ++i;
                             }
                        printf("\nDecimal for the number::: %d ",dec );
                        break;
                 
                 case 7:printf("\nEnter number to be converted into binary :: ");
                        scanf("%d", &num1);
                        temp=num1;i=0;
                        
                         while(temp!=0)
                         {
                         bin[i]=temp%2;
                         temp=temp/2;
                       
                         i++;
                         }
                         printf("%d\n", i);
                         
                         while(i!=0)
                         {
                                    printf("%d", bin[i]);
                                    i--;
                         }                   
                                                 break;                      
                                                  
                 default: printf("\nOOPS!!! INVALID INPUT");
                 
                         
                         }         
                         
                               
                 printf("\nPRESS 0 TO CONTINUE:: ");
                 scanf("%d",&inp);
                 
      }while(inp==0);
      
      
      
      getch();  
}
