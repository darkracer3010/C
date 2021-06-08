//week-9 BFS traversal
#include<stdio.h>
#define max 10
int visited[max]={0},adj[10][10],n;
void dfs(int start );
void main()
{
	int i,j,start;
	printf("\n enter no of nodes of graph");
	scanf("%d",&n);
	printf("enter the adjacency matrix  of a graph");
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	    	scanf("%d",&adj[i][j]);
		}
	}

    printf("\n enter starting node ");
    scanf("%d",&start);
    printf("DFS TRAVERSAL\n");
    dfs(start);
}
void dfs(int start){
	int c,q[max],t=-1,i,dv	;
	q[++t]=start;
	visited[start]=1;
	while(t!=-1){
		dv=q[t--];
		printf("%c\n",dv+65);
		for(i=0;i<n;i++){
			
			if(visited[i]==0 && adj[dv][i]==1){
				q[++t]=i;
				visited[i]=1;
				
			}		
		}
	}
}
