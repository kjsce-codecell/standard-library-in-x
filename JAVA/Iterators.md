# Iterators in JAVA

- ### Simple and Easy method (For-each Style)
  Write collection name right side of colon : in for-each loop and Collection variable in left side of colon.
  
For example.
  
```java
  
 ArrayList<Integer> al=new ArrayList<>();     //Collection declaration
 
 al.add(2); al.add(3); al.add(4);             // populating data
 
 for(Integer x: al){
 
 System.out.println(x);
 
 }
 
 ```
  
  Output
 ```
 2
 
 3
 
 4
 ```
 

- ### Iterator
In Java, Iterator is an interface available in Collection framework in java.util package. It is a Java Cursor used to iterate a 

collection of objects.

- It is used to traverse a collection object elements one by one.
- It is available since Java 1.2 Collection Framework.
- It is applicable for all Collection classes. So it is also known as Universal Java Cursor.
- It supports both READ and REMOVE Operations.
- Compare to Enumeration interface, Iterator method names are simple and easy to use.
- In java ```Iterator``` is class and Object of this class is used to iterate over certain collections.

Iterator is like pointer which points to location.

In this section, we will discuss about Java Iterator methods in-brief. We will explore these methods in-depth with some useful examples 
in the coming section.

- boolean hasNext():Returns true if the iteration has more elements.
- E next(): Returns the next element in the iteration.
- default void remove(): Removes from the underlying collection the last element returned by this iterator.
- default void forEachRemaining(Consumer action): Performs the given action for each remaining element until all elements have been   processed or the action throws an exception.


Even Every Collection has ```iterator()``` method which returns reference of Iterator object which we can use to iterate over Collection.

Iterator object has .next() method which returns next element of collection and increments pointer.

hasNext() method which returns boolean value which represents existence of next element in collection.

So by using both the methods we can iterate over collection.

For example.
  
```java
  
 ArrayList<Integer> al=new ArrayList<>();   //Collection declaration
  
  al.add(2); al.add(3); al.add(4);       // populating data
 
 Iterator<Integer> it=al.iterator();         //  '<>'  these Brackets should contain type of objects you have added in Collection 
 
 while(it.hasNext()){
  Integer x=it.next();
  System.out.println(x);
 }
 
  ```
  
   Output
 ```
 2
 
 3
 
 4
 ```
 
- ### ListIterator
 **Note** : Collections are of different types for e.g Lists, maps,sets and many more.
 
 Normal Iterator object can only be incremented but ListIterator Object can be decremented as well.
 
 Hence it is most powerful iterator object.
 
 hasPrevious() and previous() have similar meaning as hasNext() and next() methods.
 
``public interface ListIterator <E> extends Iterator<E>  ``

An iterator for lists that allows the programmer to traverse the list in either direction, modify the list during iteration, and obtain 

the iterator's current position in the list. A ListIterator has no current element; its cursor position always lies between the element 

that would be returned by a call to previous() and the element that would be returned by a call to next(). An iterator for a list of 

Note that the remove() and set(Object) methods are not defined in terms of the cursor position; they are defined to operate on the last 

element returned by a call to next() or previous().

This interface is a member of the Java Collections Framework.
 
 ```java
 
   
 ArrayList<Integer> al=new ArrayList<>();   //Collection declaration
  
  al.add(2); al.add(3); al.add(4);       // populating data
 
 ListIterator<Integer> it=al.listIterator();         //  '<>'  these Brackets should contain type of objects you have added in Collection 
 
 while(it.hasNext()){
  Integer x=it.next();
  if(it.hasPrevious()){
  	Integer y=it.previous();
  	System.out.println("Previous "+y);
  }
  it.next();
  System.out.println("Next "+x);

 }
 
 ```
 
**Output**
```
Previous 2

Next 2

Previous 3

Next 3

Previous 4

Next 4

```



 
