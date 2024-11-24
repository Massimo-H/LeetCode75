//238
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left = 1;
        vector<int> temp(nums.size(),1);
        for (int i=0;i<nums.size();i++){ //product of all.
            temp[i]= left*temp[i];
            left *= nums[i];
        }
        int right = 1;
        for (int i=nums.size()-1;i>=0;i--){
            temp[i] = right*temp[i];
            right *= nums[i];
        }
        return temp;
    }
};