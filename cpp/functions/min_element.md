<h1 align="center"><a href="#"> min_element() </a></h1>

## Function

>Returns an iterator pointing to the element with the smallest value in the range [first,last) (first is included, last isn't).

## Declaration

```cpp
min_element(iterator for start of the range,iterator for end of the range which is not included in range);
```

## Example

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[6] = {-1,7,3,6,9,10};

	cout<<"smallest value in range of first 3 elements : "<<*min_element(a,a+3)<<endl;

	cout<<"smallest value in range of first 5 elements : "<<*min_element(a,a+5)<<endl;

	cout<<"smallest value in range of last 3 elements : "<<*min_element(a+3,a+6)<<endl;  

    return 0;
}
```

## Output

```
smallest value in range of first 3 elements : -1
smallest value in range of first 5 elements : -1
smallest value in range of last 3 elements : 6
```
