class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
          int a = nums[i];
          if(st.find(a) != st.end()){
            return true;
          }
          st.insert(a);
        }
    return false;
    }
};

//Here we are sacrificing space to save time.

// TC = O(n) average
// SC = O(n)
