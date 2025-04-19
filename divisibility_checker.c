#include <stdio.h>
void main(){
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    for(b=0;b<=a;b++){
        if(b%3==0){
            printf("%d \n",b);

        }
        else if(b%7==0){
            printf("%d \n",b);
        }
    }
    
}