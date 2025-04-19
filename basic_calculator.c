#include <stdio.h>
int main(){
    int a,b,n;
    int sum,sub,mul,mod;
    float div;

    printf("enter first integer");
    scanf("%d",&a);
    printf("enter second integer");
    scanf("%d",&b);
    printf("enter a number for operation  like 1-addition, 2-subtraction,3-multiple");
    scanf("%d",&n);

    switch(n){
        case 1: sum=a+b;
        printf("addition is %d",sum);
                break;
        case 2: sub=a-b;
        printf("subtraction is %d",sub);
                break;
        case 3: mul=a*b;
        printf("multiple is %d",mul);
                break;
        case 4: mod=a%b;
        printf("reminder is %d",mod);
                break;
        case 5: div=a/b;
        printf("division is %f",div);
                break;
        default: printf("invalid operation code");
    }
    return 0;

}