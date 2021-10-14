#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	
	vector <int> input;
	int n;
	int in;
	cin >> n;
	int i=0;
	int j=n-1;
	int reserve;
	for(int i=0;i<n;i++){
		cin >> in;
		input.push_back(in);
	}
	
	while(i<j){
		reserve=input[j];
		input[j]=input[i];
		input[i]=reserve;
		i++;
		j--;
	}
	
	for(int i=0;i<n;i++){
		cout << input[i] << " ";
	}
	
	



    return 0;
}


