/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution{
public:
    vector<int> twoSum1(vector<int>& nums, int target);
    vector<int> twoSum2(vector<int>& nums, int target);
};

vector<int> Solution::twoSum1(vector<int>& nums, int target){
    int i,j;
    for(i = 0;i < nums.size();i++ )
    {
        for(j =0;j < nums.size();j++)
        {
            if (nums[i] + nums[j] == target)
            { 
                return {i,j};
            };
        };
    };
    return {};
};

vector<int> Solution::twoSum2(vector<int>& nums,int target){
        map<int,int> a;//提供一对一的hash
        vector<int> b(2,-1);//用来承载结果，初始化一个大小为2，值为-1的容器b
        for(int i=0;i<nums.size();i++)
        {
            if(a.count(target-nums[i])>0)
            {
                b[0]=a[target-nums[i]];
                b[1]=i;
                break;
            };
            a[nums[i]]=i;//反过来放入map中，用来获取结果下标
        }
        return b;
    };
};


int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int target = 17;
    Solution solute;
    vector<int> result =  solute.twoSum(nums,target);
    cout << result[0] << endl <<result[1] << endl;
}

// @lc code=end
