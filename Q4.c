#include <stdio.h>
int main()
{   int n;
    printf("enter the terms of fib series");
    scanf("%d", &n);
    int arr[100];
    arr[0] =0;
    arr[1] =1;
    printf("%d\t%d\t",arr[0],arr[1]);
    for(int i=2;i<=n;i++) {
      arr[i] =arr[i-1]+arr[i-2];
      printf("%d\t",arr[i]);
    }


   
    return 0;
}