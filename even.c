#include <stdio.h>
int main(){
    int num,i;
    printf("enter a number to print even numbers till:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}