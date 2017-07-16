<h1 align="center"> set_union() </h1> 

<h3> Function </h3>

> Constructs a sorted range beginning in the location pointed by result with the set union of the two sorted ranges [first1,last1) and [first2,last2).

>The union of two sets is formed by the elements that are present in either one of the sets, or in both.

>Elements from the second range that have an equivalent element in the first range are not copied to the resulting range.

>The elements in the ranges shall already be sorted and the resulting range is also sorted accordingly.

<h3> Declaration </h3>

```
it = set_union (first1, last1, first2, last2, result);
```

**first1, last1**: 
Input iterators to the initial and final positions of the first sorted sequence.
The range used is [first1,last1), which contains all the elements between first1 and last1, including the element pointed by first1 but not the element pointed by last1.

**first2, last2**: 
Input iterators to the initial and final positions of the second sorted sequence.
The range used is [first2,last2), which contains all the elements between first2 and last2, including the element pointed by first2 but not the element pointed by last2.

**result**:
Output iterator to the initial position of the range where the resulting sequence is stored.

**Return value**:
Returns an iterator (it) to the end of the constructed range.


<h3> Example </h3>

```C++
#include <iostream>     
#include <algorithm>    // set_union, sort
#include <vector>       // vector
using namespace std;
int main () {
  int first[] = {5,10,15,20,25};
  int second[] = {50,40,30,20,10};
  vector<int> v(10);                      // 0  0  0  0  0  0  0  0  0  0
  vector<int>::iterator it;
  sort (first,first+5);     //  5 10 15 20 25
  sort (second,second+5);   // 10 20 30 40 50
  it=set_union (first, first+5, second, second+5, v.begin());  // 5 10 15 20 25 30 40 50  0  0
  v.resize(it-v.begin());                      // 5 10 15 20 25 30 40 50
  for (it=v.begin(); it!=v.end(); ++it) cout << ' ' << *it;
  cout <<endl;
  return 0;
}
```
Output:
```
 5 10 15 20 25 30 40 50
```

