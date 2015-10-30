#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(int argc, string argv[])
{
    float change;

    do
    {
        printf("How much is owed: \n");
        change = GetFloat();
        
        if (change == 0.00)
        {
            printf("%i\n", 0);
            return 0;
        }
    }
    while (change < 0.00);
    
    int steps = 0;
    
    int change_in_cent = (int) round(change *= 100);
    
    while(change_in_cent > 0.00)
    {
        if (change_in_cent >= 25)
        {
            change_in_cent -= 25;
            steps++;
        }
        else if (change_in_cent >= 10)
        {
            change_in_cent -= 10;
            steps++;
        }
        else if (change_in_cent >= 5)
        {
            change_in_cent -=5;
            steps++;
        }
        else if (change_in_cent >=1 )
        {
            change_in_cent--;
            steps++;
        }
    }
    
    printf("%i\n", steps);
    

}
