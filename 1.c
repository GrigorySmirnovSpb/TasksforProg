#include <stdio.h>
#include <inttypes.h>

int countnul(int32_t a[1000], int countEl)
{
    int countnuls = 0;
    for (int i = 0; i < countEl; i++)
    {
        if (a[i] == 0)
        {
            countnuls++;
        }
    }
    return countnuls;
}
int main()
{
    int32_t arr[1000] = {0};
    printf("Enter the number of array elements no more than 1000\n");
    int n = 0;
    scanf("%d", &n);
    if (n > 1000 || n < 1)
    {
        printf("Error\n");
    }
    else
    {
        printf("Enter the elements\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Count of nulls: %d\n", countnul(arr, n));
    }
    return 0;
}