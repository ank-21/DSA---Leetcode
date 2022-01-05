/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/

// My Sol
//if numbers are negative then add the mod of highest neg number. and then do counting sort
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])!=st.end()){
                return true;
            }else{
                st.insert(nums[i]);
            }
        }
        return false;
    }
};
