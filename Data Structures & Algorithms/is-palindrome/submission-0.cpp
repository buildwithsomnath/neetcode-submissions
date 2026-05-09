class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(unsigned char c:s){
            if(isalnum(c)){
                res+=tolower(c);
            }
        }
        int left = 0;
        int right = res.size()-1;
        while(left<right){
            if(res[left]==res[right]){
                left++;
                right--;
            }else{
                return false;
            }
        }
        cout<<res;
        return true;
    }
};
