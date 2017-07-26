<h1 align="center"><a href="#"> lower_bound() </a></h1>

## Function

>Returns an iterator pointing to the first element in the range [first,last)(first is included, last isn't) which does not compare less than val

>Basically the first element in the array which is greater than or equal to the value.

## Declaration

```cpp
lower_bound(iterator for start of the range,iterator for end of the range which is not included in range,value);
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

  it = lower_bound(v.begin(),v.end(),4);//first 4 in numbers

  cout<<"lower bound at index : "<<it-v.begin()<<endl;
  return 0;
}
```

## Output

```
lower bound at index : 3
```
