#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check if user inputs specifies length of cipher key when running program (ie argument should be at least 2)
    // also enforce that user only specifies length of cipher and nothing more (ie argument should be at most 2)
    if (argc != 2)
    {
        printf("Run the program with encryption key");
        return 1;
    }
    
    // printf("Enter text to encrypt: \n");
    string text = GetString();
    
    // loop through cipher and check that character is either in range of uppercase or lowercase letters.
    for (int i = 0, l = strlen(text); i < l; i++)
    {
        if ((text[i] >= 65 && text[i] <=90 ) || (text[i] >= 97 && text[i] <= 122))
        {
            // printf("%c", ((text[i] + atoi(argv[1])) % 26)); // print character shifted by argv[1] (length of key) spaces.
            //printf("%c", text[i] +atoi(argv[1]) %26);
            
            if (text[i] <= 90)
            {
                printf("%c", (text[i] + atoi(argv[1]) > 90) ?(text[i]+atoi(argv[1]))-26:text[i]+atoi(argv[1]));
            }
            else
            {
                printf("%c", (text[i] + atoi(argv[1]) > 122) ?(text[i]+atoi(argv[1]))-26:text[i]+atoi(argv[1]));
            }
        }
        else 
        {
            printf("%c", text[i]); // print character as it is if it's not a letter
        }
    }
    
    printf("\n");
}