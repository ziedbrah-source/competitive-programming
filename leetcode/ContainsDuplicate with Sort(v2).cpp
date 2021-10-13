#include <iostream>

using namespace std; 

#include <unordered_map>
using namespace std;
	 bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;}
int main(){
	// bla bla , initiate a vector and test.
	return 0;
}
