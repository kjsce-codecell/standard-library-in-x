<h1 align="center">Queue</h1>

<br>

>Java Queue interface orders the element in FIFO(First In First Out) manner. In FIFO, first element is removed first and last element is removed at last.

<br>


 ### Operations


|<center>Function</center>  | <center>What it does?</center>  |  <center> Complexity </center> |
| :------------- | :------------- | :------------- |
| <a href="#">boolean add(object)</a>  |It is used to insert the specified element into this queue and return true upon success.|O(log(n)) |
| <a href="#">boolean offer(object)</a>   |It is used to insert the specified element into this queue.|O(log(n))
|<a href="#">Object remove()</a>  |It is used to retrieves and removes the head of this queue.|O(log(n))
|<a href="#">Object poll()</a>  |It is used to retrieves and removes the head of this queue, or returns null if this queue is empty.|O(1)
|<a href="#">Object peek()</a>   |It is used to retrieves, but does not remove, the head of this queue, or returns null if this queue is empty.|O(1)

<h1 align="center">Priority Queues</h1>
 
> Java Priority Queue is implemented using Heap Data Structures

 ### Implementions 



```java
// Java progrm to demonstrate working of priority queue in Java
import java.util.*;
 
class Example
{
    public static void main(String args[])
    {
       
        PriorityQueue<String> pQueue =
                          new PriorityQueue<String>();
 
        pQueue.add("Shivam");
        pQueue.add("Neel");
        pQueue.add("Devansh");

        System.out.println("Head value using peek function:"
                                           + pQueue.peek());
 
        System.out.println("The queue elements:");
        Iterator itr = pQueue.iterator();
        while (itr.hasNext())
            System.out.println(itr.next());
 
        pQueue.poll();
        System.out.println("After removing an element" +
                           "with poll function:");
        Iterator<String> itr2 = pQueue.iterator();
        while (itr2.hasNext())
            System.out.println(itr2.next());
 
        pQueue.remove("Neel");
        System.out.println("after removing Java with" +
                           " remove function:");
        Iterator<String> itr3 = pQueue.iterator();
        while (itr3.hasNext())
            System.out.println(itr3.next());
 
 
        }
}
```


Output:
```
Head value using peek function:Shivam
The queue elements:
Shivam
Neel
Devansh

After removing an elementwith poll function:
Neel
Devansh
after removing Neel with remove function:
Devansh
```


