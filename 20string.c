#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];

    for (int i = 0; i < 100; i++)
    {
        string[i] = 'a';
    }
    

    scanf("%s", string);
    // string[strlen(string)] = 'a';
    printf("%s\n", string);

    return 0;
}
