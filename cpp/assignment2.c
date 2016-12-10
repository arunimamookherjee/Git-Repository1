/*Assignment 2*/
#include<stdio.h>
#include<conio.h>
main()
{
      int inp, num1, num2, temp, rev, i, j, k=0, unit, n, first = 0, second = 1, next;
      float no, cost ;
      do
      {
           system("cls");
      printf("MENUE:::(choose your option)\n");
      printf("1.Calculate bill. ");
      printf("\n2.Reverse a number ");
      printf("\n3.Octal to Binary of a given number.");
      printf("\n4.Checking whether a number is a perfect square or not");
      printf("\n5.Prime Factors of a number ");
      printf("\n6.Fibonacci Series ");
      printf("\n7.Leap Year checking ");  
      printf("\n8.Floyd's triangle ");
      printf("\nENTER YOUR OPTION:::: ");
      scanf("%d",&inp);
      
      switch(inp)
      {
                 case 1: printf("\nEnter the total number of units consumed. ");
                         scanf("%d",&unit); 
                         printf("\n");
                         cost=0;
                                                  
                         if(unit<50)
                         cost+=0.50*unit;
                         else if(unit>=50 && unit<150)
                         cost=(50*0.05)+ (unit-100)*0.75;
                         else if(unit>=150 && unit<250)
                         {
                              cost=(50*0.05)+ (unit-100)*0.75;
                              unit-=100;
                              cost+=(unit-100)*1.20;
                         }
                         else
                         {
                            cost=(50*0.05)+ (unit-100)*0.75;
                            unit-=100;
                            cost+=(unit-100)*1.20;
                            unit-=100;
                            cost+=(unit-100)*1.50;
                         }
                         cost+=(0.20*cost)+(0.10*cost);
                                             
                            
                         printf("\n%The total bill with taxes and surcharge is %fINR:::", cost);
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
                 
                 case 3:  printf("\nEnter an octal number::");
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
                          printf("\nOCTAL NUMBER IS::: ");
                          while(rev!=0)
                          {
                                        temp=rev%10;
                                        rev/=10;
                                        
                                   switch(temp)
                                   {
                                    case 0: printf("000");
                                            break;
                                    case 1: printf("001");
                                            break;
                                    case 2: printf("010");
                                            break;
                                    case 3: printf("011");
                                            break;
                                    case 4: printf("100");
                                            break;
                                    case 5: printf("101");
                                            break;
                                    case 6: printf("110");
                                            break;
                                    case 7: printf("111");
                                            break;
                                     }
                          }
                                               
                           
                         break;
                          
                         
                         
                 case 4: printf("\nEnter number :: ");
                         scanf("%d",&num1); 
                         num2=0;
                                               
                         for(i=1;i<=num1/2;i++)
                         {                  if(i*i==num1)
                                            {
                                            num2=1;
                                            printf("\nThe number is a perfect square!!");
                                            }
                         
                         }
                         
                         if(num2==0)
                         printf("\nThe number is not perfect square!!");
                         break;
                         
                 case 5: printf("\nEnter number :: ");
                         scanf("%d",&num1); 
                         temp=num1; i=2;
                         printf("\nPrime factors of %d are ::: ", num1);
                         while(temp!=1)
                         {
                                       while(temp%i==0)
                                       {
                                         printf("%d ",i);
                                         temp=temp/i;
                                       }
                         i++;
                         }
                         break;
                                       
                                       
                                       
                         printf("\nReciprocal is::: %f ", 1/no);
                         break;
                         
                 case 6: printf("Enter the number of terms in fibonacci:::");
                         scanf("%d",&n);
 
                        printf("First %d terms of Fibonacci series are ::::\n:::",n);
                        /**/
                        for ( i = 0 ; i < n ; i++ )
                         {
                        if ( i <= 1 )
                       next = i;
                       else
                        {
                        next = first + second;
                        first = second;
                        second = next;
                        }
                        printf("%d\ ",next);
                        }
                        break;
                 
                 case 7: printf("Enter a year to check if it is a leap year:::");
                         scanf("%d", &num1);
 
                         if ( num1%400 == 0)
                          printf("%d is a leap year.\n", num1);
                          else if ( num1%100 == 0)
                          printf("%d is not a leap year.\n", num1);
                          else if ( num1%4 == 0 )
                          printf("%d is a leap year.\n", num1);
                          else
                          printf("%d is not a leap year.\n", num1);  
                          
                                             
                        break;                      
                        
                  case 8:printf("Enter a number of rows of Floyd's triangle to print::::");
                         scanf("%d", &num1);   
                         k=1;
                         for(i=1;i<=num1; i++)
                         {
                                         for(j=0;j<i;j++)
                                          printf ("%d ", k++);
                          printf("\n");
                          }
                          break;
                                                                       
                 default: printf("\nOOPS!!! INVALID INPUT");
                 
                         
                 }         
                         
                               
                 printf("\nPRESS 0 TO CONTINUE:: ");
                 scanf("%d",&inp);
                 
      }while(inp==0);
      
      
      
      getch();  
}

