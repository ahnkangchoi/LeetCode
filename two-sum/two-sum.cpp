class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer(2);
        for(int i = 0 ; i < nums.size()-1; i++)
        {
            for(int j = i + 1; j < nums.size();j++)
            {
                if(nums.at(i) + nums.at(j) == target)
                {
                    answer.at(0) = i;
                    answer.at(1) = j;
                }
            }
        }
        return answer;
    }
};