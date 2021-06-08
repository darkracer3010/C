#include<stdio.h>
void dijkstra(int h,int adj[h][h],int start){
	int visited[h], distance[h], cost[h][h], prenode[h];
	int i,j,count, mindis, temp;
	for(i=0;i<h;i++){		//assigning cost
		for(j=0;j<h;j++){
			if (adj[i][j]==0)
				cost[i][j]=100;
			else
				cost[i][j]=adj[i][j];
		}
	}
	for(i=0;i<h;i++){		
		visited[i]=0;
		distance[i]=cost[start][i];
		prenode[i]=start;
	}
	visited[start]=1;
	distance[start]=0;
	count=1;
	while(count!=h-1){
		mindis=100;
		for(i=0;i<h;i++){		//getting min weight adj non visited neighbour
			if(distance[i]<mindis && visited[i]==0){
				mindis=distance[i];
				temp=i;
			}
		}
		visited[temp]=1;
		for(i=0;i<h;i++){		//relaxation
			if(visited[i]==0 && (distance[i])>(mindis+cost[temp][i])){
			distance[i]=mindis+cost[temp][i];
			prenode[i]=temp;
			}
		}
	count++;
	}
	for(i=0;i<h;i++){
		if (i!=start && distance[i]!=100){
	 	printf("Path from %c to %c distance = %d\n",(char)start+65,(char)i+65,distance[i]);
     	temp=i;
	 	while(temp!=start){
	 		printf("%c <- ",(char)temp+65);
	 		temp=prenode[temp];
	 	}
	 	printf("%c\n",(char)start+65);
		}
   }
}
void main(){
	int i,j,h,start;
	printf("enter no.of vertices:");
	scanf("%d",&h);
	int adj[h][h];
	printf("enter adjacency matrix :");
	for(i=0;i<h;i++){
		for(j=0;j<h;j++){
			scanf("%d",&adj[i][j]);
		}
	}
	printf("enter starting node:");
	scanf("%d",&start);
	dijkstra(h, adj,start);
	
}
