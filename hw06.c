#include <stdio.h>

void caesar (int key, char message[]);

int main (void)
{
    char crypto[] = "Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyevn rkfo cksn pkcdob rybcoc.";

    for (int i = 1; i <=26; i++)
    {
         caesar (i, crypto);
    }

    return 0;
}
