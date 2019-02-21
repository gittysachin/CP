/// partition operation

partition(beg, end, condition)

is_partitioned(beg, end, condition)

is_partitioned(vect.begin(), vect.end(), [](int x){ 
	return x%2==0;
}) ? cout<<"vector is partitioned" : cout<<"vector is not partitioned";

partition(vect.begin(), vect.end(), [](int x){
	return x%2==0;
});
// bool  IsOdd(int i){ return i%2==1; }
vect vector data is:                                0 1 2 3 4 5 6 7 8 9 10
The partitioned set of elements in vect vector is: 10 8 9 6 4 5 7 3 0 2 1
// partition(vect.begin(), vect.end(), IsOdd  or IsEven);
// checking if vector is partitioned or not

is_partitioned(vect.begin(), vect.end(), [](int x){
	return x%2==0;
}) ? cout<<"Now, vector is partitioned after partition operation" : cout<<"Vector is still not partitioned after par. operat";

cout<<"THe partitioned vector is: ";
for(int &x : vect) cout<< x << " ";

// In the above code, partition function partitons the vector depending on whether an element is even or odd
// even elements are partitioned from odd elements in no perticulr order

stable_partition(beg, end, condition)  --- partition in such a way that the relative order of elements is preserved (in sorted order)

partition_point(beg, end, condition)   --- returns an iterator pointing to the partition point of container (end point of partition)
/// i.e. the first element in the partition range [beg, end) for which condition is not true
/// the container should already be partitioned for this function to work

stable_partition(vect.begin(), vect.end(), [](int x){
	return x%2==0;
})
auto it = partition_point(vect.begin(), vect.end(), [](int x){
	return x%2==0;
})
for(it1 = vect.begin(); it1!=it; it1++) cout<<*it1<<" ";
cout<<endl;

partition_copy(beg,end,beg1,beg2,condition)

vactor<int> vect = {2,1,5,6,8,7};
vector<int> vect1;
vector<int> vect2;
int n = count_if (vect.begin(), vect.end(), [](int x){
	return x%2==0;
});
vect1.resize(n);
vect2.resize(vect.size() - n);

partition_copy(vect.begin(), vect.end(), vect1.begin(), vect2.begin(), [](int x){
	return x%2==0;
});  /// if condition is true then it will copy in vect1 otherwise in vect2
// print vect1, vect2
// if condition i
