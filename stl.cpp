#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

bool f(int x, int y) {
	return x > y;
}

void vectorDemo(){
	vector<int> A = {11,2,3,14};
	cout << A[1] << endl;
	
	sort(A.begin(), A.end()); // time taken by this sorting is NlogN --- so... O(NlogN)
	
	// 2,3,11,14
	// O(logN)
	
	bool present = binary_search(A.begin(), A.end(), 3); /// check whether 3 is there or not
	present = binary_search(A.begin(), A.end(), 4);
	
	A.push_back(100); // insert 100 at the end
	present = binary_search(A.begin(), A.end(), 100);
	
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	
	A.push_back(123);
	// 2,3,11,14,100,100,100,100,100,123
	
	vector<int>::iterator it = lower_bound(A.begin(),A.end(),100);  // >=
	// auto it lower_bound(A.begin(), A.end(), 100);
	// C++ is intelligent enough to identify that lower bound is perfomed on a vector a and its a vector of end -- vector iterator
	vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100); // >
	
	cout << *it << " " << *it2 << endl;
	cout << it2-it << endl;   // 5
	
	
	sort(A.begin(), A.end(), f);
	// sort(A.begin(), A.end(), greater<int>());
	vector<int>::iterator it3;
	
	for(it3 = A.begin(); it3 != A.end() ; it3++){
		cout<< *it3 <<" ";
	}
	
	cout<<endl;
	// second method 
	
	for(int x : A ){
		cout<< x << " ";
	}
	cout<< endl;
	
	// increment in the value of actual array 
	for(int &x : A){
		++x;
		cout<<x <<" ";
	}
	cout<<endl; // <=8ms elapsed
}
void setDemo(){
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(-1);
	s.insert(-10);
	
	for(int x : s)
		cout<< x << " ";
	cout<< endl;
	
	// -10,-1,1,2
	
	auto it = s.find(-1);
	if(it==s.end()){
		cout<<"Not Present \n";
	}
	else {
		cout<<*it << endl;
	}
	
	auto it2 = s.lower_bound(-1);
	auto it3 = s.lower_bound(0);
	
	cout<<*it2 << " "<<*it3<<endl;
	
	auto it4 = s.upper_bound(2);
	
	if(it4 == s.end()){
		cout<<"Oops! Sorry cant find something like that";
	}
	else {
		cout<<"Present";
	}
	
}

void mapDemo(){
	map<int , int> A;
	A[1] = 100;
	A[2] = -1;
	A[3] = 200;
	A[46546] = 1; 
	
	map<char , int> cnt;
	string x = "Sachin sangid";
	
	
	for (char c : x){
		cnt[c]++;
	}
	cout<< cnt['a'] << " " << cnt['s'] << endl;
	
	/// we can also find/delete a key in map or not in just log(N) time -- A.find(key)  A.erase(key) 
}
void PowerOfStl(){
	
//	add[2,3];
//	add[10,20];
//	add[30,400];
/*	add[399,450]; */
//	add[401,450];
	
	// pair of int , char  ---- {1,'s'} , {656, 'a'} 
	set< pair<int,int> > S;
	
	S.insert({401,450});
	S.insert({2,3});
	S.insert({10,20});
	S.insert({30,400});
	
	// 2,3
	// 10,20
	// 30,400
	// 401,450
	
	/// pair {a,b} is smaller than pair {c,d} if (a < c ) or ( a==c and b < d )
	
	int point = 11;
	auto it = S.upper_bound({point, INT_MAX });
	
	if(it == S.begin()){
		cout<<"The given point is not lying in any intervallll";
		return;
	}
	
	it--;
	pair<int,int> current = *it;
	
	if(current.first <= point && point <= current.second){
		cout<<"yes its present : "<<current.first << " " << current.second << endl;
	}
	else {
		cout<< " The given point is not lying in any interval...\n";
	}	
}
int main(){
	
	PowerOfStl();
	return 0;
}
