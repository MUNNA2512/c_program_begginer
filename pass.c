#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void bruteforce(char *password, int max_length)
{
    char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charset_size = strlen(charset);
    int password_length = strlen(password);
    char *guess = (char *)malloc(password_length + 1);

    for (int i = 0; i < password_length; i++)
    {
        guess[i] = charset[0];
    }
    guess[password_length] = '\0';

    long attempts = 0;
    while (1)
    {
        if (strcmp(guess, password) == 0)
        {
            printf("Password is found:  %s\n", guess);
            printf("Total Attempts: %d\n", attempts);
            free(guess);
        }

        int i = password_length - 1;
        while (i >= 0)
        {
            int pos = strchr(charset, guess[i]) - charset;
            if (pos + 1 < charset_size)
            {
                guess[i] = charset[pos + 1];
                break;
            }
            else
            {
                guess[i] = charset[0];
            }
        }
        attempts++;
        if (attempts % 1000 == 0)
        {
            printf("attempts: %d\n ", attempts,guess[i]);
        }
    }
}
int main(){
    char password[50];
    printf("enter password to brute force:");
    scanf("%s", password);

    if(strlen(password)==0){
        printf("password is empty");
        return 1;
    }
    int password_length = strlen(password);
    bruteforce(password, password_length);
    return 0;

}