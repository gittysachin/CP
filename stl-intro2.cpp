// useful array algorithms in C++ algorithm 
// all_of, none_of, any_of, copy_n and iota


// all_of, none_of   --- saves times by going through every element of array
int a[5] = {1,6,2,-4,3};
any_of(a, a+5, [](int x) { return x<0; }) ? cout<<"There exists a negative number" : cout<<"All are positive number";
all_of(a, a+5, [](int x) { return x>0; }) ? cout<<"All are positive numbers" : cout<<"All are not positive numbers";
none_of(a, a+5, [](int x) { return x<0; }) ? cout<<"No negative number" : cout<<"There are negative numbers";

int a1[5] = {};

copy_n(a, 5 /*size of array*/, a1); // copying array a into a1

// iota is used to assign continuous values to array like here we are going to assign 20 
int a[6] = {11,12};
iota(a, a+6, 20);
for(int i=0; i<6; i++){ cout<<a[i]<<" "; }

