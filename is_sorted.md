<h1 align="center"> is_sorted() </h1> 

<h3> Function </h3>

> Returns true if the range [first,last) is sorted into ascending order.

<h3> Declaration </h3>

```
is_sorted(first,last);
```
where,
**first, last**: 
Input iterators to the initial and final positions of the first sorted sequence.The range used is [first,last), which contains all the elements between first1 and last1, including the element pointed by first but not the element pointed by last.

**Return value**:

>true if the range [first,last) is sorted into ascending order, false otherwise.
>If the range [first,last) contains less than two elements, the function always returns true.


<h3> Example </h3>

```C++
// is_sorted example
#include <iostream>    
#include <algorithm>    //is_sorted,prev_permutation
#include <array>        // array
using namespace std;
int main () {
 array<int,4> arr {2,4,1,3};
 do {
    prev_permutation(arr.begin(),arr.end());
    for (int& x:arr) std::cout <<' '<< x;
    cout<<endl;
    } while (!is_sorted(arr.begin(),arr.end()));
  cout << "is_sorted returned true!";
  return 0;
}
```
Output:
```
2 3 4 1
2 3 1 4
2 1 4 3
2 1 3 4
1 4 3 2
1 4 2 3
1 3 4 2
1 3 2 4
1 2 4 3
1 2 3 4
is_sorted returned true!
```

