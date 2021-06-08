//WEEK  6: Program for implementation of Hashing with linear probing
#include<stdio.h>
void linearprobing(int ht[],int ae,int hv);
void main(){
	int a[10],ht[10],n,i,hv;
	printf("\n enter the no of elements ");
	scanf("%d",&n);
	printf("\n enter the elements ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<10;i++)
		ht[i]=-1;
		for(i=0;i<n;i++){
			hv=a[i]%10;
			if(ht[hv]==-1)
			ht[hv]=a[i];
			else
			linearprobing(ht,a[i],hv);
		}
		printf("\n index -- Hash table content");
		for(i=0;i<10;i++)
		printf("\n |%d     |  \t  %d  \t|",i,ht[i]);
	
}
void linearprobing(int ht[10],int ae,int hv){
	int i,flag=0;
	for(i=hv+1;i<10;i++){
		if(ht[i]==-1){
			ht[i]=ae;
			flag=1;
			break;
		}
		}
	
		for(i=0;((i<hv)&&(flag==0));i++){
			if(ht[i]==-1){
				ht[i]=ae;
				break;
			}
			
		}
		
		}


