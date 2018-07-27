<h1 align="center"><a href="#"> binary_search() </a></h1>


## Function

>Returns true if any element in the range [first,last) (first is included, last isn't) is equivalent to value, and false otherwise.
>**The elements in the range shall already be sorted**

## Declaration

```cpp
binary_search(iterator for start of the range,iterator for end of the range which is not included in range,value to be searched);
```

## Example

```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int numbers[] = {1,2,3,4,5,4,3,2,1};
  vector<int> v(numbers,numbers+9);                         

  sort(v.begin(), v.end());

  cout << "looking for a 3... ";
  if (binary_search(v.begin(), v.end(), 3))
    cout << "found!"<<endl;
  else
    cout << "not found"<<endl;

  cout << "looking for a 6... ";
  if (binary_search(v.begin(), v.end(), 6))
    cout << "found!"<<endl;
  else
    cout << "not found"<<endl;

    return 0;
}

```

## Output

```
looking for a 3... found!
looking for a 6... not found
```
