#include <stdio.h>
int main(void)
{
    int t;//for number of test case
    scanf("%d", &t);
    while (t > 0)
    {
    int n, women[1000], age[1000], count = 0;
    printf("enter the number of womens: ");
    scanf("%d", &women[n]);
    for (int j = 0; j < women[n]; j++)
    {
        printf("enter the age of women %d:", j);
        scanf("%d", &age[j]);
    }
    for (int i = 0; i < women[n]; i++)
    {
        if (age[i] >= 10 && age[i] <= 60)
        {
            count++;
        }
    }
    printf("%d\n", count);
    t--;
    }
}
