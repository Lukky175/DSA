double findMaxAverage(vector<int>& nums, int k) {
    int sum=0;
    for(int i=0;i<k;i++){
        sum += nums[i]; 
    }
    int maxsum = sum;

    int l = 0;
    int r = k;
    while(r<nums.size()){
        sum -= nums[l];
        sum += nums[r];
        l++;
        r++;
        maxsum = max(maxsum, sum);
    }
    return (double) maxsum/k;
}


// Used Sliding Window

// TC => O(n)
// SC => O(1)
