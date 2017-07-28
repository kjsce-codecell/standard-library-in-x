<h1 align="center"><a href="#"> upper_bound() </a></h1>


## Function

>Returns an iterator pointing to the first element in the range [first,last)(first is included, last isn't) which compares greater than val.


>Basically the first element in the array which is greater than the value.

## Declaration

```cpp
upper_bound(iterator for start of the range,iterator for end of the range which is not included in range,value);
```

## Example

```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int numbers[] = {1,2,3,4,4,4,5,6,6,6,7,8};

  vector <int> v(numbers,numbers+12);
  vector <int>::iterator it;

  it = upper_bound(v.begin(),v.end(),5);//first 6 in numbers

  cout<<"upper bound at index : "<<it-v.begin()<<endl;
  return 0;
}
```

## Output

```
upper bound at index : 7
```
