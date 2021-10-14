#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	unordered_map <int,int> u;
	vector <int> input;
	int n;
	int in;
	cin >> n;
	int reserve;
	for(int i=0;i<n;i++){
		cin >> in;
		input.push_back(in);
		u[in]++;
	}
	int maxOccurence=0;
	int number;
	for(int i=0;i<n;i++){
		if(u[input[i]]>maxOccurence){
			maxOccurence=u[input[i]];
			number=input[i];
		}
	}
	
	cout << "MaxOccurence is : " << number << "with " << maxOccurence << endl;
	



    return 0;
}


