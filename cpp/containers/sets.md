<div id ="sets"> </div>
<h1 align="center" ><a href="http://www.cplusplus.com/reference/set/set/"> Sets </a></h1>

Sets are containers which store only unique values and permit easy look ups. <br>

The values in the sets are stored in some specific order (like ascending or descending). <br> 

Elements can only be inserted or deleted, but cannot be modified. <br>

We can access and traverse set elements using iterators just like vectors.
<br>

> Internally implemented as binary search tree.

<div id = "members"></div>

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
| <a href="#">insert( ) </a>      |  insert a new element.       | O(logN)

<br>


### Implementation

```cpp
// declaratation

set<int> s1;                               // Empty Set
int a[]= {1, 2, 3, 4, 5, 5};
set<int> s2 (a, a + 6);                    // s2 = {1, 2, 3, 4, 5}
set<int> s4 (s3.begin(), s3.end());         // Set created using iterators
```

```cpp
#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
        set <int> s;
        set <int>::iterator it;         // iterator to traverse
        int A[] = {3, 5, 2, 1, 5, 4};
        for(int i = 0;i < 6;++i)
                s.insert(A[i]);
        s.erase(A[3]);                  // erases 1 form the set
        printf("size of set %d\n",(int)s.size());
        for(it = s.begin();it != s.end();++it)
                cout << *it << ' ';
        cout << endl;
        return 0;

}
```
Output:
```
size of set 4
2 3 4 5
```
<br>

### Problems

 * codechef
<br>

<div id = "unordered_sets"></div>
<h1 align="center" ><a href="http://www.cplusplus.com/reference/unordered_set/unordered_set/"> Unordered-Sets </a></h1>

Unordered sets are containers that store unique elements in no particular order, and which allow for fast retrieval of individual elements based on their value. <br>

Pros : Faster than sets (promises amortized O(1) for search). <br>

Cons : Look up not guaranteed to be O(1) Therotical worst case is O(n) <br>


### Note : Implementation && <a href="#members">Member functions</a> are similar as <a href="#sets">Sets</a> .

### Problems

 * codechef
<br>

<div id ="multiset"></div>
<h1 align="center"><a href="http://www.cplusplus.com/reference/set/multiset/"> Multiset </a></h1>

Multisets are a type of associative containers similar to set, with an exception that multiple elements can have same values.<br>

Internally, the elements in a multiset are always sorted following a specific strict weak ordering criterion indicated by its internal [comparison object](http://www.cplusplus.com/reference/map/multimap/key_comp/) (of type Compare).
<br>

```cpp
        multiset <int , greater<int> > m ;
        m.insert(40);
        m.insert(60);
        m.insert(20);
        m.insert(60); // 60 will be added again to the multiset unlike set
```

### Note : [Implementation](http://www.cplusplus.com/reference/set/multiset/multiset/) && Member functions are same as <a href="#members">Sets</a> .

### Extending <a href="#members"> This </a> :

| <center>   Function </center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :------------- | :------------- | :------------- |
| <a href="#">rbegin()</a>        | Returns a reverse iterator pointing to the last element in the container     | O(1)
| <a href="#">rend() </a>      | Returns a reverse iterator pointing to the theoretical element right before the first element in the  container   | O(1)
| <a href="#">equal_range() </a>     |  The function returns a pair, whose member pair::first is the lower bound of the range (the same as lower_bound), and pair::second is the upper bound     | O(logN)

### Problems

 * codechef
<br>
