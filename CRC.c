#include<stdio.h>
#include<string.h>
int xordiv(int a,int b){
	
}
int bin(int a){
	int d=0;
	int p=1;
	int e=0;
	while(a>0){

    	d=a%2;
    	a=a/2;
   	 	e=e+d*p;
   	 	p=p*10;
}
return e;
}
int dec(int a){
	int d=0;
	int p=1;
	int e=0;
	while(a>0){

   	 d=a%10;
   	 a=a/10;
   	 e=e+d*p;
  	 p=p*2;
		}
return e;
	
}
void main(){
	int i,f,g=0,h=0,l;
	int op;
	char a[50],b[50],c[50],str[50],v[10]="0";
	printf("enter data :");
	scanf("%s",&a);
	strcpy(c,a);
	printf("enter polynomial power:");
	scanf("%s",&b);
	f=strlen(b)-1;
	for(i=0;i<f;i++)
	 	strcat(c,"0");
	printf("%s\n",a);
	g=atoi(c);
	h=atoi(b);
    printf("%d %d",g,h);
    int k=dec(g);
	int y=dec(h);
	printf("\n%d %d",k,y);
	int r=k%y;
	printf("\n%d",r);
	int p=bin(r);
	printf("\n%d",p);
	//if(r<10)
	//	printf("\n0%d",p);
	//else
	  //  printf("\n%d",p);
	sprintf(str,"%d",p);
	if(p<=11)
		strcat(v,str);
	printf("\n%s",v);
//	printf("\n%s",c);
	strcat(a,v);
	printf("\nstring:%s",a);
	op=atoi(a);
	printf("\ninteger:%d",op);
	//verification
	int y1=dec(op);
	printf("\n%d",y1);
	int up=y1%y;
	if(up==0)
		printf("\nerror not occured");
	else{
	
		printf("\nerror occured");
	     printf("\n%d",up);  
	 
}	 
	 }

