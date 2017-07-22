<h1 align="center"> Pairs & Tuples </h1><br>

<h1 align="center"><a href="#pairs" > Pairs </a> </h1>

<h2>Introduction</h2>

Many times while solving various problem where we require 2 values to completely linked with each other in such a scenario it is best to use pairs.<br>
Pair is a container that can be used to bind together a two values which may be of different types. Pair provides a way to store two heterogeneous objects as a single unit.

<h2 id="const1">construction</h2>
The simplest form in general would be the following:

```cpp
template<typename T1, typename T2> struct pair {
      T1 first;
      T2 second;
 };

```

In general pair<int,int> is a pair of integer values. At a more complex level, pair<string, pair<int, int> > is a pair of string and two integers. In the second case, the usage may be like this:


```cpp
pair<string, pair<int,int> > P;
string s = P.first; // extract string
int x = P.second.first; // extract first int
int y = P.second.second; // extract second int

```


We can also initialize a pair just like in vectors

```cpp
pair <data_type1, data_type2> Pair_name (value1, value2) ;
pair <data_type1, data_type2> g1;         //default
pair <data_type1, data_type2> g2(1, 'a');  //initialized,  different data type
pair <data_type1, data_type2> g3(1, 10);   //initialized,  same data type
pair <data_type1, data_type2> g4(g3);    //copy of g3

```

<h2>Functions</h2>

| <center>Function </center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :-------------                | :-------------                   | :-------------               |
| <a>make_pair()</a>        |This template function allows to create a value pair without writing the types explicitly |O(1)
| <a>operators(=, ==, !=, >=, <=) : </a>        |These operations can be appllied  to pairs|O(1)
| <a>swap()</a>        |This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of same type.       |O(1)

<h2>Implementation</h2>

```cpp
#include <iostream>
#include <utility> //required for pairs
using namespace std;

int main()
{
    pair <int, char> PAIR1 ;
    pair <string, double> PAIR2 ("Codecell", 1.23) ;
    pair <string, double> PAIR3 ;

    PAIR1.first = 100;
    PAIR1.second = 'C' ;

    PAIR3 = make_pair ("Codecell is Best",4.56);

    cout << PAIR1.first << " " ;
    cout << PAIR1.second << endl ;

    cout << PAIR2.first << " " ;
    cout << PAIR2.second << endl ;

    cout << PAIR3.first << " " ;
    cout << PAIR3.second << endl ;

    pair<int, int>pair1 = make_pair(1, 12);
    pair<int, int>pair2 = make_pair(9, 12);

 	cout << (pair1 == pair2) << endl; //compares both first and second values for equality
    cout << (pair1 != pair2) << endl; // checks first if they are equal then second
    cout << (pair1 >= pair2) << endl; //checks first followed by second
    cout << (pair1 <= pair2) << endl;
    cout << (pair1 > pair2) << endl;
    cout << (pair1 < pair2) << endl;

    cout << "Before swapping:\n " ;
    cout << "Contents of pair1 = " << pair1.first << "," << pair1.second ;
    cout << "Contents of pair2 = " << pair2.first << "," << pair2.second ;
    pair1.swap(pair2);

    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << "," << pair1.second ;
    cout << "Contents of pair2 = " << pair2.first << "," << pair2.second ;

    return 0;
}
```
Output

```
100 C
Codecell 1.23
Codecell is Best 4.56
0
1
0
1
0
1
Before swapping:
Contents of pair1 = 1,12
Contents of pair2 = 9,12
After swapping:
Contents of pair1 = 9,12
Contents of pair2 = 1,12
```
<h2>Note</h2>
Pairs are mainly used at places where we need to rearrange certain data types(sort/insert) but keep together another value related to along with it throughout the process for certain use <br>
By default sorting a pair related container causes data compared on the basis of fist parameter although we can create some custom compare function to change the behavior<br>

```cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring vector of pairs
    vector< pair <int,int> > vect;

    // Initializing 1st and 2nd element of
    // pairs with array values
    int arr[] = {10, 20, 5, 40 };
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Entering values in vector of pairs
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );

    // Printing the original vector(before sort())
    cout << "The vector before sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
             << vect[i].second << endl;

    }

    // Using simple sort() function to sort
    sort(vect.begin(), vect.end());

     // Printing the sorted vector(after using sort())
    cout << "The vector after sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }

    return 0;
}

```

