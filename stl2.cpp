#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
	
	map<char , int> M;
	unordered_map<char , int> U;
	string s = "Sachin Jangid";
	for(char c : s) M[c]++;        // O(NlogN)   where N = |s|   (size of string)
	for(char c : s) U[c]++;        // O(N)
	
	return 0;
}
