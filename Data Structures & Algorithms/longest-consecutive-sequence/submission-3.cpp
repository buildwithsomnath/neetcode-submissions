class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1) return 0;  
        sort(nums.begin(),nums.end());
        int seq=0;
        int count = 0;
        for(int i=0;i<nums.size();i++){     
            if(nums[i]==nums[i+1]){
                continue;
            }else if(nums[i+1]-nums[i]==1){
                count++;
                seq=max(seq,count);
            }else{
                count=0;
            }
        }
        for(int c:nums){
            cout<<c;
        }
        return seq+1;
    }
};
