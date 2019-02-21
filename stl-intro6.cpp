//////  deque   --- double ended queues

deque <int> dq;   ----- -all those functions


//////  array class  -- array classes knows its own size, array classes don't decay into pointers 

operations on array ---- at(), get(), operator[]


array<int,6> ar = {1,2,3,4,5,6};

ar.at(4);
ar[5];
get<0>(ar)   ,,,,  get<1>(ar)
ar.front(), ar.back(), ar.size(), ar.max_size(), ar2.swap(ar1), ar.empty(),    ar.fill(11);


//////  forward_list   --- It differs from list by the fact that forward list keeps track of location of only next element while list keeps track to both next and previous elements, thus increasing the storage space required to store each element. 

// operations on forwars_list --- assign(), push_front(), emplace_front(), pop_front(), insert_after(), emplace_after(), erase_after()
// remove(), remove_if(), splice_after()

lis.remove(40);   /// removes all the occurances of 40

lis.remove_if([](int x){ return x>20; });  // removes elements greater than 20

lis2.splice_after(lis2.begin(),lis1);  //  Shifting elements from first to second forward list after 1st position

 
