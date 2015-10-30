#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    int height;
    
    do
    {
        printf("Height: \n");
        height = GetInt();
        
        if (height == 0)
        {
            return 0;
        }
    }
    while (height < 1 || height > 23);
    
    
    for (int i = 1; i <= height; i++)
    {
        
        for (int k = 1; k <= height-i; k++)
        {
            printf(" ");
        }
 
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        
        printf("  ");
        
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }             
        
        printf("\n");
    }

}
