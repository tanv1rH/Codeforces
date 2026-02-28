#include <stdio.h>
int main()
{
    int n, x = 0;
    char c[4];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &c);
        for (int j = 0; j < 3; j++)
        {
            if (c[j] == '+')
            {
                x++;
                break;
            }
            else if (c[j] == '-')
            {
                x--;
                break;
            }
        }
    }
    printf("%d", x);
    return 0;
}