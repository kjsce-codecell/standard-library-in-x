<h1 align="center"><a href="#">reverse() </a></h1>


## Function

>Reverses the order of the elements in the range [first,last).(first is included, last isn't).

>The function calls iter_swap to swap the elements to their new locations.

## Declaration

```
reverse(iterator for start of the range,iterator for end of the range which is not included in range);
```

## Example

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int numbers[] = {1,2,3,4,5,6,7,8};
  
  cout<<"Before Reversing:"<<endl;  
  for(int i =0;i<8;i++)
      cout<<numbers[i]<<" ";
      
  cout<<endl<<endl;

  reverse(numbers, numbers+8);
  
  cout<<"After Reversing:"<<endl;
  for(int i =0;i<8;i++)
      cout<<numbers[i]<<" ";
  
  cout<<endl;

    return 0;
}
```

## Output

```
Before Reversing:
1 2 3 4 5 6 7 8 

After Reversing:
8 7 6 5 4 3 2 1 
```
