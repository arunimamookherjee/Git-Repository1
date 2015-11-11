
#include<iostream>
#include<conio.h>
#include <ctime>
#include <unistd.h>
#include <stdlib.h>    
#include <stdio.h>  

#define MAX 500000
int theArray[MAX];

using std::cout;
using std::cin;

void generateRandomArray(int size);		//generating an array of random numbers

void swap(int i,int j)
{
    int temp = theArray[i];
    theArray[i] = theArray[j];
    theArray[j] = temp;
}
void linearSearch( int size, int value)
{
bool valueInArray=false;
int i;
std::clock_t startTime = std::clock();

	for(i=0;i<size; i++)
	{
		if(theArray[i]==value)
		valueInArray=true;
		
	}
	
	if(valueInArray==true)
	cout<<"\nValue found";
	
	
std::clock_t endTime = std::clock();

cout <<"\nLinear Search Took  " << (endTime- startTime);
	
}



void bubbleSort(int size)
{
	
	int i, j;
	std::clock_t startTime = std::clock();
	
	for(i=size-1; i>1; i--)
	{
		for(j=0 ; j<i; i++)
		{
			if(theArray[j]>theArray[j+1])
			swap(j, j+1);
		}
	}
	
	std::clock_t endTime = std::clock();

	cout <<"\nBubble Sort Took  " <<(endTime- startTime);
	
	
}    

void binarySearch(int size, int value)
{
std::clock_t startTime = std::clock();
	
	int timesThrough=0;
	bool found=false;
	
	int Mid,Lbound=0,Ubound=size-1;
	
	
	while(Lbound<=Ubound)
	{
		Mid=(Lbound+Ubound)/2;
		if(value>theArray[Mid])
			Lbound=Mid+1;
		else if(value<theArray[Mid])
			Ubound=Mid-1;
		else
			found=true;
			
		timesThrough++;
	}
	
std::clock_t endTime = std::clock();

cout<<"\nBinary Search Took  " << (endTime- startTime);
cout<<"\nTimes Through  "<<timesThrough;

}




void quickSort(int left, int right)
{
if(right-left<=0)
return;

else
	{
	int pivot=theArray[right];
	int pivotLocation=partitionArray(left, right, pivot);
	
	std::clock_t startTime = std::clock();
	
	quickSort(left, pivotLocation-1);
	quickSort(pivotLocation+1, right);
	
std::clock_t endTime = std::clock();

	cout <<"\nQuick Sort Took  " <<(endTime- startTime);
	
	}
}


int partitionArray(int left, int right, int pivot)
{
int leftPointer=left-1;
int rightPointer=right;

while(true)
{
while(theArray[++leftPointer]<pivot);

while(leftPointer> 0 &&theArray[--rightPointer]>pivot);

if(leftPointer>=rightPointer)
	break;
 else
	swap(leftPointer, rightPointer);
}
swap(leftPointer, right);

return leftPointer;
}

 main() 
{
    
    
    generateRandomArray(400000);
    quickSort(0, 100000);
    quickSort(0, 400000);
    
    
    
 	
 	
   
    getch();
}





void generateRandomArray(int size)
{
	for(int i=0; i<size;i++)
	{
		
		theArray[i]=rand() % (21 - 10) + 0;
	}
}


