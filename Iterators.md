<h1 align="center"><a href="#"> Iterators </a></h1>

<h2>INTRODUCTION</h2>

What are iterators? In STL iterators are the most general way to access data in containers<br>
An iterator is any object that, points to some element in a range of elements (such as an array or a container) and has the ability 
to iterate through those elements using a set of operators (with at least the increment (++) and dereference (*) operators).<br>
Iterators provide some common additional functionality to container and makes it possible to iterate(traverse) through the containers which
can be accessed through the bracket( [ ] ) operator.<br>
The main advantage of iterators, of course, is that they greatly increase the reuse of code: your own algorithms, based on iterators, will work on a wide range of containers, and your own containers, 
which provide iterators, may be passed to a wide range of standard functions.

<h2>CONSTRUCTION</h2>
general construction of iterators looks like

```
Container <datatype>::iterator name;
```
ex. for creating an iterator for a vector

```
vector <int>::iterator  it;
```

for list

```
list <int>::iterator it;
```
<br>

<h2>FUNCTIONS</h2>

| <center>Function </center>    | <center>What it does ?</center>  |
| :------------- | :------------- |
| <a>begin()</a>        |This function is used to return the beginning position of the container.       |
| <a>end()</a>        |This function is used to return the end position of the container       |
| <a>advance()</a>        |This function is used to increment the iterator position till the specified number mentioned in its arguments       |
| <a>next()</a>        |This function returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments     |
| <a>prev()</a>        |This function returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments       |
| <a>inserter()</a>        |    This function is used to insert the elements at any position in the container. It accepts 2 arguments, the container and iterator to position where the elements have to be inserted.   |
| <a>distance()</a>        |Calculates the number of elements between first and last|

!!Note-Only a certain datatypes allow - operation to find the distance *second-first* but these aren't allowed for all containers hence we use diatance().  

<h2>Implementation</h2>

The following is the implementation of few iterator function in vectors,
```
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
    advance(ptr, 3);
    cout << "The position of iterator after advancing is : ";
    cout << *ptr << " ";
    return 0;    
}
```
Output:
```
1 2 3 4 5
4
```
<br>
