<h1 align="center"> Max and Min </h1>

<h2> Max </h2>

<h3> Function </h3>
Returns the largest of a and b. If both are equivalent, a is returned.
<h3> Declaration </h3>

```cpp
max(variable or value 1,variable or value 2);
```

<h3> Example </h3>

```cpp
#include <iostream>     
#include <algorithm> //for max
using namespace std;
int main () {
  cout <<  max(1,2) << endl;
  cout <<  max('s','m') << endl;
  cout <<  max(1.23,2.34) << endl;
  return 0;
}
```
Output:
```
2
s
2.34
```

<h2> Min </h2>
<h3> Function </h3>
 Returns the smallest of a and b. If both are equivalent, a is returned.
<h3> Declaration </h3>

```
min(variable or value 1,variable or value 2);
```

<h3> Example </h3>

```C++
#include <iostream>     
#include <algorithm> //for min
using namespace std;
int main () {
  cout <<  min(1,2) << endl;
  cout <<  min('s','m') << endl;
  cout <<  min(1.23,2.34) << endl;
  return 0;
}
```
Output:
```
1
m
1.23
```
