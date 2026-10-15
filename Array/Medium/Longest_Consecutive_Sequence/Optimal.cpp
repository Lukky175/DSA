int longestConsecutive(vector<int>& nums) {
  if(nums.size() == 0) return 0;
  int longest = 1;
  unordered_set<int> st;
  
  for(int i = 0; i<nums.size();i++){
    st.insert(nums[i]);
  }
  for(auto it : st){
    if( st.find(it-1) == st.end()){
      int cnt = 1;
      int x = it;
      while(st.find(it+1) != st.end()){
        cnt++;
        x++;
      }
      longest = max(longest, cnt);
    }
  }
  return longest;
}


// Time Complexity: O(n) average
// Space Complexity: O(n)

  
// 1. Insert elements into the set: O(n)
// 2. Iterate through the set: O(n)
// 3. All while loop iterations combined: O(n)
  
// So the total is: O(n) + O(n) + O(n) = O(3n).
