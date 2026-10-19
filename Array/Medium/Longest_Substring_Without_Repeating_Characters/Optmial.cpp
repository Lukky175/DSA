// Question '3' of Leetcode
int lengthOfLongestSubstring(string s) {
    int l = 0, r=0;
    int lmax = 0;
    unordered_map<int,int> mpp;
    while(r<s.size()){
        if(mpp.find(s[r]) != mpp.end() && mpp[s[r]] >= l){
            l = mpp[s[r]] + 1;
        }
        int len = r - l + 1;
        lmax = max(lmax, len);
        mpp[s[r]] = r;
        r++;  
    }
    return lmax;
}

// Used Sliding Window and Hashmap (Unordered map to store)
TC -> O(n)
SC -> O(min(n, |Σ|))
// 'n' is the string length.
// 'Σ' is the size of the character set.
