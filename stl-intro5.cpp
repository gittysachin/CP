// list

list<int> li,li1;

void showlist(list<int> g){
	list<int>::iterator it;
	for(it=g.begin(); it!=g.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}
for(int i=0;i<10;i++){
	li.push_back(i*2);
	li1.push_front(i*3);
}

showlist(li);
showlist(li1);

cout<<li.front()<<endl;
cout<<li1.back()<<endl;

li.pop_front();
li1.pop_back();

li.reverse();
showlist(li);

li1.sort();
showlist(li1);

// every function that is used with vector is used with lists too.

/// transfer allt he elements of the list

list<int> li1 = {1,2,3,4};
list<int> li2 = {5,6};
list<int> li3 = {7,8,9};

li1.splice(li1.begin(),li2);   // transfer all the elements of li2 at the beginning of li1
cout<<"list li1 after splice operation : ";
for(auto x : li1) cout<<x<<" ";
cout<<<endl;

li3.splice(li1.end(), li3);    // transfer all the elements of li3 at the end of li1
cout<<"list li1 after splice operation : ";
for(auto x : li1) cout<<*it<<" ";
cout<<endl;

/// Tranfer a single element

li1.splice(li1.end(), li2, li2.begin());    /// transfer 5 at the end of li1

auto it = li.begin();
advance(it, 1);   /// advance the iterator by 2 positions

li2.splice(li2.begin(), li2, it, li1.end());   //// transfer 2,3,4 at the beginning of li2

/////////////////////

list<pair<int,char>> lis;
auto it = lis.emplace(lis.begin(), 4, 'a');
lis.emplace(it, 3, 'b');

for(auto it : lis) cout<< "( " <<it.first <<", "<<it.second<<") ";

/// List ----- > (3, b) (4, a)


///////////////////////// ------- merge

bool comparator(int first, int second) {
	return first < second;
}
int main(){
	list <int> list1= {1,70,80};
	list <int> list2= {2,3,4};
	
	list1.merge(list2, comparator);
	cout<<"List : ";
	for(auto it : list1) cout<<*it<<" ";
	cout<<endl;
}

////   output -----  List: 1 2 3 4 70 80
