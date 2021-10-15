 int subarraySum(vector<int>& nums, int k) {
        int res=0;
        vector <int> u;
        int sum;
        u.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            u.push_back(u[i-1]+nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            {
                
                for(int j=i;j<nums.size();++j){
                    if((i-1)>=0){
                        sum=u[j]-u[i-1];
                    }else {
                        sum=u[j];
                    }
                    if(sum==k){
                        res++;
                    }
                }
            }
        }
        return res;
    }
