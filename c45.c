/*Problem
Janmansh and Jay are playing a game. They start with a number XX and they play a total of YY moves. Janmansh plays the first move of the game, after which both the players make moves alternatingly.

In one move, a player can increment or decrement XX by 11.

If the final number after performing YY moves is even, then Janmansh wins otherwise, Jay wins. Determine the winner of the game if both the players play optimally.*/
#include <stdio.h>
// void chances(int, int);
int main()
{
    int t, y, x;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d %d", &x, &y);
        // chances(x, y);
        y = y + x;
        if (y % 2 == 0)
        {
            printf("Janmansh");
        }
        else
            printf("Jay");
        t--;
    }
    return 0;
}
