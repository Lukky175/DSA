class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, maxlen = 0, maxfreq = 0;
        unordered_map<char, int> mpp;
        while(r<s.size()){
            mpp[s[r]]++;
            maxfreq = max(maxfreq, mpp[s[r]]);
            int windowlen = r - l + 1;
            if(windowlen - maxfreq > k){
                mpp[s[l]]--;
                l++;
            }
            windowlen = r - l + 1;
            maxlen = max(maxlen, windowlen);
            r++;
        }
        return maxlen;
    }
};

// Using map is not optimal instead using a fixed size array can furthur reduce time/space compleity
TC -> O(n)
