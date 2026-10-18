class Solution {
public:
    int maxArea(vector<int>& height) {
      int l = 0;
      int r = height.size() - 1;
      int result = 0;
      while(l<r){
        int area = (r - l) * min(height[l], height[r];
        result = max(result, area);
        if(height[l]<=height[r]){
          l++;
        }else{
          r--;
        }
      }
      return result;
    }
};

// TC = O(n)
// SC = O(1)
