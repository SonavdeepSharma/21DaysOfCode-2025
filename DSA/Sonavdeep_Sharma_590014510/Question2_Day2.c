#include <stdio.h>
void printFirstAndLast(int arr[], int n) 
{
    printf("First: %d, Last: %d\n", arr[0], arr[n - 1]);
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printFirstAndLast(arr, n);

    return 0;
}

