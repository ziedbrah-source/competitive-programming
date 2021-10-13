#include <iostream>
#include <string>
#include <vector>
#include <iostream>  
#include <bits/stdc++.h>
#include <sstream>
using namespace std; 

int main(){
	string my_str;
	
	cin >> my_str;
	int num1=0;
	int num2=0;
	int num3=0;
	int num;
	stringstream ss;
	
	
	   for(int i = 0; i<my_str.length(); i++) {
	   	  
  		ss << my_str;  
  		ss >> num; 
      cout << num;
   }

	return 0;
}

