<h1 align="center"><a href="#">sort() </a></h1>


## Function

>Sorts the elements in the range [first,last)  (first is included, last isn't) into ascending order.

## Declaration

```cpp
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

<h1 align="center">Comparators() </h1>


## About

>Actually the sort() function has three parameters that can be passed into it. The third parameter defines the ordering in which the elements should be sorted. This third parameter is actually a boolean function called Comparator which is used to sort the elements in any other way than the tradional sorting(Elements in Ascending order). It is not mandatory to have a third parameter in sort to have custom sorting . There are (at least) three ways to define an ordering in C++. 


### _1. Define operator<()_ 

>This method can be used if you want objects of a custom class to be able to be sorted naturally. By naturally I mean it is default way to sort objects of this class. For example, you have a class Edge defined like this.

```cpp
struct Edge
{
    int from, to, weight;
};
```
Assume you want to sort edges of your graph in decreasing order of their weight. So , what you can do here is overwrite the functioning of default comparision that is stored in operator<().

```cpp
struct Edge
{
    int from, to, weight;
    bool operator<(Edge other) const
    {
        return weight > other.weight;
    }
};
```
More specifically, you define a function with prototype:

bool operator<(T other) const
that returns true if *this (the current object) must precede other, and false otherwise. Note that the const keyword is required; it means that you cannot modify member variables of the current object.

If you don’t like this syntax, i.e., a single parameter when you actually are comparing two objects, you can use this alternative syntax instead.

```cpp
struct Edge
{
    int from, to, weight;
    friend bool operator<(Edge a, Edge b)
    {
        return a.weight > b.weight;
    }
};
```
This way it is much clearer that you are comparing a and b, not *this and other. Note also that friend function is like static function; it cannot access member variables.

An example of classes that implement the natural ordering is STL’s pair<T1, T2>. Two objects of type pair<T1, T2> will be compared according to their first keys, or if they are equal, compared according to their second keys.

All built-in types also implements natural ordering (implemented by the compiler). For example, an int a comes before an int b if a is less than b.

>A class that has natural ordering defined can be used directly in STL functions:

```cpp
vector<Edge> v;
sort(v.begin(), v.end());
We can also use this class as an underlying type of STL containers:

priority_queue<Edge> pq;
set<Edge> s;
```

### _2. Define a custom comparison function_
>Use this method if you are comparing built-in types, you cannot modify the class you are comparing, or you want to define another ordering besides its natural ordering.

>Basically, a comparison function is just a function that takes two parameter of the same type and returns a boolean:

```cpp
bool name(T a, T b)
```
>For example, you want to sort a vector<int> data in ascending order of their occurrences in a text. The number of occurrences of a number is available in vector<int> occurrences. Define a function, say, with name cmp:

```cpp
bool cmp(int a, int b)
{
    return occurrences[a] < occurrences[b];
}
```
Now you can sort data by specifying the comparison function to use as the additional argument:

```cpp
sort(data.begin(), data.end(), cmp);
```

### _3. Define operator()()_

A functor, or a function object, is an object that can behave like a function. This is done by defining operator()() of the class. In this case, implement operator()() as a comparison function:

```cpp
vector<int> occurrences;
struct cmp
{
    bool operator()(int a, int b)
    {
        return occurrences[a] < occurrences[b];
    }
};
```
Now, you pass this class as a template argument to STL containers. The details vary between containers, consult STL reference this.

```cpp
set<int, cmp> s;
priority_queue<int, vector<int>, cmp> pq;
```

STL also has some built-in functor classes such as *less<T>*, the default comparison class, and *greater<T>*, the negation of less<T>.

A functor can be used as an ordinary function by instantiating the class. For this purpose, the simplest way is to append () after the class name. So, for example, if you want to sort a vector<int> data in descending order (that’s the negation of ascending order), you may use:

```cpp
sort(data.begin(), data.end(), greater<int>());
```

### _Bonus Tips_
>If your class structure is large, then it is better that the parameters in your comparison function use const keyword and reference operator &. Example:
```cpp
bool cmp(const Edge& a, const Edge& b)
```
>The advantage is that it ensures that you are unable to modify the contents of a and b, and they are passed as reference only, not the whole objects.