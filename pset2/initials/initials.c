#include <stdio.h>
#include <cs50.h>

int main()
{
    puts("Please type your full name: ");
    string personName = GetString();
    string initials[7];
    int initialCount = 0;
    
    if (personName[0] >= 97 && personName[0] < 97 + 26)
    { 
        // if the first character from input is lowercase, uppercase it and assign as first initial
        initials[0] = personName[0] - 32;
        initialCount += 1;
    }
    
    for (i = 1, l = strlen(personName); i < l ; i++) 
    {
        if (personName[i] == 32)
        {
            inital[initialCount] = personName[i+1];
        }
    }
    
    printf("initial is %s \n", initials);

    return 0;
}
