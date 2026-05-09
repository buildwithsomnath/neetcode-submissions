class Solution {
public:

    string encode(vector<string>& strs) {
        string m;
        for(string s:strs){
            for(char c:s){
                m+=(c+3);
            }
            m.append(" ");
        }
        return m;
    }

    vector<string> decode(string s) {
        vector<string> S;
        string m;
        for(char c: s){
            if(c==' '){
                S.push_back(m);
                m.erase();
                continue;
            }
            m +=(c-3);
        }
        for(string s:S){
            cout<<s;
        }
        return S;
    }
};
