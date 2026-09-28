// Two Pointer (Greedy Approach) 
//(This is only work for ("YES/NO" Questions) like, if we dont need to preserve index, bcz here we will do sorting)

string twoSum(vector<int> nums, int target){
  int n = nums.size();
  int left = 0;
  int right = n-1;
  sort(nums.begin(), nums.end());
  while(left<right){
    int sum = nums[left] + nums[right];
    if(sum == target){
      return "YES";
    }
    else if(sum<target){
      left++;
    }
    else{ 
      right--;
    }
  }
  return "NO";
}
