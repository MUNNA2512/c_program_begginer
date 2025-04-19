#include <stdio.h>
int main()
{
    
   int a,b;
    
   printf("enter first number" );
   scanf("%d",&a);
   printf("enter second number" );
   scanf("%d",&b);
   b = a;
   a = b+(a-b);
   printf("a=%d & b=%d",a,b );
   
    return 0;
}