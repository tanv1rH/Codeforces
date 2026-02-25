#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[5][5], a, b, c;
    for (int i = 0; i <= 4; ++i)
    {
        for (int j = 0; j <= 4; ++j)
        {
            scanf("%d", &x[i][j]);
            if (x[i][j] == 1)
            {
                printf("%d", abs(i - 2) + abs(j - 2));
            }
        }
    }
    return 0;
}
