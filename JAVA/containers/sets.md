<div align="center">
	<h1 align="center">Sets</h1>
</div>


A Set is a Collection that cannot contain duplicate elements. It models the mathematical set abstraction. The Set interface contains only methods inherited from Collection and adds the restriction that duplicate elements are prohibited.
## HashSets :
* Java HashSet class is used to create a collection that uses a hash table for storage.
* It inherits the AbstractSet class and implements Set interface.
* The important points about Java HashSet class are:
* HashSet stores the elements by using a mechanism called hashing.
* HashSet contains unique elements only.

**Hierarchy of HashSet class** :
The HashSet class extends AbstractSet class which implements Set interface. The Set interface inherits Collection and Iterable interfaces in hierarchical order.

**HashSet class declaration**
```java
public class HashSet<E> extends AbstractSet<E> implements Set<E>, Cloneable, Serializable
```
**Constructors of Java HashSet class :**

|Constructor | Description |
| :---------------| :--------------------|
|HashSet() |	It is used to construct a default HashSet.
|HashSet(Collection c)	|It is used to initialize the hash set by using the elements of the collection c.|
|HashSet(int capacity)|	It is used to initialize the capacity of the hash set to the given integer value capacity. The capacity grows automatically as elements are added to the HashSet.|

**Methods of Java HashSet class:**

| Method | Description|
| :--------------| :------------------
|void clear()	|It is used to remove all of the elements from this set.|
|boolean contains(Object o)|	It is used to return true if this set contains the specified element.
|boolean add(Object o)	|It is used to adds the specified element to this set if it is not already present.
|boolean isEmpty()	|It is used to return true if this set contains no elements.
|boolean remove(Object o)	|It is used to remove the specified element from this set if it is present.
|Object clone()|	It is used to return a shallow copy of this HashSet instance: the elements themselves are not cloned.
|Iterator iterator()	|It is used to return an iterator over the elements in this set.
|int size()|	It is used to return the number of elements in this set.|

##### Example :
```java
import java.util.*;  
class TestCollection9{  
 public static void main(String args[]){  
  //Creating HashSet and adding elements  
  HashSet<String> set=new HashSet<String>();  
  set.add("Ravi");  
  set.add("Vijay");  
  set.add("Ravi");  
  set.add("Ajay");  
  //Traversing elements  
  Iterator<String> itr=set.iterator();  
  while(itr.hasNext()){  
   System.out.println(itr.next());  
  }  
 }  
}  
```
**Output :**
```java
       Ajay
       Vijay
       Ravi
```

## LinkedHashSet :
Java LinkedHashSet class is a Hash table and Linked list implementation of the set interface. It inherits HashSet class and implements Set interface.

The important points about Java LinkedHashSet class are:
* Contains unique elements only like HashSet.
* Provides all optional set operations, and permits null elements.
* Maintains insertion order.

**Hierarchy of LinkedHashSet class**

The LinkedHashSet class extends HashSet class which implements Set interface. The Set interface inherits Collection and Iterable interfaces in hierarchical order.

**LinkedHashSet class declaration**
```java
public class LinkedHashSet<E> extends HashSet<E> implements Set<E>, Cloneable, Serializable
```  
**Constructors of Java LinkedHashSet class**

|Constructor|Description|
| :--------------| :-------------------------|
|HashSet()|	It is used to construct a default HashSet.
|HashSet(Collection c)	|It is used to initialize the hash set by using the elements of the collection c.
|LinkedHashSet(int capacity)|	It is used initialize the capacity of the linkedhashset to the given integer value capacity.
|LinkedHashSet(int capacity, float fillRatio)|	It is used to initialize both the capacity and the fill ratio (also called load capacity) of the hash set from its argument.

**Example :**

```java
import java.util.*;  
class TestCollection10{  
 public static void main(String args[]){  
  LinkedHashSet<String> al=new LinkedHashSet<String>();  
  al.add("Ravi");  
  al.add("Vijay");  
  al.add("Ravi");  
  al.add("Ajay");  
  Iterator<String> itr=al.iterator();  
  while(itr.hasNext()){  
   System.out.println(itr.next());  
  }  
 }  
}  
```
**Output :**
```java
       Ravi
       Vijay
       Ajay
```

## TreeSet :
Java TreeSet class implements the Set interface that uses a tree for storage. It inherits AbstractSet class and implements NavigableSet interface. The objects of TreeSet class are stored in ascending order.

The important points about Java TreeSet class are:
* Contains unique elements only like HashSet.
* Access and retrieval times are quiet fast.
* Maintains ascending order.
* Hierarchy of TreeSet class
* Java TreeSet class implements NavigableSet interface. The NavigableSet interface extends SortedSet, Set, Collection and Iterable interfaces in hierarchical order.

**TreeSet class declaration :**
```java
public class TreeSet<E> extends AbstractSet<E> implements NavigableSet<E>, Cloneable, Serializable
```  
**Constructors of Java TreeSet class :**

|Constructor|Description|
| :-----------------------| :-------------------------|
|TreeSet()	|It is used to construct an empty tree set that will be sorted in an ascending order according to the natural order of the tree set.|
|TreeSet(Collection c)	|It is used to build a new tree set that contains the elements of the collection c.
|TreeSet(Comparator comp)|	It is used to construct an empty tree set that will be sorted according to given comparator.
|TreeSet(SortedSet ss)|	It is used to build a TreeSet that contains the elements of the given SortedSet.|

**Methods of Java TreeSet class :**

|Method| Description |
| :---------------- |:---------------------
|boolean addAll(Collection c)	|It is used to add all of the elements in the specified collection to this set.
|boolean contains(Object o)|	It is used to return true if this set contains the specified element.|
|boolean isEmpty()|	It is used to return true if this set contains no elements.|
|boolean remove(Object o)|	It is used to remove the specified element from this set if it is present.
|void add(Object o)|	It is used to add the specified element to this set if it is not already present.
|void clear()	|It is used to remove all of the elements from this set.
|Object clone()|	It is used to return a shallow copy of this TreeSet instance.
|Object first()|	It is used to return the first (lowest) element currently in this sorted set.
|Object last()|	It is used to return the last (highest) element currently in this sorted set.
|int size()|	It is used to return the number of elements in this set.|

**Example : **
```java
import java.util.*;  
class TestCollection11{  
 public static void main(String args[]){  
  //Creating and adding elements  
  TreeSet<String> al=new TreeSet<String>();  
  al.add("Ravi");  
  al.add("Vijay");  
  al.add("Ravi");  
  al.add("Ajay");  
  //Traversing elements  
  Iterator<String> itr=al.iterator();  
  while(itr.hasNext()){  
   System.out.println(itr.next());  
  }  
 }  
}  
```
**Output :**

```java
Ajay
Ravi
Vijay
```