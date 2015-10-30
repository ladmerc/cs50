#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int validate_argument(int argc, string argv[]);
void caesar_encrypt(string text, int key);

int main(int argc, string argv[])
{
    
    if (validate_argument(argc, argv) == 1)
    {
        return 1;
    }

    int key = atoi(argv[1]); // convert argument to integer
    string text = GetString();
    
    caesar_encrypt(text, key);
    
    printf("\n");
    
    return 0;
}


int validate_argument(int argc, string argv[])
{
    // check if user inputs  encryption key when running program (ie argument should be at least 2)
    // also enforce that user only specifies encryption key and nothing more (ie argument should be at most 2)
    if (argc != 2)
    {
        // tailor error message to number of arguments entered
        if (argc < 2)
        {
            puts("caesar requires one integer argument, k, for the key"); 
        }
        else
        {
            puts("Too many arguments entered. caesar requires only one integer argument, k, for the key");
        }
        printf("Run the program again with encryption key \n");
        
        return 1;
    }
    
    return 0;
    
}

void caesar_encrypt(string text, int key)
{
    // loop through text to be ciphered checking for alphabets
    for (int i = 0, l = strlen(text); i < l; i++)
    {
        if (isalpha(text[i]))
        {
            // if character is lowercase alphabet, shift if by 'key' times
            if (islower(text[i]))
            {
                // 'move' the character 97 (ASCII 'a') steps back in ASCII (to mimic index starting at 0)
                printf("%c", (((text[i] - 'a') + key) % 26) + 'a');
            }
            else
            {
                // 'move' the character 65 (ASCII 'A') steps back in ASCII (to mimic index starting at 0)
                printf("%c", (((text[i] - 'A') + key) % 26) + 'A');
            }
        }
        else
        {
            printf("%c", text[i]); // if character is not alphabet, print it unencrypted
        }
    }
}