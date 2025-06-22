int findMax(int arr[], int n) 
{
    int max = arr[0];// max is declared but not initialize it may contain some garbage value so we initialise to zero
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
       {
            max = arr[i];
        }
    }
    return max;
}
