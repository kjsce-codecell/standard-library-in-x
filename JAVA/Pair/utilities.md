<h1 align="center"><a href="#">Utilities</a></h1>

## Introduction

> <b>java.util</b> contains the collections framework, legacy collection classes, event model, date and time facilities, internationalization, and miscellaneous utility classes (a string tokenizer, a random-number generator, and a bit array).

 > Java Collection simply means a single unit of objects. Java Collection framework provides many interfaces (<b>Set, List, Queue, Deque</b> etc.) and classes (<b>ArrayList, Vector, LinkedList, PriorityQueue, HashSet, LinkedHashSet, TreeSet</b> etc).


## Methods of Collection interface

Method | Description
------------ | -------------
<b>public boolean add(Object element)</b> | This method is used to insert an element in a collection.
<b>public boolean addAll(Collection c)</b>	| This method is used to insert all elements of Collection c in the invoking collection.
<b>public boolean remove(Object element)</b> |	This method is used to delete an element from a collection.
<b>public boolean removeAll(Collection c)</b> | This method is used to delete all the elements of Collection c from the invoking collection.
<b>public boolean retainAll(Collection c)</b> | This method is used to delete all the elements of invoking collection except the elements which are present in specified Collection c.
<b>public int size()</b> |	This method returns the total number of elements in the collection.
<b>public void clear()</b> | This method removes all the elements from the collection.
<b>public boolean contains(Object element)</b> | This method is used to search an element in invoking collection.
<b>public boolean containsAll(Collection c)</b> | This method is used to check if all the elements of Collection c are present in invoking collection or not.
<b>public Iterator iterator()</b> | This method returns an iterator.
<b>public boolean isEmpty()</b> | This method checks if collection is empty.
<b>public boolean equals(Object element)</b> | This method is used to compare objects of collections.

NOTE!- The above methods work for Set and List Interfaces.


## Methods of Iterator interface

Method | Description
------------ | -------------
<b>public boolean hasNext()</b> | It returns true if iterator has more elements.
<b>public Object next()</b>	| It returns the element and moves the cursor pointer to the next element.
<b>public void remove()</b>	| It removes the last elements returned by the iterator. It is rarely used.

## Example
```java
//This example demonstrates the use of all methods listed above
import java.util.*;

public class Main
{
    public static void main(String args[])
    {
        ArrayList <Integer> num= new ArrayList<Integer>();
        ArrayList <Integer> even_num= new ArrayList<Integer>();
        ArrayList <Integer> odd_num= new ArrayList<Integer>();
        
        //inserting elements using add() method
        for(int i=1;i<=10;i++)
            num.add(i);
        
        System.out.println("Original list of numbers is: ");
        //Print numbers using iterator
        Iterator it = num.iterator(); 
        while(it.hasNext())
        System.out.println(it.next());
                
        for(int i=2;i<=10;i=i+2)
            even_num.add(i);
        
        System.out.println("List of even numbers is: ");
        Iterator even_it = even_num.iterator(); 
        while(even_it.hasNext())
        System.out.println(even_it.next());
        
        
        //inserting all elements of num in odd_num
        odd_num.addAll(num);
        
        //removing elements of even_num from odd_num
        odd_num.removeAll(even_num);
        
        System.out.println("List of odd numbers is: ");
        Iterator odd_it = odd_num.iterator(); 
        while(odd_it.hasNext())
        System.out.println(odd_it.next());
        
        
        num.clear();
        int n =  num.size();
        int e = even_num.size();
        System.out.println("Size of num list is "+n+" and that of even_num list is "+e);
        
        //check if even_num list contains 10
        boolean check = even_num.contains(10);
        System.out.println("even_num contains 10? "+check);
        
        //check if even_num contains all elements of odd_num
        check = even_num.containsAll(odd_num);
        System.out.println("even_num contains odd_num? "+check);
        boolean empty = num.isEmpty();
        System.out.println("num is empty? "+empty);
        //even if any one element of odd_num is not present in even_num, the method will return false
        
        //check if temp is equl to odd_num
        ArrayList <Integer> temp= new ArrayList<Integer>();
        temp.addAll(odd_num);
        check= temp.equals(odd_num);
        System.out.println("temp list equal to odd_num? "+check);
        
        
    }
}
```

## Output
```
Original list of numbers is: 
1
2
3
4
5
6
7
8
9
10
List of even numbers is: 
2
4
6
8
10
List of odd numbers is: 
1
3
5
7
9
Size of num list is 0 and that of even_num list is 5
even_num contains 10? true
even_num contains odd_num? false
num is empty? true
temp list equal to odd_num? true
```


## Methods of Map Interface
Method | Description
------------ | -------------
<b>Object put(Object key, Object value)</b>	| It is used to insert an entry in this map.
<b>void putAll(Map map)</b>	| It is used to insert the specified map in this map.
<b>Object remove(Object key)</b>	| It is used to delete an entry for the specified key.
<b>Object get(Object key)</b>	| It is used to return the value for the specified key.
<b>boolean containsKey(Object key)</b>	| It is used to search the specified key from this map.
<b>Set keySet()</b>	| It is used to return the Set view containing all the keys.
<b>Set entrySet()</b>	| It is used to return the Set view containing all the keys and values.


## Methods of Map.Entry Interface

Entry is the sub interface of Map. So we will be accessed it by Map.Entry name. It provides methods to get key and value.

Method | Description
------------ | -------------
<b>Object getKey()</b>	| It is used to obtain key.
<b>Object getValue()</b>	| It is used to obtain value.


Maps can also be traversed using Iterator.

## Example
```java
//This example demonstrates use of all Map Interface methods
import java.util.*;  
class Main
{  
  public static void main(String args[])
  {  
   Map<Integer,String> map=new HashMap<Integer,String>(); 
   Map<Integer,String> copy=new HashMap<Integer,String>();
   map.put(100,"ABC");  
   map.put(101,"XYZ");  
   map.put(102,"PQR");  
   
   //traversing map
   System.out.println("Traversing map:");
   for(Map.Entry m:map.entrySet())  
    System.out.println(m.getKey()+" "+m.getValue());
   
   
   System.out.println("Value of key 100 in map is " +map.get(100));
   
   //inserting all elements of map into copy
   copy.putAll(map);
   System.out.println("Traversing copy: ");
   for(Map.Entry c:copy.entrySet())  
    System.out.println(c.getKey()+" "+c.getValue());
   
   
   map.remove(102);
   System.out.println("Removed key 102 from map.");
   boolean check = map.containsKey(102);
   
   System.out.println("map contains key 102? "+check);
   
 }  
}  
```

## Output
```
Traversing map:
100 ABC
101 XYZ
102 PQR
Value of key 100 in map is ABC
Traversing copy: 
100 ABC
101 XYZ
102 PQR
Removed key 102 from map.
map contains key 102? false
```

