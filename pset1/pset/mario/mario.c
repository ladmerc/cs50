#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    int height;
    do
    {
        printf("Height: ");
        height = GetInt();
        
        if (height == 0)
        {
            return 0;
        }
    }
    while (height < 1 || height > 23);
    
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height-1-i  ; j++)
        {
            printf("%s", " ");
        }
        for (int k = 0; k < i+2; k++)
        {
            printf("#"); 
        }
        
        printf("\n");
    }
    
    return 0;
}