Output:

```
The vector before applying sort operation is:
10 30
20 60
5 20
40 50
The vector after applying sort operation is:
5 20
10 30
20 60
40 50
```


<h1 align="center"> Tuples</h1>


<h2>Introduction</h2>

Tuples are nothing completely different but pairs extended from their limitation of size two. In problem solving many time we may accross situation where we require 3-4 values linked together as one that is when we use tuples<br>
A tuple is an object that can hold a number of elements. The elements can be of different data types. The elements of tuples are initialized as arguments in order in which they will be accessed


<h2>Operations</h2>

| <center>Function </center>    | <center>What it does ?</center>  |
| :-------------                | :-------------                   |
| <a>get()</a>        |get() is used to access the tuple values and modify them, it accepts the index and tuple name as arguments to access a particular tuple element |
| <a>make_tuple() </a>        |make_tuple() is used to assign tuple with values. The values passed should be in order with the values declared in tuple|
| <a>tuple_size</a>        |It returns the number of elements present in the tuple       |
| <a>swap()</a>        |The swap(), swaps the elements of the two different tuples.|
| <a>tie()</a>        |The work of tie() is to unpack the tuple values into seperate variables. There are two variants of tie(), with and without “ignore” , the “ignore” ignores a particular tuple element and stops it from getting unpacked.|
| <a>tuple_cat()</a>        |This function concatenates two tuples and returns a new tuple|


<h2>Implementation</h2>


```cpp

#include<iostream>
#include<tuple> // for tuple
using namespace std;
int main()
{
	// Initializing variables for unpacking
    int i_val;
    char ch_val;
    float f_val;   

    // Declaring tuple
    tuple <char, int, float> gk;

    // Assigning values to tuple using make_tuple()
    gk = make_tuple('a', 10, 15.5);

     // Initializing tuple
    tuple <int,char,float> tup1(20,'g',17.5);

    // Printing initial tuple values using get()
    cout << "The initial values of tuple are : ";
    cout << get<0>(gk) << " " << get<1>(gk);
    cout << " " << get<2>(gk) << endl;

    // Use of get() to change values of tuple
    get<0>(gk) = 'b';
    get<2>(gk) =  20.5;

     // Printing modified tuple values
    cout << "The modified values of tuple are : ";
    cout << get<0>(gk) << " " << get<1>(gk);
    cout << " " << get<2>(gk) << endl;

    // Use of size to find tuple_size of tuple
    cout << "The size of tuple is : ";
    cout << tuple_size<decltype(gk)>::value << endl;

    // Use of tie() without ignore
    tie(i_val,ch_val,f_val) = tup1;

    // Displaying unpacked tuple elements
    // without ignore
    cout << "The unpacked tuple values (without ignore) are : ";
    cout << i_val << " " << ch_val << " " << f_val;
    cout << endl;

    // Use of tie() with ignore
    // ignores char value
    tie(i_val,ignore,f_val) = tup1;

    // Displaying unpacked tuple elements
    // with ignore
    cout << "The unpacked tuple values (with ignore) are : ";
    cout << i_val  << " " << f_val;
    cout << endl;

    // Concatenating 2 tuples to return a new tuple
    auto tup3 = tuple_cat(gk,tup1);
 	// Displaying new tuple elements
    cout << "The new tuple elements in order are : ";
    cout << get<0>(tup3) << " " << get<1>(tup3) << " ";
    cout << get<2>(tup3) << " " << get<3>(tup3) << " ";
    cout << get<4>(tup3) << " " << get<5>(tup3) << endl;

    return 0;
}

```

Output:

```
The initial values of tuple are : a 10 15.5
The modified values of tuple are : b 10 20.5
The size of tuple is : 3
The unpacked tuple values (without ignore) are : 20 g 17.5
The unpacked tuple values (with ignore) are : 20 17.5
The new tuple elements in order are : b 10 20.5 20 g 17.5
```

<h2>Note</h2>
Although it might seem to you that tuples are not of much importance but that is not the case it does saves your time in and makes your code clean for writing nested pairs<br>
Also the functionality of sorting of pairs can be extended to tuples by appropriately modifying the custom function involved.
