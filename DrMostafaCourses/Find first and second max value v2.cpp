#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	int maxOne;
	int maxTwo;
	vector <int> input;
	int n;
	int in;
	cin >> n;
	// let's assume that there is no redondance.
	for(int i=0;i<n;i++){
		cin >> in;
		input.push_back(in);
	}
	if(input.size()>2){
		if(input[0]>input[1]){
			maxOne=input[0];
			maxTwo=input[1];
		}else {
			maxOne=input[1];
			maxTwo=input[0];
		}
		for(int i=2;i<input.size();i++){
			if(input[i]>maxOne){
				maxTwo=maxOne;
				maxOne=input[i];
			}else if (input[i]>maxTwo){
				maxTwo=input[i];
			}
		}
	}
	
	
	cout << "MaxOne = " << maxOne << " max Two = " << maxTwo << " ";



    return 0;
}


