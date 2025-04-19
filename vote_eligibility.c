#include <stdio.h>
int main(){
    int age;
    printf("enter your age to check eligibility for vote ");
    scanf("%d",&age);
    if(age>=18){
        printf(" congrats,you are eligible for vote:");
    }
    else{
        printf("sorry,yu are not eligible for vote:");
    }
    return 0;
}