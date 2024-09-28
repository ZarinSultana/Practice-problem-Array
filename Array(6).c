#include <stdio.h>

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 4, 5, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 2;
    int count = 0;


    for (int i = 0; i < n; i++)

    {
        if (arr[i] == X)

         {
            count++;
         }
    }

    printf("Number of occurrences of %d: %d\n", X, count);

    return 0;
}
