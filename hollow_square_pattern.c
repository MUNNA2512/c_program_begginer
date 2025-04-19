#include <stdio.h>
int main(){
    int i,j,n;
    printf("enter a random number");
    scanf("%d",&n);
    int m=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||j==1||i==m||j==m){
                printf("S ");
        }
        else{
            printf("  ");    
                }
    }
    printf("\n");

}
return 0;
}