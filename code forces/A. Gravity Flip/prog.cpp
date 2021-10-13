#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {    
  int number;
  cin >> number;
  int array[number];
  for(int i=0;i<number;i++){
  	cin >> array[i];
  }
  sort(array,array+number);
    for(int i=0;i<number;i++){
  	cout << array[i] << " ";
  }
   
   
	



    return 0;
}


