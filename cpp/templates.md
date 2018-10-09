<h1 align="center"><a href="#">Templates</a></h1>

# What are templates?
Templates are a feature of the C++ programming language that allows functions and classes to operate with generic types. This allows a function or class to work on many different data types without being rewritten for each one.
# Generic Functions
Many times while programming, there is a need for creating functions which perform the same operations but work with different data types. So C++ provides a feature to create a single generic function instead of many functions which can work with different data type by using the template parameter.
# Template Parameters
The way we use normal parameters to pass as a value to function, in the same manner template parameters can be used to pass type as argument to function. Basically, it tells what type of data is being passed to the function.

The syntax for creating a generic function:
```cpp
template <class  type> return-type function-name (parameter-list)
```
Here, ‘type’ is just a placeholder used to store the data type when this function is used you can use any other name instead. Class is used to specify the generic type of template, alternatively typename can be used instead of it. Let’s try to understand it with an example:

Assume we have to swap two variables of int type and two of float type. Then, we will have to make two functions where one can swap int type variables and the other one can swap float type variables. But if we use a generic function here, then we can simply make one function and can swap both type of variables by passing their different type in the arguments. Let’s implement this:

```cpp
#include <iostream>
using namespace std ;
// creating a generic function ‘swap (parameter-list)’ using template :
template <class X>
void swaping( X &a, X &b) {
    X tp;
    tp = a;
    a = b;
    b = tp;
    cout << " Swapped elements values of a and b are  " << a << " and  " << b << " respectively " << endl;
}

int main( ) {
    int a = 10, b = 20 ;
    float c = 10.5, d = 20.5 ;
    swaping(a , b);          // function swapping ‘int’ elements
    swaping(c , d);          // function swapping ‘float’ elements
    return 0;
}
```

**Output :**
```
Swapped elements values of a and b are 20 and 10 respectively.
Swapped elements values of a and b are 20.5 and 10.5 respectively.
```
After creating the generic function, compiler will automatically generate correct code for the type of data used while executing the function.
