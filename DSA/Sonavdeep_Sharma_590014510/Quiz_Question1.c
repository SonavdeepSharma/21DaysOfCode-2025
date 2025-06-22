int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0]; //changed in order to handle all negative arrays

    for (int i = 1; i < n; i++) // to avoid double counting as we already used nums[0]
   {
      
        if (currentSum <0) 
          currentSum= nums[i]; // Start a new subarray
       else
currentSum+=nums[i];// extend the current subarray
if(currentSum > maxSum)
maxSum = currentSum;
   }
    return maxSum;
}
