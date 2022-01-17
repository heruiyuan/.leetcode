/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

// @lc code=start
// 第一种解法：暴力枚举
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (size_t i = 0; i < nums.size(); i++)
        {
            for (size_t h = i+1; h < nums.size(); h++)
            {
                if (nums[i] + nums[h] == target){
                    vector<int> result;
                    result.push_back(i);
                    result.push_back(h);
                    return result;
                }
            }
            
        }
        vector<int> a;
        return a;
    }
};
// 第二种解法：HashMap
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for (int i = 0; i < nums.size(); i++)
//         {   
//             unordered_map<int, int> hashTable;
//             auto it = hashTable.find(target - nums[i]);
//             if (it != hashTable.end()){
//                 return {it->second, i};
//             }
//             hashTable[nums[i]] = i;
//         }
//         vector<int> a;
//         return a;
//     }
// };
// @lc code=end

