class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int left = 0;
        int right = numbers.size()-1;

        while(left<right){
            int cal = numbers[left]+numbers[right];
            if(cal==target){
                res.push_back(left+1);
                res.push_back(right+1);
                break;
            }else if(cal<target){
                left++;
            }else if(cal>target){
                right--;
            }
        }
        return res;
    }
};
