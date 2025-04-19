#include <stdio.h>
int returnmax( int array[], int n){
    int max=0;
    for(int i=0;i<n;i++){
    if(array[i]>max){
        max=array[i];
    }
    }
    return max;
}
int main(){
    int arr[]={5,58,69,558,67};
    int max=returnmax(arr,5);
    printf("maxx: %d\n",max);
    return 0;
}