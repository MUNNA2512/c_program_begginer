#include <stdio.h>
#include <string.h>
int main(){

    char name[5][100]; // Assuming a maximum length of 100 characters
    int i;
    for(i=0; i<5; i++){
        printf("Enter a name%d: ",i+1);
        scanf("%s", &name[i]);
       
        // printf("\n"); // Add a new line after each name input
    }
    for(i=0; i<5; i++){
        printf("Name%d: %s\n", i+1,name[i]);
    }
    return 0;
}

