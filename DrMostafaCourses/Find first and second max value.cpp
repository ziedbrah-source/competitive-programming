#include <iostream>
    #include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	int maxOne;
	int maxTwo;
	bool test=false;
	vector <int> input;
	int n;
	int in;
	cin >> n;
	int i=1;
	for(int i=0;i<n;i++){
		cin >> in;
		input.push_back(in);
	}
    
    sort(input.begin(),input.end(),greater<int>());
    maxOne=input[0];
	
	while(i<n){
		if(input[i]==input[i-1]){
			i++;
		}else {
			maxTwo=input[i];
			break;
		}
	}
	
	
	cout << "MaxOne = " << maxOne << " max Two = " << maxTwo << " ";



    return 0;
}


