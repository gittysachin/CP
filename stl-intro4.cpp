// containers or container classes store objects and data

vectors 

In vectors data is inserted at the end and  inserting at te end takes differential time, as sometimes there may be a need od extending a array
Removing the last element takes only constant time because no reesizing happens.
Inserting and erasing at the beginning or the middle is linear in time.

// Iterators

begin(), end(), rbegin(), rend(), cbegin(), cend(), crbegin(), crend()

rbegin() - returns the reverse iterator pointing to the last element in vector (reverse beginning). it moves from last ot first element
rend() - returns a reverse iterator pointing to the theoritical element preceding the first element in the vector (considered as reverse end)

r stands here for - reverse
c stands here for - constant
cr stands here for - constant reverse

for(auto ir = vect.crbegin(); ir != vect.crend(); i++) cout<<*ir<<" ";

// Capacity

size(), resize(), max_size(), capacity(), empty(), shrink_to_fit(), reserve()
number of elements in the vector
maximum number of eelments the vector can hold
Returns the size of the storage space currently allocated to the vector expressed as number of elements
resizes the container so that it can contain 'g' elements
whether the container is empty
reduces the capacity of the container to fit its size and destroys all elements beyond the capacity
requests that the vector capacity be at least enough to contain n elements

vector<int> g1;

for(int i = 1 ; i<=5; i++) g1.push_back(i);
cout<<"Size"<<g1.size();
cout<<g1.capacity();
cout<<g1.max_size();

g1.resize(4);
cout<<g1.size();
if(g1.empty() == true){
	cout<<"Vector is empty";
}
else {
	cout<<"Vector is not empty";
}
g1.shrink_to_fit();
cout<<"Vector elements are : ";
for(auto it = g1.begin();it!=g1.end();it++){
	cout<<*it<<" ";
}

cout<<endl;

/// Element access

cout<<"\n Reference operator [g]"<<g1[2];
cout<<"\n at"<<g1.at(4);
cout<<"\n front()"<<g1.front();
cout<<"\n back()"<<g1.back();

int* pos = g1.data();
cout<<"The first element is "<< *pos ;


/// modifiers

vector<int> v;

v.assign(5,10);   /// fill the array with 10 five times
cout<<"The elements are : ";
for(int  i=0; i<v.size();i++) cout<<v[i]<<" ";
v.push_back(15);  /// insert 15 at the last position
cout<<"The last element is : "<<v[v.size() - 1];
v.pop_back();    /// removes the last element
v.insert(v.begin() , 5);           /// inserts 5 at the beginning
v.erase(v.begin());        /// removes the first element
v.emplace(v.begin(), 5)       //// inserts at the beginning
v.emplace_back(20)      //// inserts 20 at the end

v.clear();   /// erases the vector

v1.swap(v2);    /// swaps v1 and v2

//Errors and Exceptions (swap function)
//
//1. It throws an error if the lists are not of the same type.
//2. It throws an error if the lists are not of the same size.
//2. It has a basic no exception throw guarantee otherwise.
