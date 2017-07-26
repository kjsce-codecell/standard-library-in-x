<h1 align="center"> set_difference() </h1>

<h3> Function </h3>

> Constructs a sorted range beginning in the location pointed by result with the set difference of the sorted range [first1,last1) with respect to the sorted range [first2,last2).

>The difference of two sets is formed by the elements that are present in the first set, but not in the second one. The elements copied by the function come always from the first range, in the same order.

>For containers supporting multiple occurrences of a value, the difference includes as many occurrences of a given value as in the first range, minus the amount of matching elements in the second, preserving order.

>The elements in the ranges shall already be sorted and the resulting range is also sorted accordingly.

<h3> Declaration </h3>

```cpp
it = set_difference (first1, last1, first2, last2, result);
```
where,
**first1, last1**:
Input iterators to the initial and final positions of the first sorted sequence.The range used is [first1,last1), which contains all the elements between first1 and last1, including the element pointed by first1 but not the element pointed by last1.

**first2, last2**:
Input iterators to the initial and final positions of the second sorted sequence.The range used is [first2,last2), which contains all the elements between first2 and last2, including the element pointed by first2 but not the element pointed by last2.

**result**:
Output iterator to the initial position of the range where the resulting sequence is stored.

**Return value**:
Returns an iterator past the end of the constructed range.


<h3> Example </h3>

```cpp
#include <iostream>    
#include <algorithm>    // set_difference, sort
#include <vector>       // vector
using namespace std;
int main () {
  int first[] = {5,10,15,20,25};
  int second[] = {50,40,30,20,10};
  vector<int> v(10);
  vector<int>::iterator it;
  sort (first,first+5);     //  5 10 15 20 25
  sort (second,second+5);   // 10 20 30 40 50
  it=set_difference (first, first+5, second, second+5, v.begin()); //  5 15 25  0  0  0  0  0  0  0
  v.resize(it-v.begin());    //  5 15 25
  for (it=v.begin(); it!=v.end(); ++it)    cout << ' ' << *it;
  return 0;
}
```
Output:
```
5 15 25
```
