#include <stdio.h>

int sumOfEven(int nums[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        if (nums[i] % 2 == 0)
        {
            sum = sum + nums[i];
        }
    }
    return sum;
}

int main() 
{
    int nums[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Output: %d\n", sumOfEven(nums, n));  // Output: 6
    return 0;
}
