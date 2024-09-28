#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements in array: \n");

    for( i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }

    int N = sizeof(arr)/sizeof(arr[0]);

    int last = arr[N-1];
    for(i=N-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=last;

    for(int i =0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;


}
