<h1 align="center"><a href="#"> next_permutation() </a></h1>

## Function

It rearranges the elements in the range [first,last) (first is included, last isn't) into the **_next lexicographically(dictionary order) greater permutation_**.

A permutation is each one of the N! possible arrangements the elements can take (where N is the number of elements in the range). Different permutations can be ordered according to how they compare lexicographicaly to each other; The first such-sorted possible permutation (the one that would compare lexicographically smaller to all other permutations) is the one which has all its elements sorted in ascending order, and the largest has all its elements sorted in descending order.

If the function can determine the next higher permutation, it rearranges the elements as such and returns true. If that was not possible (because it is already at the largest possible permutation), it rearranges the elements according to the first permutation (sorted in ascending order) and returns false.

## Declaration

```cpp
next_permutation(iterator for start of the range,iterator for end of the range which is not included in range);
```

## Example

```cpp
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	cout<<"String Example"<<endl;
	cout<<endl;

    string s = "aab";

    do{
    cout<<s<<endl;
    } while(next_permutation(s.begin(), s.end()));

    cout<<"After loop: "<<s<<endl;

    cout<<endl<<endl;

    cout<<"Integer Example"<<endl;
    cout<<endl;

    int myints[] = {1,2,3};

    cout << "The 3! possible permutations with 3 elements:"<<endl;

    do {
        cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << endl;
    } while (next_permutation(myints,myints+3));

    cout<<"After loop: "<< myints[0]<<' '<< myints[1]<< ' ' << myints[2] <<endl;

    return 0;
}

```

## Output

```
String Example

aab
aba
baa
After loop: aab


Integer Example

The 3! possible permutations with 3 elements:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
After loop: 1 2 3

```
