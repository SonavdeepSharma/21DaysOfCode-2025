#include <stdio.h>

int secondLargest(int nums[], int n)
{
    int freq[1000] = {0};
    int i;

    for (i = 0; i < n; i++)
      {
        freq[nums[i]]++;
    }

    int first = -1, second = -1;

    for (i = 999; i >= 0; i--) 
    {
        if (freq[i] == 1)
        {
            if (first == -1) 
            {
                first = i;
            } else {
                second = i;
                break;
            }
        }
    }

    return second;
}

int main() {
    int nums[] = {10, 20, 30, 40};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = secondLargest(nums, n);

    if (result != -1)
        printf("Second largest unique element: %d\n", result);
    else
        printf("No second largest unique element found.\n");

    return 0;
}
