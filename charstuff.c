#include<stdio.h>
#include<string.h>
void main(){
	int i,j=0;
	char a[50],flag,esc;
	printf("enter transmitted data:");
	scanf("%s",&a);
	printf("enter flag:");
	scanf(" %c",&flag);
	printf("Enter escape seq:");
	scanf(" %c",&esc);
//	printf("enter ending delimiter:");
	//scanf(" %c",&c);
	printf("Before Stuffing the transmitted data is:%s",a);
	printf("\nAfter Stuffing the transmitted data is:");
	printf("%c",flag);
	//printf("esc");
    for(i=0;i<strlen(a);i++){
    	    printf("%c",a[i]);
    		if(a[i+1]==flag)
    			printf("%c",esc);
    	    else if(a[i]==esc)
    	    	printf("%c",esc);
		    }
		    printf("%c",flag);
			printf("\nAt the receiver end, the transmitted data after destuffing is:%s",a);
}

