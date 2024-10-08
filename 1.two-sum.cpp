/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
      if (mp.count(target - nums[i])) {
        return vector<int>{i, mp[target - nums[i]]};
      }
      mp[nums[i]] = i;
    }

    return vector<int>({-1, -1});
  }
};
// @lc code=end

/**
Notes:
target will always be >= nums[i]. you can't find nums[i] - target ever.
 */