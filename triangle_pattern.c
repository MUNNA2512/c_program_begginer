#include <stdio.h>
int main(){
    // char alpha;
    // printf("Enter a character in lowwercase to change in uppercase:");
    // scanf("%c",&alpha);
    // alpha=alpha-32;
    // printf("%c",alpha);
    // int n;
    // printf("Enter a number:");
    // scanf("%d",&n);
    // printf("the octal of %d is %o",n,n);
    // return 0;
    // char alpha;
    // printf("Enter a character");
    // scanf("%c",&alpha);
    // printf("%d",alpha);
    // int a=5,b=8,c;
    // c=b;
    // b=a;
    // a=c;
    // printf("%d\n",a);
    // printf(";%d\n",b);
    
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=5;j++){
    //         if(j==1||i==1||j==5||i==5||i==3&&j==2||j==3&&i==3||i==3&&j==4){
          
    //     printf("S ");
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
    int i, j,k;
     for ( i = 1; i <= 5; i++)
     {
        for( j = 5; j>i;j--){
           printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
     }
   
    // char k;
    // printf("enter  a character");
    // scanf("%c",&k); 
    // for(i=5;i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         printf("%c ",k);
    //     }
        
    //     printf("\n");
    // }

    return 0;
}