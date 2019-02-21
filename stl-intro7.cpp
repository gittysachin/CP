///// Queue

functions supported by queue are   --

empty(), swap(), emplace(), size(), front(), back(), push(), pop()

queue<int> q;


/////// Priority_Queue  --- specifically designed such that the first element of the queue is the greatest of all elements in the queue and elements are in non decreasing order(hence we can see that each element of the queue has a priority{fixed order}).


void showpq(priority_queue <int> gq) {
	priority_queue  <int> g = gq;
	while(!g.empty()){
		cout<<"\t"<<g.top();
		g.pop();
	}
	cout<<"\n";
}
int main(){
	priority_queue <int> gquiz;
	gquiz.push(10);
	gquiz.push(30);
	gquiz.push(20);
	gquiz.push(5);
	gquiz.push(1);
	cout<< "The priority queue gquiz is : ";
	showpq(gquiz);
	cout<<"\n gquiz.size()"<<gquiz.size();
	cout<<"\n gquiz.top()"<<gquiz.top();
	
	cout<<"\n gquiz.pop()";
	gquiz.pop();
	showpq(gquiz);
	
	return 0;
}


////////    Stacks   ----- 

void showstack(stack<int> s){
	while(!s.empty()){
		cout<<"\t"<<s.top();
		s.pop();
	}
	cout<<endl;
}
int main(){
	stack<int> s;
	s.push(30);
	s.push(10);
	s.push(45);
	s.push(2);
	cout<<"The stack is : ";
	showstack(s);
	cout<<s.size()<< " "<<s.top();
	s.pop();
	showstack(s);
}

// swap and emplace are also the functions of stack



/////////    set  ---- it stores unique elements, the value of the element cannot be modified once it is added to the set

set<int, greater<int>> gq;

gq.insert(10);
gq.insert(30);
gq.insert(10);  // only one 10 will be added to the set
set<int, greater<int>>::iterator it;

/// assigning elements form gq to gq2

set<int> gq2(gq.begin(), gq.end());

int num = gq2.erase(30);   // remove element with value 30 in gq2
gq2.erase(gq2.begin(), gq2.find(30));  /// removal of elements less than 30
cout<< *gq.lower_bound(40) << "  "<< *gq.upper_bound(10);

//////// multiset  ----  same as set but it can store duplicate value

header file for multiset   ---- #include<set>


////////  map ---- each element has a key value and a mapped value. No two mapped values can have same key value.

map <int, int> mp;
mp.insert(pair<int,int>(1,40));
mp.insert(pair<int,int>(2,30));
mp.insert(pair<int,int>(3,60));
mp.insert(pair<int,int>(4,20));
mp.insert(pair<int,int>(5,50));

mp<int,int>::iterator it;

for(it=mp.begin(); it!=mp.end();it++){
	cout<<it->first<<" "<<it->second<<"\t";
}

map<int,int> mp2(mp.begin(),mp.end());
mp2.erase(4);  /// remove all elements with key = 4
mp2.erase(mp2.begin(),mp2.find(3));   /// remove all element up to element with key=3

cout<<"key : "<<*mp.upper_bound(20)->first<<" "<<"element : "<<*mp.upper_bound(20)->second;


///////// multimap --- same as map but with a addition is that multiple elements can have same key values.
