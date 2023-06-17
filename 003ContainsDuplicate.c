/******************************************************************************

3. Contains Duplicate

    Given an integer array nums, return true if any value appears at 
    least twice in the array, and return false if every element is distinct.
    
    Input: nums = [1, 2, 3, 1]
    Output: true

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int nums[4] = {1, 2, 3, 1};
    bool duplicate = false; 
    
    /*
     * Nested for loop to compare the current 
     * element with the next.
     */
    for(int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){ 
        for(int j = i+1; j < sizeof(nums)/sizeof(nums[0]); j++){
            if(nums[i] == nums[j]){
                duplicate = true;
            }
        }
    }
    
    if(duplicate){
        printf("Output: true");
    }else{
        printf("Output: false");
    }
    
    return 0;
}
