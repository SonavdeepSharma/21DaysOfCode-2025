#include <stdio.h>

int kFrequencySum(int nums[], int n, int k)
{
    int freq[100] = {0};  
    int i, sum = 0;

    
    for (i = 0; i < n; i++)
      {
        freq[nums[i]]++;
    }

    
    for (i = 0; i < 100; i++) 
    {
        if (freq[i] == k)
        {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int nums[] = {1, 8, 8, 8, 5, 6, 2};
    int k = 3;
    int n = 7;

    int result = kFrequencySum(nums, n, k);
    printf("Output: %d\n", result); 
    return 0;
}
