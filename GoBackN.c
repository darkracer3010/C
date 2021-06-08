#include<stdio.h>
void main(){
    int i,j,win,sender[50],l,ack,receiver[50],m=0;
    printf("enter window size:");
    scanf("%d",&win);
    printf("sender side\n");
    for(i=0;i<win;i++){
        scanf("%d",&sender[i]);
    }
    printf("the sender data is:");
    for(i=0;i<win;i++){
        printf("%d",sender[i]);
    }
    printf("\nreceiver side\n");
    for(i=0;i<win;i++){
        l=sender[i];
        printf("enter ack:");
        scanf("%d",&ack);
        if(ack==1){
            receiver[m++]=l;
        }
        else if(ack==0){
            i--;
        }            
        
    }
printf("after data transfer we get:");
for(i=0;i<win;i++){
        printf("%d",receiver[i]);
    }
}
