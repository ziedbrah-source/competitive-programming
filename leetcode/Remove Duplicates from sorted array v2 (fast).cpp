
#include <iostream>

using namespace std; 
#include <vector>
using namespace std;
    int removeDuplicates(vector<int>& nums) {
        int slow_pointer=0;
        if(nums.size()==0){
            return 0;
        }
        for(int j=1;j<nums.size();j++){
            if(nums[slow_pointer]!=nums[j]){
                nums[++slow_pointer]=nums[j];
            }
        }
        return slow_pointer+1;
    }
    
    int main(){
	// bla bla , initiate a vector, target and test.
	return 0;
}
