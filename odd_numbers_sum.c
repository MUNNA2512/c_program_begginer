#include <stdio.h>
int main(){
    int num,i,sum=0;
    printf("enter a number to print odd numbers till 1 to:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2!=0){
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("the sum of odd numbers is %d",sum);
    return 0;
}