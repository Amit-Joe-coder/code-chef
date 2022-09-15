/*It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to DD.

Given that the skills of the teams competing in the final are XX and YY respectively, determine whether Chef will find the game interesting or not.*/

#include <stdio.h>
int main()
{
    int t, x, y, d, diff;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d %d %d", &x, &y, &d);
        diff = (x > y) ? (x - y) : (y - x);
        {
            if (diff <= d)
            {
                printf("Yes");
            }
            else
                printf("No");
        }
    }
    t--;
}