#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements in array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Reversed array:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
}
