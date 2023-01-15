#include <stdio.h>
#include <math.h>

int main(void)
{

    int t;

    scanf("%d", &t);
    int b[4], i;
    for (i = 0; i < t; i++)
    {

        scanf("%d%d%d%d", &b[0], &b[1], &b[2], &b[3]);

        if ((sqrt((b[0] - 0) * (b[0] - 0) + (b[1] - 0) * (b[1] - 0))) > (sqrt((b[2] - 0) * (b[2] - 0) + (b[3] - 0) * (b[3] - 0))))
        {
            printf("ALEX\n");
        }
        else if ((sqrt((b[0] - 0) * (b[0] - 0) + (b[1] - 0) * (b[1] - 0))) < (sqrt((b[2] - 0) * (b[2] - 0) + (b[3] - 0) * (b[3] - 0))))
        {
            printf("BOB\n");
        }

        else

        {
            printf("EQUAL\n");
        }
    }

    // your code goes here
    return 0;
}