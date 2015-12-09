#include <stdio.h>
#include <string.h>

void caesar (int key, char message[]);

void caesar (int key, char message[])
{
    char c;
    int len = (int) strlen (message);

    for (int i = 0; i < len; i++)
    {
        c = message[i];
        if (c >= 'A' && c <= 'Z')
        {
            c = 'A' + (c - 'A' + key) % 26;
        }
        else if (c >= 'a' && c <= 'z')
        {
            c = 'a' + (c - 'a' + key) % 26;
        }
        printf ("%c", c);
    }
    printf ("\n");
}
