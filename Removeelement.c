int removeElement(int* nums, int numsSize, int val) {
     int i = 0;
    int n = numsSize; // 'n' tracks the end of our valid array
    
    while (i < n) {
        if (nums[i] == val) {
            
            // 1. Overwrite the target with the very last element
            nums[i] = nums[n - 1];
            
            // 2. Shrink the size of the array by 1
            n--;
            
            // Notice we do NOT do i++ here. 
            // We need to re-evaluate this new number we just swapped in!
            
        } else {
            // The number is good, we can safely move forward
            i++;
        }
    }
    
    // 'n' is now the perfectly updated size of our array
    return n;
    
}
