<h1 align="center"><a href="#"> Iterators </a></h1>

<h2> INTRODUCTION</h2>

What are iterators? In STL iterators are the most general way to access data in containers<br>
An iterator is any object that, points to some element in a range of elements (such as an array or a container) and has the ability
to iterate through those elements using a set of operators (with at least the increment (++) and dereference (*) operators).<br>
Iterators provide some common additional functionality to container and makes it possible to iterate(traverse) through the containers which
can be accessed through the bracket( **[ ]** ) operator.<br>
The main advantage of iterators, of course, is that they greatly increase the reuse of code: your own algorithms, based on iterators, will work on a wide range of containers, and your own containers,
which provide iterators, may be passed to a wide range of standard functions.

<h2> CONSTRUCTION</h2>
general construction of iterators looks like

```cpp
Container <datatype>::iterator name;
```
ex. for creating an iterator for a vector

```cpp
vector <int>::iterator  it;
```

for list

```cpp
list <int>::iterator it;
```
<br>

<h2> FUNCTIONS</h2>

| <center>Function </center>    | <center>What it does ?</center>  |
| :------------- | :------------- |
| <a>**begin()**</a>        |This function is used to return the beginning position of the container.       |
| <a>**end()**</a>        |This function is used to return the end position of the container       |
| <a>**advance()**</a>        |This function is used to increment the iterator position till the specified number mentioned in its arguments       |
| <a>**next()**</a>        |This function returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments     |
| <a>**prev()**</a>        |This function returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments       |
| <a>**inserter()**</a>        |    This function is used to insert the elements at any position in the container. It accepts 2 arguments, the container and iterator to position where the elements have to be inserted.   |
| <a>**distance()**</a>        |Calculates the number of elements between first and last|

**Note** - A few datatypes allow '-' operation to find the distance *second-first* but these aren't allowed for all containers hence we use distance().  

<h2> IMPLEMENTATION</h2>

The following is the implementation of few iterator function in vectors,
```cpp

#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5 };
    // Declaring iterator to a vector
    vector<int>::iterator ptr;
    // Displaying vector elements using begin() and end()
    cout << "The vector elements are : ";
    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
        cout << *ptr << " ";
    cout<<"\n";
    vector<int>::iterator ptr1 = ar.begin();
    advance(ptr1, 3);
    cout << "The position of iterator after advancing is : ";
    cout << *ptr1 << " ";
    return 0;    
}

```
Output:
```
The vector elements are :
1 2 3 4 5
The position of iterator after advancing is :
4

```
<br />

<h1>REVERSE ITERATORS</h1>

<h2>INTRODUCTION </h2>

Reverse iterator is an iterator adaptor that reverses the direction of a given iterator.
In other words, when provided with a bidirectional iterator, std::reverse_iterator produces a new iterator that moves from the end to the beginning of the sequence defined by the underlying bidirectional iterator.<br>
Here we make us of rend() and rbegin() where rbegin() points to the last element of the container and rend() points to one position before the first element.<br>
Using the operation ++ makes the iterator move a step towards the first element  

<h2>IMPLEMENTATION </h2>

```cpp
for(vector<int>::reverse_iterator i=ar.rbegin();i!=ar.rend();++i)
{
	cout<<*i<<" ";
}
```
Output:

```
5 4 3 2 1
```
All other functions are the same as that of the iterators.

**Note** - (For some lazy people) some efforts in typing of syntax can be reduced if you make use of **auto** keyword used provided by c++, using this the above implementation would look like:

```cpp
for(auto i=ar.rbegin();i!=ar.rend();++i)
{
	cout<<*i<<" ";
}
```
