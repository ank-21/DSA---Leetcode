/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

*/
//my solution -- Moore voting algorithm  --- o(n) t.c and o(1) sc

//similarly for n/3 times -- take 2 variables
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, maj_element;
        for(int i=0;i<nums.size();i++){
            if(count == 0){
                maj_element = nums[i];
            }
            
            if(maj_element == nums[i])
                count++;
            else
                count--;
        }
        return maj_element;
    }
};