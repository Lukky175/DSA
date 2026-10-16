int subarraySum(vector<int>& nums, int k) {
    map<int, int> mpp;
    mpp[0] = 1;
    int Presum = 0;
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        Presum += nums[i];
        int remove = Presum - k;
        cnt += mpp[remove];
        mpp[Presum] += 1;
    }
    return cnt;
}

// TC => O(n x log(n))
// SC => O(n)
