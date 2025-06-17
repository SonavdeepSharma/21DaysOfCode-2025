#include <stdio.h>
int sumEven(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++) 
{
        if(arr[i] % 2 == 0) 
{
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sumEven(arr, n);
    printf("Sum of even numbers: %d\n", result);

    return 0;
}
