#include <stdio.h>

int main()
{
    int i,j,n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int N = sizeof(arr)/sizeof(arr[0]);


    printf("Duplicate elements in the array:\n");

    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}
