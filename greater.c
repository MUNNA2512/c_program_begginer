#include <stdio.h>
int main(){
int a;
printf("enter a number");
scanf("%d",&a);
if(a>=10){
    if(a==10){
        printf("given number is equal to 10");
    }
    else {
        printf("given number is greater than 10");
    }
}
else{
    printf("given number is less than 10");  
}
return 0;
}