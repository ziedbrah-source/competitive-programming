int subarraySum(vector<int>& nums, int k) {
        // just waw, that's really smart.
        // basically we will calculate how much prefixes with (prefixsum-k) are they.
        int res=0;
        int prefix_sum=0;
        unordered_map <int,int> u;
        u[0]=1; // at first there is just one way to get the prefix=k ; kol mara chnab9aw ntestiw 3al frequency of the needed (prefix-k);
        for(int i=0;i<nums.size();i++){
            prefix_sum+=nums[i]; 
            if(u.count(prefix_sum-k)) // this is the check, to see if and how much combinations we have :D
            {
                res=res+u[prefix_sum-k];
            }
            u[prefix_sum]++;
        }
        return res;
    }
