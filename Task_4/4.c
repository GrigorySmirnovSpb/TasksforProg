#include <stdio.h>

int main()
{
    int arr[28] = {0};
    int counttickets = 0;
    for (int i = 0; i < 1000; i++)
    {
        int sum = 0;
        int x = i;
        while (x > 0)
        {
            sum += (x % 10);
            x = x / 10;
        }
        arr[sum]++;
    }
    for (int i = 0; i < 28; i++)
    {
        counttickets += arr[i] * arr[i];
    }
    printf("Count of lucky tickets: %d\n", counttickets);
    return 0;
}