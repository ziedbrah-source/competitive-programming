int subarraySum(vector<int>& nums, int k) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            {
                
                for(int j=i;j<nums.size();++j){
                    int sum=0;
                    for(int idx=i;idx<=j;++idx){
                        sum+=nums[idx];
                    }
                    if(sum==k){
                        res++;
                    }
                }
            }
        }
        return res;
    }
