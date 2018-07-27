<h1 align="center"><a href="#"> Vectors </a></h1>

<h2>INTRODUCTION</h2>

The simplest STL container is vector. <br />
Vector is just an array with extended functionality. In other words, vectors are dynamic arrays.

<h2>CONSTRUCTION</h2>

```cpp
vector<datatype> a;  //empty vector
vector<datatype> b (no of elements, value of each element); //fixed number of elements with default value
vector<datatype> c (starting iterator/pointer,ending iterator/pointer); //inserting elements from other data structures
vector<datatype> d (name of vector to be copied);    
vector<vector<datatype> > matrix(no of rows,vector<datatype>(no of coloumn,default value)) //Declaring a 2D array

// Note:
vector<datatype> v[10]; // following declaration isn't a vector with 10 elements but an array of size ten having vector elements

```
<br />

<h2>FUNCTIONS</h2>

| <center>Function </center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :-------------                | :-------------                   | :-------------               |
| <a>at()</a>        |Returns the reference to the element at a particular position (can also be done using ‘[ ]’ operator)       |O(1)
| <a>clear()</a>        |Deletes all the elements from the vector and assign an empty vector |O(N)
| <a>pop_back()</a>        |Removes the last element from the vector       |O(1)
| <a>push_back()</a>        |Inserts a new element at the end of the vector       |O(1)
| <a>front()</a>          |Returns reference of the first element       |O(1)
| <a>front()</a>          |Returns reference of the last element       |O(1)
| <a>empty()</a>         |Returns 1 if vector is empty, else 0      |O(1)
| <a>size()</a>         |Returns the total no of elements in the vector|    O(1)
| <a>resize()</a>        |Resizes the vector to the new length which can be less than or greater than the current length       |O(N)


<h2>Note</h2>
begin() and end() function return an iterator(like a pointer) initialized to the first or the last element of the container that can be used to iterate through the collection, while front() and back() function just return a reference to the first or the last element of the container.

<h2>PASSING AS ARGUMENT TO FUNCTION</h2>

Another very important thing that you should remember: When vector is passed as a parameter to some function, a copy of vector is actually created. It may take a lot of time and memory to create new vectors when they are not really needed.
```cpp
void some_function(vector<int> v) { // Never do it unless you’re sure what you do!
      // ...
 }
```
Instead, use the following construction:
```cpp
int modify_vector(vector<int>& v) { // Correct
      V[0]++;
 }
```

<h2>Implementation</h2>

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    v.push_back(5);
    while(v.back() > 0)
        v.push_back(v.back() - 1);
    for(int i = 0;i < v.size();++i)
        cout << v.at(i) << ' ';
    cout << endl;
    while(!v.empty())
    {
        cout << v.back() << ' ';
        v.pop_back();
    }
    cout << endl;
    return 0;
}
```

Output:
```
5 4 3 2 1 0
0 1 2 3 4 5
```
<br />
Further much more functionality can be understood once we start using iterators
