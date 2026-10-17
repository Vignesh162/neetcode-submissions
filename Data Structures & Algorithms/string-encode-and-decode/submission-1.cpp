class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = ""; int n = strs.size();
        for( int i = 0; i < n; ++i){
            int num = strs[i].size();
            ans+=(char)num;
            ans+=strs[i];
        }
        return ans;

    }

    vector<string> decode(string s) {
        int n = s.size(), i = 0;
        vector<string>ans;
        while( i < n){
            int num = (unsigned char)s[i];
            string str = "";
            if( num > 0)str = s.substr(i+1,num);
            ans.push_back(str);
            i += num+1;
        }
        return ans;
    }
};
