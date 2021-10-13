
#include <iostream>
 int removeElement(vector<int>& nums, int val) {
        int i=-1;// slowpointer && j the fast pointer
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=val){
                nums[++i]=nums[j];
            }
        }
        return i+1;
    }
#include <vector>
using namespace std;
    
    int main(){
	// bla bla , initiate a vector, target and test.
	return 0;
}
