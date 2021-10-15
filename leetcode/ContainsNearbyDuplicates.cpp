bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int,int> u;
        for(int i=0;i<nums.size();i++){
            if(u.count(nums[i])){
                if(abs(u[nums[i]]-i)<=k){
                    return true;
                }
                
            }
            u[nums[i]]=i;
        }
        return false;
    }
