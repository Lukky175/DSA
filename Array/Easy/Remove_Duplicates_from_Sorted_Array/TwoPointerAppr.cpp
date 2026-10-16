int removeDuplicates(vector<int>& nums) {
    int j = 0;
    for(int i=1;i<nums.size();i++){
        if(nums[j] != nums[i]){
            j++;
            nums[j] = nums[i];
        }
    }
    return j+1;
}

Used Two Pointer Approach
TC => O(n)
SC => O(1)
