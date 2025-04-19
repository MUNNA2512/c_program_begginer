#include <stdio.h>
int main(){
    int i=1,n,fac=1;
    printf("enter a random number");
    scanf("%d",&n);
    do
    {
       fac*=i;
        /* code */
        i++;
    } while (i<=n);
    printf("the factorial of %d is %d",n,fac);
return 0;
}