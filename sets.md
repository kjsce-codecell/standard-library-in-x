<p><b>Contents : </b> <a href="#sets"> sets </a><a href="#unordered_sets"> unordered_sets</a><a href="#multiset"> multiset </a> </p>
<br>

<div id ="sets"> </div>
<h1 align="center" ><a href="http://www.cplusplus.com/reference/set/set/"> Sets </a></h1>

> Sets are containers which store only unique values and permit easy look ups.

> The values in the sets are stored in some specific order (like ascending or descending).

> Elements can only be inserted or deleted, but cannot be modified.

> We can access and traverse set elements using iterators just like vectors.

### Operations( Member functions )

| <center>Function </center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :------------- | :------------- | :------------- |
| <a href="#">begin( )</a>        | Returns an iterator to the first element of the set.       | O(1)
| <a href="#">end( ) </a>      | Returns an iterator pointing to a position which is next to the last element       | O(1)
| <a href="#">clear( )</a>     |  Deletes all the elements in the set and the set will be empty.       | O(N)
| <a href="#">count( ) </a>    | Returns 1 or 0 if the element is in the set or not respectively.       | O(logN)
| <a href="#">empty( ) </a>       |  Returns true if the set is empty and false if the set has at least one element       | O(1)
| <a href="#">erase( ) </a>      |  Deletes a particular element or a range of elements from the set.       | O(N)
| <a href="#">find( ) </a>      | Searches for a particular element and returns the iterator pointing to the element if the element is found otherwise it will return the iterator returned by end().       | O(logN)
| <a href="#">size( ) </a>      | Returns the size of the set or the number of elements in the set.       | O(1)
| <a href="#">insert( ) </a>      |  insert a new element.       | O(1)

<br>


### Implementation

```C++
// declaratation

set<int> s1;                               // Empty Set
int a[]= {1, 2, 3, 4, 5, 5};
set<int> s2 (a, a + 6);                    // s2 = {1, 2, 3, 4, 5}
set<int> s3 (s2);                          // Copy of s2
set<int> s4 (s3.begin(), s3.end());         // Set created using iterators
```
```C++
#include <iostream>
#include<cstdio>
#include <set>

using namespace std;

int main()
{
        set <int> s;
        set <int>::iterator it;         // iterator to traverse
        int A[] = {3, 5, 2, 1, 5, 4};
        for(int i = 0;i < 6;++i)
                s.insert(A[i]);
        s.erase(A[2]);                  // erases 2 form the set
        printf("size of set %d\n",(int)s.size());
        for(it = s.begin();it != s.end();++it)
                cout << *it << ' ';
        cout << endl;
        return 0;

}
```
<br>

### Problems

 * codechef
<br>
<div id = "unordered_set"></div>
<h1 align="center" id ="unordered_set"><a href="http://www.cplusplus.com/reference/unordered_set/unordered_set/"> Unordered-Sets </a></h1>

> Unordered sets are containers that store unique elements in no particular order, and which allow for fast retrieval of individual elements based on their value.

> Pros : Faster than sets (promises amortized O(1) for search) .

> Cons : Look up not guaranteed to be O(1) Therotical worst case is O(n)


### Note : Implementation && Member functions are same as Sets .

### Problems

 * codechef
<br>

<div id ="multiset"></div>
<h1 align="center"><a href="http://www.cplusplus.com/reference/set/multiset/"> Multiset </a></h1>

> Unordered sets are containers that store unique elements in no particular order, and which allow for fast retrieval of individual elements based on their value.

> Internally, the elements in the unordered_set are not sorted in any particular order, but organized into buckets depending on their hash values to allow for fast access to individual elements directly by their values (with a constant average time complexity on average).
<br>

### Note : Implementation && Member functions are same as Sets .

### Problems

 * codechef
<br>
