#include <stdio.h>

int hasDuplicate(int nums[], int n) 
{
    int freq[100] = {0};  

    for (int i = 0; i < n; i++)
      {
        if (freq[nums[i]] == 1)
        {
            return 1;
        }
        freq[nums[i]] = 1;
    }

    return 0; 
}

int main() 
{
    int nums[] = {1, 2, 3, 2};
    int n = 4;

    if (hasDuplicate(nums, n)) 
    {
        printf("true\n");
    } else
    {
        printf("false\n");
    }

    return 0;
}
