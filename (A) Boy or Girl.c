#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int count = 0;
    gets(s);
    int l = strlen(s);
    strlwr(s);
    for (int i = 0; i < l - 1; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (s[i] == s[j])
            {
                count++;
                break;
            }
        }
        continue;
    }
    if ((l - count) % 2 == 0)
        puts("CHAT WITH HER!");
    if ((l - count) % 2 != 0)
        puts("IGNORE HIM!");
    return 0;
}
