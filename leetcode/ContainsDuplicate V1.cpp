#include <iostream>

using namespace std; 

#include <unordered_map>
using namespace std;
	bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> u;
          for(int i=0;i<nums.size();i++){
              
                  if (u.find(nums[i]) == u.end()){
                      u[nums[i]]=1;
                  }else {
                      return true;
                  }
        }
        return false;
    }
int main(){
	// bla bla , initiate a vector and test.
	return 0;
}

