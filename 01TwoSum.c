/******************************************************************************
1. Two Sum 

    Given an array of integer nums and an integer target, return
    indices of the two numbers such that they add up to the target.
    
    You may assume that each input would have exactly one solution,
    and you may not use the same element twice.
    
    You can return the answer in any order.
    
    Input: nums = [2, 7, 11, 15], target = 9.
    Output: [0, 1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int nums [n];
    int target = 0, value = 0;
    
    printf("Enter the array values: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &value);
        nums[i] = value;
        
    }
    
    printf("Enter the target value: ");
    scanf("%d", &target);
    int result = 0;     
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] + nums[j] == target){
                result = target;
                printf("Output: [%d, %d]", i, j);
            }
        }
    }
    if(!result){
        printf("No result\n");
    }

    return 0;
}
