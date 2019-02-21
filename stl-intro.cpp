/// stl has four components - 

algorithms
containers
iterators
functions

// algorithms --

searching
sorting
important
array algo
partition operation

numeric ---- valarray classes

sort(startaddresss, endaddress);
binary_search(startaddress, endaddress, valuetofind)

// non-manupalating algogrithms

sort(firstiterator, lastiterator) -- to sort vector

arr[] = {1,12454,5,5,0}
n = sizeof(arr)/sizeof(a[0])
vector<int> vect(arr, arr+n)

sort(vect.begin(), vect.end())
reverse(vect.begin(),vect.end())
*max_element(vect.begin(),vect.end())
*min_element(vect.begin(),vect.end())

int sum = accumulate(vect.start(),vect.end(),0)   
// here 0 is the initial value of sum
// summation of vector -- accumulate synthesizes the return type from the third parameter
//  if we want to return the float type then we have to write 0.0f instead of 0


count(first iterator, last iterator, x) -- to count occurance of x in vector
count(vect.begin(),vect.end(),20)
vector<int>::iterator it;
it = find(vect.begin(),vect.end(),30)

if(it != find.end()) cout<<"found"<<*it
else cout<<"Not found "<<*it

find(vect.begin(),vect.end(), 30) !=vect.end() ? cout<<"found" : cout<<"Not found"

// lower_bound(first_iterator, last_iterator, x)
// return an iterator pointing to the first element in the range [first, last) which has a value not less than x

// upper_bound(first_iterator, last_iterator, x)
// return an iterator pointing to the first element in the range [first, last) which has a value greater than x

auto p= lower_bound(vect.begin(),vect.end(),30)
cout<<"position of lower bound "<<p-vect.begin()
auto q = upper_bound
cout<<"upper bound is at position "<<q-vect.begin()


// some manipulating algorithms

vect.erase(position to be deleted)
vect.erase(unique(vect.begin(), vect.end(), vect.end()))  -- deletes the duplicate occurance
for(int i= 0; i<vect.size(); i++){
	cout<<vect[i]<<" ";
}

next_permutation(vect.begin(), vect.end())  --  then print vect
prev_permutation(vect.begin(), vect.end())  --  then print vect

distance(first_iterator, desired_position) --- it returns the distance of desired position from first iterator

distance(vect.begin(), max_element(vect.begin(), vect.end()))
