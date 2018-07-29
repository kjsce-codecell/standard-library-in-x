<h1 align="center">Stack</h1>

<br>

>Java provides an inbuilt object type called Stack. It is a collection that is based on the last in first out (LIFO) principle. On Creation, a stack is empty.

<br>


### Operations


|<center>Function</center>  | <center>What it does?</center>  |  <center> Complexity </center> |
| :------------- | :------------- | :------------- |
| <a href="#">Object push(Object element) </a>  |Pushes an element on the top of the stack.|O(1) |
| <a href="#">Object pop()</a>   | Removes and returns the top element of the stack. An ‘EmptyStackException’ exception is thrown if we call pop() when the invoking stack is empty.|O(1) |
|<a href="#">Object peek( )</a>  |Returns the element on the top of the stack, but does not remove it.|O(1) |
|<a href="#">boolean empty()</a>  |It returns true if nothing is on the top of the stack. Else, returns false.|O(1)|
|<a href="#">int search(Object element)</a>   | It determines whether an object exists in the stack. If the element is found, it returns the position of the element from the top of the stack. Else, it returns -1.| - |

### Implementions 

```java
import java.io.*;
import java.util.*;
 
class Main
{   
    public static void main (String[] args)
    {
        Stack<Integer> stack = new Stack<Integer>();
 
        stack.push(10);
        stack.push(3);
        stack.push(5);
        stack.push(20);
        System.out.println("Current Stack [  bottom to top ]");
        for(Integer i : stack){
            System.out.print(" "+i);
        }
        System.out.println("Popped : "+ stack.pop());
        stack.push(7);
        System.out.println("Peak : " + stack.peek()) ;
        System.out.println("Element 3 at position : " + stack.search(3));
    }
}

```


Output:
```
Current Stack
10 3 5 20
Popped : 20
Peak : 7
Element 3 at position : 3
```


