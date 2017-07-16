<h1 align="center"> set_intersection() </h1> 

<h3> Function </h3>

> Constructs a sorted range beginning consisting of elements that are found in both sorted ranges [first1, last1) and [first2, last2).

>If some element is found m times in [first1, last1) and n times in [first2, last2), the first x number of elements will be copied from the first range to the destination range where x is the minimum of m and n. 

>The order of equivalent elements is preserved.

>The resulting range cannot overlap with either of the input ranges.

<h3> Declaration </h3>

```
set_intersection(first1,last1,first2,last2,result)
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

```C++
#include <iostream>
#include <vector>
#include <algorithm> //set_intersection, sort
#include <iterator> //back_inserter
using namespace std;
int main()
{
    vector<int> v1{1,2,3,4,5,6,7,8};
    vector<int> v2{5,7,9,10};
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    vector<int> v_intersection;
    set_intersection(v1.begin(), v1.end(),v2.begin(), v2.end(),back_inserter(v_intersection));
    for(int n : v_intersection) cout << n << ' ';
}
```
Output:
```
5 7
```

