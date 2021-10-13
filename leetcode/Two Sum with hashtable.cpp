#include <iostream>

using namespace std; 
#include <vector>
#include <unordered_map>
using namespace std;
	 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> u;
        vector<int> mult;
        for(int i=0;i<nums.size();i++){
            int numTofind=target-nums[i];
            if(u.find(numTofind)!=u.end()){
                mult.push_back(u[numTofind]);
                mult.push_back(i);
                return mult;
            }else {
                u[nums[i]]=i;
            }
        }
        return mult;
    }
int main(){
	// bla bla , initiate a vector, target and test.
	return 0;
}
