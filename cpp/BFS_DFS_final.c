/* Program for traversing a graph throught BFS and DFS */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 20

typedef enum boolean {false,true} bool;

int adj[MAX][MAX];
bool visited[MAX];
int n;  //denotes no. of nodes in graph

void create_graph();
void display();
void dfs_rec(int);
void dfs();
void bfs();

int main()
{
	int i,v,choice;
	create_graph();
	while(1)
	{
		printf("\n");
		printf(" 1. Display - Adjacency matrix \n");
		printf(" 2. Depth First Search using stack \n");
		printf(" 3. Breadth First Search \n");
		printf(" 4. Exit \n");
		printf("Enter your choice: ");
		scanf("%d" ,&choice);
		switch( choice)
		{
			case 1:
				printf("Adjacency Matrix: \n");
				printf("\n");
				display();
				printf("\n");
				break; 
			case 2:
				printf("\n Enter starting node for Depth First Search: ");
				scanf("%d",&v);
				for(i=1;i<=n;i++)
					visited[i]=false; 
				printf("\n DFS Traversal: \n");
				printf("\n");
				dfs(v);
				printf("\n");
				break;
			case 3:
				printf("\n Enter starting node for Breadth First Search: ");
				scanf("%d",&v);
				for(i=1;i<=n;i++)
					visited[i]=false;
				printf("\n BFS Traversal: \n");
				printf("\n");
				bfs(v);
				printf("\n");
				break;
			case 4:
				exit(1);
			default:
				printf("\n Wrong choice\n");
				break;
		}/*End of switch*/
	}/*End ofwhile*/
}/*End ofmain( )*/

void create_graph()
{
	int i,max_edges,origin,destin;
	
	printf("\n Enter number of nodes: ");
	scanf("%d" ,&n);
		max_edges=n*(n-1);
	
	for(i=1;i<=max_edges;i++)
	{
		printf("\n Enter edge %d( 0 0 to quit) : ",i);
		scanf("%d %d",&origin,&destin);
		
		if((origin == 0) && (destin == 0))
			break;
		if( origin> n || destin > n || origin <= 0 || destin <= 0)
		{
			printf("\n Invalid edge!\n");
			i--;
		}
		else
		{
			adj[origin][destin] = 1;
		}
	}/*End of for*/
}/*End of create~aph( )*/


void display()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%4d" ,adj[i][j]);
		printf("\n");
	}
}/*End of display()*/

void dfs(int v)
{
	int i,stack[MAX],top=-1,pop_v,j,t;
	int ch;
	
	top++;
	stack[top]=v;
	while(top >= 0)
	{
		pop_v=stack[top];
		top--; /*pop from stack*/
		if( visited[pop_v] == false)
		{
			printf("%d  ",pop_v);
			visited[pop_v] = true;
		}
		else
			continue;
		for(i=n;i>=1;i--)
		{
			if(( adj[pop_v][i] == 1 && visited[i] == false))
			{
				top++; /* push all unvisited neighbours of pop _v */
				stack[ top ]=i;
			}/*End ofif*/
		}/*End of for*/
	}/*End of while*/
}/*end of dfs( )*/


void bfs(int v)
{
	int i,front,rear;
	int que[20];
	
	front = rear = -1;
	printf("%d ",v);
	visited[v]=true;
	rear++;
	front++;
	que[rear]=v;
	while(front<=rear)
	{
		v=que[front]; /* delete from queue */
		front++;
		for(i=1;i<=n;i++)
		{
			/* Check for adjacent unvisited nodes */
			if(( adj[v][i] == 1 && visited[i] == false))
			{
				printf("%d ",i);
				visited[i]=true;
				rear++;
				que[rear]=i;
			}
		}
	}/*End ofwhile*/
}/*End of bfs()*/





