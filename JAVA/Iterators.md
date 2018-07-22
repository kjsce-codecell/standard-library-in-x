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

In java ```Iterator``` is class and Object of this class is used to iterate over certain collections.

Iterator is like pointer which points to location.

**In java, iterator always points to location in middle of two objects not on the object.**


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


 
