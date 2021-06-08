#include<stdio.h>

void buildheap(int a[],int n,int i){
	
	int child,t;
	
	while (2*i+1<n)
	{
	child=2*i+1;
	if(child!=n-1 && a[child+1]>a[child])
		child=child+1;
	if(a[i]<a[child]){
	
	t=a[i];
	a[i]=a[child];
	a[child]=t;
   }
   i=child;
 }
}
void heapsort(int  a[],int n) {

	int i,t;
	for(i=n/2;i>=0;i--)
	 buildheap(a,n,i);
	for(i=n-1;i>=1;i--){
		t=a[0];
		a[0]=a[i];
		a[i]=t;
		buildheap(a,i,0);
	}
}
void main(){
 int  a[20],n,i;
 //int n=7,i;
 printf("enter no of values in the array");
 scanf("%d",&n);
 printf("\n enter array values:");
 for(i=0;i<n;i++)	
  scanf("%d",&a[i]);
 printf("\n before sorting, array values arer:\n");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  heapsort(a,n);
printf("\n after sorting ,array values are:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
