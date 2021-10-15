    int missingNumber(vector<int>& nums) {
        unordered_map <int,int> u;
        for(int i=0;i<nums.size();i++){
            u[nums[i]]++;
        }
        
        for(int i=0;i<=nums.size();i++){
            if(!u.count(i)){
                return i;
            }
        }
        return -1;
    }
