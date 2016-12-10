
/*Assignment 4*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

struct student
{
	int rollno, m1, m2;
	char name[20];
	float avg;
};

main()
{	
	int i,j, inp=0, num, temp_roll, flag=0, temp_i;
	struct student stud[10], temp_s;
	printf("Creating student database.....");
	printf("\nEnter the number of students (MAX 10).....");
	scanf("%d",&num);
	printf("\nEnter the student data now:::");
	for(i=0;i<num;i++)
	{
		printf("\nFor student %d...\n", i+1);
		printf("Enter student name:::");
		scanf("%s", stud[i].name);
		printf("\nEnter roll number:::");
		scanf("%d", &stud[i].rollno);
		printf("\nEnter marks for SUBJECT 1:::");
		scanf("%d",&stud[i].m1);
		printf("\nEnter marks for SUBJECT 2:::");
		scanf("%d", &stud[i].m2);
		stud[i].avg=(stud[i].m1+stud[i].m2)/2;	
		
			
	}
	
	
	
	
	do{
		system("cls");
		printf("\nMENUE (Choose your option)");
		printf("\n1.To MODIFY the details of a particular student...");
		printf("\n2.To DELETE the deatils of a particular student...");
		printf("\n3.To SEARCH a particular student by his/her roll number...");
		printf("\n4.To PRINT the deatils of all students...");
		printf("\n5.To ADD the deatils of a new student...");
		
		printf("\n6.To EXIT");
		scanf("%d",&inp);
		
		switch(inp)
		{
			case 1: printf("\nEnter the roll number of the student whose details you wish to MODIFY....");
					scanf("%d", &temp_roll);
					
					for(i=0;i<num;i++)
					{
						if(temp_roll==stud[i].rollno)
						{
							printf("Enter the modified student name:::");
							scanf("%s", stud[i].name);
							printf("\nEnter the modified roll number:::");
							scanf("%d", &stud[i].rollno);
							printf("\nEnter modified marks for SUBJECT 1:::");
							scanf("%d", &stud[i].m1);
							printf("\nEnter modified marks for SUBJECT 2:::");
							scanf("%d", &stud[i].m2);
							stud[i].avg=(stud[i].m1+stud[i].m2)/2;	
							flag=1;
							break;
						}					
						
					}
					if(flag==0)
					printf("\n!!!Oops! No such roll number found!!");
					break;
				
			case 2:  printf("\nEnter the roll number of the student whose details you wish to DELETE....");
					scanf("%d", &temp_roll);
					
						for(i=0;i<num;i++)
					{
						if(temp_roll==stud[i].rollno)
						{
							flag=1;
							temp_i=i;
							--num;
							break;
							
							
							
						}
					}
					
					if(flag==0)
					{
					printf("\n!!!Oops! No such roll number found!!");
					break;
					}
					else
					
					for(i=temp_i; i<num ;i++)
					{
						stud[i]=stud[i+1];
						
					}
					printf("\nDetails of roll number %d DELETED!",temp_roll);
					break;
					
			
			case 3: printf("\nEnter the roll number of the student whose details you wish to FIND....");
					scanf("%d", &temp_roll);
					flag=0;
					for(i=0;i<num;i++)
					{
						if(temp_roll==stud[i].rollno)
						{
							printf("\nFOUND!!!!");
							printf("\nName of the student:: %s",stud[i].name);
							printf("\nRoll number        :: %d", stud[i].rollno);
							printf("\nMarks for SUBJECT 1:: %d", stud[i].m1);
							printf("\nMarks for SUBJECT 2:: %d", stud[i].m2);
							printf("\nAverage marks      :: %f", stud[i].avg);						
							flag=1;
							break;
						}					
						
					}
					if(flag==0)
					printf("\n!!!Oops! No such roll number found!!");
					break;
					
			case 4: /*sorting the database*/
					for(i=0;i<num;i++)
					{
						for(j=i;j<num;j++)
						{
							if(stud[i].rollno> stud[j].rollno)
							{
							temp_s=stud[i];
							stud[i]=stud[j];
							stud[j]=temp_s;
							}
						}	
					}
			
					printf("\Student DETAILS!!!!...\n");
					
					        printf("\nSTUDENT.......NAME............MARKS1.............MARKS2...............AVERAGE.........:: \n");		
						
					for(i=0;i<num;i++)
					{		printf("\n%d          ", i+1);	
							if(strlen(stud[i].name)!=17)
							{	
								printf(" %s ", stud[i].name);
								for(j=strlen(stud[i].name);j<17;j++)
								printf(" ");
							}
										
							printf(" %d           ", stud[i].rollno);											
							printf(" %d           ", stud[i].m1);
							printf(" %d           ", stud[i].m2);
							printf(" %f           ", stud[i].avg);			
											
					}
					
					break;
			case 5:printf("\nEnter the new roll number of the student whose details you wish to ADD....");
					scanf("%d", &temp_roll);
					flag=0;	
					for(i=0;i<num;i++)
					    if(temp_roll==stud[i].rollno)
						{
							flag=1;
							printf("\n Sorry this roll no already exists!!");
							break;
								
						}
				    if(flag==0) 
					  {
					 		
							printf("Enter the student name:::");
							scanf("%s", stud[num].name);
							printf("\nEnter the roll number:::");
							scanf("%d", &stud[num].rollno);
							printf("\nEnter marks for SUBJECT 1:::");
							scanf("%d", &stud[num].m1);
							printf("\nEnter marks for SUBJECT 2:::");
							scanf("%d", &stud[num].m2);
							stud[i].avg=(stud[num].m1+stud[num].m2)/2;
							num++;	
							
						}					
						
					
					
					break;
										
			case 6: break;
			
			default: 	printf("\nOOPS! INVALID INPUT!!!");
			
				
		}
		
		
		
		
		
		
		printf("\nEnter 0 to continue.....");
		scanf("%d", &inp);
		
	}while(inp==0);
	
	
	
	
}
