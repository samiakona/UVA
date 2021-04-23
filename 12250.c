#include <stdio.h>
#include <string.h>
int main()
{
    int i = 1;
    char k[20];

    while (scanf("%s", k) && k[0] != '#')
    {

        if (strcmp(k, "HELLO") == 0)
        {
            printf("Case %d: ENGLISH\n", i);
        }

        else if (strcmp(k, "HOLA") == 0)
        {
            printf("Case %d: SPANISH\n", i);
        }

        else if (strcmp(k, "HALLO") == 0)
        {
            printf("Case %d: GERMAN\n", i);
        }

        else if (strcmp(k, "BONJOUR") == 0)
        {
            printf("Case %d: FRENCH\n", i);
        }

        else if (strcmp(k, "CIAO") == 0)
        {
            printf("Case %d: ITALIAN\n", i);
        }
        else if (strcmp(k, "ZDRAVSTVUJTE") == 0)
        {
            printf("Case %d: RUSSIAN\n", i);
        }

        else
        {
            printf("Case %d: UNKNOWN\n", i);
        }

        i++;
    }

    return 0;
}
