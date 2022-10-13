// In a one dimensional array find out all the elements, which is the summation of
// its immediate previous contiguous elements and those previous elements including
// that element are either in ascending or descending order.
#include <stdio.h>
#include <stdlib.h>

void grp(int *arr, int i, int j)
{
    for (int k = i; k <= j; k++)
    {
        if (k > i) printf(", ");
        printf("%d", arr[k]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n;
    printf("size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(n));

    printf("enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    for (int i = 1; i < n; i++)
    {
        int sign = 1;
        if (arr[i - 1] < 0) sign = -1;
        
        if (sign * arr[i - 1] > sign * arr[i]) continue;

        int j = i + 1;
        int sum = arr[i - 1] + arr[i];
        sum *= sign;

        while (j < n && sign * arr[j] > sign * arr[j - 1] && sum == sign * arr[j])
        {
            sum += sign * arr[j];
            j++;
        }

        // group not found
        if (j - 1 == i) continue;

        grp(arr, i - 1, j - 1);
    }

    return 0;
}
