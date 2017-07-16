<h1 align="center"><a href="#">sort() </a></h1>


## Function

>Sorts the elements in the range [first,last)  (first is included, last isn't) into ascending order.

## Declaration

```
sort(iterator for start of the range,iterator for end of the range which is not included in range);
```

## Example

```cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int numbers[] = {1,2,3,12,10,7,4,-2};
  
  cout<<"Before Sorting:"<<endl;  
  for(int i =0;i<8;i++)
      cout<<numbers[i]<<" ";
      
  cout<<endl<<endl;

  sort(numbers, numbers+8);
  
  cout<<"After Sorting:"<<endl;
  for(int i =0;i<8;i++)
      cout<<numbers[i]<<" ";
  
  cout<<endl;

    return 0;
}
```

## Output

```
Before Sorting:
1 2 3 12 10 7 4 -2 

After Sorting:
-2 1 2 3 4 7 10 12 
```
