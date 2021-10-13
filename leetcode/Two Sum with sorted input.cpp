
#include <iostream>

using namespace std; 
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
        // the sorting makes it so good :D
        // Because it's sorted we can make decisions based on the sum and target . YOUHOU
        vector <int> numbersToReturn;
        int L=0;
        int R=numbers.size()-1;
        while(L<R){
            int sum=numbers[L]+numbers[R];
            if(sum==target){
                numbersToReturn.push_back(L+1);
                numbersToReturn.push_back(R+1);
                return numbersToReturn;
            }
            if(sum>target){
                R--;
            }else {
                L++;
            }
        }
        return numbersToReturn;
    }
    
    int main(){
	// bla bla , initiate a vector, target and test.
	return 0;
}
