#include <stdio.h>
int main(){
    int i,n,m;
    int sum=0;
    printf("enter  a natural starting number");
    scanf("%d",&n);
    printf("enter a  natural number");
    scanf("%d",&m);
    for(i=n;i<=m;i++){
        sum=sum+i;
    }
    printf("the sum till %d to %d is %d",n,m,sum);
    return 0;

}