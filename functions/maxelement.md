<h1 align="center"><a href="#"> max_element() </a></h1>

## Function

>Returns an iterator pointing to the element with the largest value in the range [first,last) (first is included, last isn't).

## Declaration

```cpp
max_element(iterator for start of the range,iterator for end of the range which is not included in range);
```

## Example

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[6] = {-1,7,3,6,9,10};

	cout<<"biggest value in range of first 3 elements : "<<*max_element(a,a+3)<<endl;
	//check out the '*' before the function
	cout<<"biggest value in range of first 5 elements : "<<*max_element(a,a+5)<<endl;

	cout<<"biggest value in range of last 3 elements : "<<*max_element(a+3,a+6)<<endl;  

    return 0;
}

```

## Output

```
biggest value in range of first 3 elements : 7
biggest value in range of first 5 elements : 9
biggest value in range of last 3 elements : 10

```
