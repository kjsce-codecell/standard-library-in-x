<h1 align="center"><a href="#"> Stacks </a></h1>

<h2>INTRODUCTION</h2>

Stacks are dynamic data structures that follow the Last In First Out (LIFO) principle. The last item to be inserted into a stack is the first one to be deleted from it.<br>

For example, you have a stack of trays on a table. The tray at the top of the stack is the first item to be moved if you require a tray from that stack.<br>

Stacks have restrictions on the insertion and deletion of elements. Elements can be inserted or deleted only from one end of the stack i.e. from the *top*. The element at the top is called the *top* element. The operations of inserting and deleting elements are called push() and pop() respectively.<br>

<h2>CONSTRUCTION</h2>

```
stack <datatype> name;
```

<h2>FUNCTIONS</h2>

| <center>Function </center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :-------------                | :-------------                   | :-------------               |
| <a>empty() </a>        |Returns whether the stack is empty    |O(1)
| <a>size() </a>        |Returns the size of the stack   |O(1)
| <a>top() </a>        |Returns a reference to the top most element of the stack   |O(1)
| <a>push(g)</a>        |Adds the element ‘g’ at the top of the stack    |O(1)
| <a>pop() </a>        |Deletes the top most element of the stack   |O(1)

<h2>Implementation</h2>

```
#include <iostream>
#include <stack>
 
using namespace std;
 
void showstack(stack <int> kj)
{
    stack <int> c = Kj;
    while (!c.empty())
    {
        cout << '\t' << c.top();
        c.pop();
    }
    cout << '\n';
}
 
int main ()
{
    stack <int> KJC;
    KJC.push(10);
    KJC.push(30);
    KJC.push(20);
    KJC.push(5);
    KJC.push(1);
 
    cout << "The stack KJC is : ";
    showstack(KJC);
 
    cout << "\nKJC.size() : " << KJC.size();
    cout << "\nKJC.top() : " << KJC.top();
 
 
    cout << "\nKJC.pop() : ";
    KJC.pop();
    showstack(KJC);
 
    return 0;
}

```

Output

```
The stack KJC is : 	1	5	20	30	10

KJC.size() : 5
KJC.top() : 1
KJC.pop() : 	5	20	30	10

```

<h2>Problems</h2>