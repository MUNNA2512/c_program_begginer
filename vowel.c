#include <stdio.h>
int main(){
    char alpha;
    printf("enter a alphabet for check vowel or not");
    scanf("%c",&alpha);
    

    switch(alpha){
        case 'a': printf("vowel");
                break;
        case 'e': printf("vowel");
                break;
        case 'i': printf("vowel");
                break;
        case 'o': printf("vowel");
                break;
        case 'u': printf("vowel");
                break;
        default: printf("consonant");
    }
    return 0;
}