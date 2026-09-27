// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline
    name[strcspn(name, "\n")] = '\0';

    // Find the last space
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
            lastSpace = i;
    }

    
    for (i = 0; i < lastSpace; i++)
    {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' '))
        {
            printf("%c ", name[i]);
        }
    }

    
    for (i = lastSpace + 1; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}