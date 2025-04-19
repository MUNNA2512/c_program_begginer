#include <stdio.h>
int main(){
    int length,bridth,perimeter;
    printf("enter the length of rectangle");
    scanf("%d",&length);
    printf("enter the bridth of rectangle");
    scanf("%d",&bridth);
    perimeter=2*(length+bridth);
    printf("the perimeter of rectangle is %d",perimeter);
    return 0;
    }