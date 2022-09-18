class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(!s.length()) return 0;
        unordered_set<int> h;
        int res=0;
        int l=0;
        for(int i=0;i<s.length();i++)
        {
            int t=s[i]-'a';
            if(h.count(t)) 
                while(h.count(t)) 
                    h.erase(s[l++]-'a');
            h.insert(t);
            int len=h.size();
            res=max(res,len);
        }
        return res;
    }
};
//滑动窗口写法