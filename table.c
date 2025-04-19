#include <stdio.h>
int main (){
    int number,table,i;
    printf("enter a number to print table:");
    scanf("%d",&number);
    for(i=1;i<=10;i++){
        table=number*i;
        printf("%d*%d=%d\n",number,i,table);
    }
    return 0;
    
}