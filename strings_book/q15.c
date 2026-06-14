//first enter the string and then allocate memory required for that string.this allocated memory is pointed by an element of array of pointers.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *arrp[10];
    char str[100];

    for(int i = 0; i < 10; i++)
    {
        printf("Enter string %d: ", i + 1);

        fgets(str, sizeof(str), stdin);
        
        arrp[i] = (char *)malloc(strlen(str) + 1);

        if(arrp[i] == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        strcpy(arrp[i], str);
    }

    printf("\nStored Strings:\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%s\n", arrp[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        free(arrp[i]);
    }

    return 0;
}

