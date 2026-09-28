class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      for(int i=1;i<nums.size();i++){
        if( nums[i] == nums[i-1]){
          return true;
        }
      }
      return false;
    }
};

//Time Complexity
// sort()       → O(n log n)
// loop         → O(n)
// Total        → O(n log n)



// Brute force: O(n²) time, O(1) extra space
// Sorting: O(n log n) time, low extra space
// HashSet: O(n) average time, O(n) space
