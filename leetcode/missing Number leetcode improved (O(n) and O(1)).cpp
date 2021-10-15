    int missingNumber(vector<int>& nums) {
        int the_normal_sum=(nums.size()*(nums.size()+1))/2;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int missing_number=the_normal_sum-sum;
        return missing_number;
    }
