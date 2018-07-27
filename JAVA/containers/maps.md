<div align="center">
	<h1 align="center">Maps</h1>
</div>


A map contains values on the basis of key i.e. key
and value pair. Each key and value pair is known as an entry. Map contains only unique keys.
Map is useful if you have to search, update or delete elements on the basis of key.

## HashMaps
Java HashMap class implements the map interface by using a hashtable. It inherits AbstractMap class and implements Map
interface.
The important points about Java HashMap class are:

* A HashMap contains values based on the key.
* It contains only unique elements.
* It may have one null key and multiple null values.
* It maintains no order.

**HashMap Class Declaration**
```java
public class HashMap<K,V> extends AbstractMap<K,V>implements Map<K,V>, Cloneable, Serializable
```
*Where*
* K: It is the type of keys maintained by this map.
* V: It is the type of mapped values.

**Constructors of Java HashMap class :**

| Constructor | Description |
| :---------------| :--------------------|
|HashMap()|	It is used to construct a default HashMap.
|HashMap(Map m)	|It is used to initializes the hash map by using the elements of the given Map object m.
|HashMap(int capacity)	|It is used to initializes the capacity of the hash map to the given integer value, capacity.
|HashMap(int capacity, float fillRatio)|	It is used to initialize both the capacity and fill ratio of the hash map by using its arguments.|


**Methods of HashMaps Class**

| Method | Description |
| :------------------- | :------------------ |
|void clear()|	It is used to remove all of the mappings from this map.|
| boolean containsKey(Object key) |	It is used to return true if this map contains a mapping for the specified key.|
| boolean containsValue(Object value)	 | It is used to return true if this map maps one or more keys to the specified value.|
| boolean isEmpty()|	It is used to return true if this map contains no key-value mappings.|
|Object clone()|	It is used to return a shallow copy of this HashMap instance: the keys and values themselves are not cloned.|
|Set entrySet() |	It is used to return a collection view of the mappings contained in this map. |
| Set keySet()	| It is used to return a set view of the keys contained in this map.|
|Object put(Object key, Object value)|	It is used to associate the specified value with the specified key in this map.|
|int size()|	It is used to return the number of key-value mappings in this map.|
|Collection values()	|It is used to return a collection view of the values contained in this map|

### Example
``` java
import java.util.*;  
class TestCollection13{  
 public static void main(String args[]){  
  HashMap<Integer,String> hm=new HashMap<Integer,String>();  
  hm.put(100,"Amit");  
  hm.put(101,"Vijay");  
  hm.put(102,"Rahul");  
  for(Map.Entry m:hm.entrySet()){  
   System.out.println(m.getKey()+" "+m.getValue());  
  }  
 }  
}  
```
#### Output
```java
102 Rahul
100 Amit
101 Vijay
```




## TreeMaps

Java TreeMap class implements the Map interface by using a tree. It provides an efficient means of storing key/value pairs in sorted order.

The important points about Java TreeMap class are:

* A TreeMap contains values based on the key.
*  It implements the NavigableMap interface and extends AbstractMap class.
* It contains only unique elements.
* It cannot have null key but can have multiple null values.
* It is same as HashMap instead maintains ascending order.

**Tree Map class declaration**

```java
public class TreeMap<K,V> extends AbstractMap<K,V>implements NavigableMap<K,V>, Cloneable, Serializable  
```
*Where*
* K: It is the type of keys maintained by this map.
* V: It is the type of mapped values.

**Constructors of Java TreeMap class :**

|Constructor| Description|
| :---------------| :--------------------|
|TreeMap()|	It is used to construct an empty tree map that will be sorted using the natural order of its key.
|TreeMap(Comparator comp)|	It is used to construct an empty tree-based map that will be sorted using the comparator comp.
|TreeMap(Map m)|	It is used to initialize a tree map with the entries from m, which will be sorted using the natural order of the keys.
|TreeMap(SortedMap sm)|	It is used to initialize a tree map with the entries from the SortedMap sm, which will be sorted in the same order as sm.|

**Methods of Java TreeMap class**

| Method| Description |
| :-----------------| :---------------------|
|boolean containsKey(Object key) |	It is used to return true if this map contains a mapping for the specified key.|
|boolean containsValue(Object value)|	It is used to return true if this map maps one or more keys to the specified value.
|Object firstKey()	|It is used to return the first (lowest) key currently in this sorted map.
|Object get(Object key)|	It is used to return the value to which this map maps the specified key.|
|Object lastKey()|	It is used to return the last (highest) key currently in this sorted map.
|Object remove(Object key)	|It is used to remove the mapping for this key from this TreeMap if present.|
|void putAll(Map map)|	It is used to copy all of the mappings from the specified map to this map.
|Set entrySet()|	It is used to return a set view of the mappings contained in this map.|
|int size()|	It is used to return the number of key-value mappings in this map.|
|Collection values()|	It is used to return a collection view of the values contained in this map.


### Example

```java
import java.util.*;  
class TestCollection15{  
 public static void main(String args[]){  
  TreeMap<Integer,String> hm=new TreeMap<Integer,String>();  
  hm.put(100,"Amit");  
  hm.put(102,"Ravi");  
  hm.put(101,"Vijay");  
  hm.put(103,"Rahul");  
  for(Map.Entry m:hm.entrySet()){  
   System.out.println(m.getKey()+" "+m.getValue());  
  }  
 }  
}  
```
#### Output
```java
100 Amit
101 Vijay
102 Ravi
103 Rahul
```
**Note :**
###### Difference between Hash Map and Tree Maps :

|HashMap| TreeMap|
| :--------------- |  :--------------|
|1) HashMap can contain one null key.|	TreeMap can not contain any null key.|
|2) HashMap maintains no order.|	TreeMap maintains ascending order.|


## LinkedHashMap
Java LinkedHashMap class is Hash table and Linked list
implementation of the Map interface, with predictable
iteration order. It inherits HashMap class and
implements the Map interface.

The important points about Java LinkedHashMap class
are:
* A LinkedHashMap contains values based on the key.
* It contains only unique elements.
* It may have one null key and multiple null values.
* It is same as HashMap instead maintains insertion order.

**LinkedMaps Class Declaration**
```java
public class LinkedHashMap<K,V> extends HashMap<K,V>implements Map<K,V>  
```
* K: It is the type of keys maintained by this map.
* V: It is the type of mapped values.

**Constructors of Java LinkedHashMap class :**

|Constructor| Description|
| :---------------| :--------------------|
|LinkedHashMap()|	It is used to construct a default LinkedHashMap.
|LinkedHashMap(int capacity)|	It is used to initialize a LinkedHashMap with the given capacity.
|LinkedHashMap(int capacity, float fillRatio)	|It is used to initialize both the capacity and the fillRatio.
|LinkedHashMap(Map m)|	It is used to initialize the LinkedHashMap with the elements from the given Map class m.|

**Methods of LinkedHashMap Class**

|Method|Description |
| :----------------| :-------------------|
|Object get(Object key) |	It is used to return the value to which this map maps the specified key.
|void clear()	|It is used to remove all mappings from this map.
|boolean containsKey(Object key)|	It is used to return true if this map maps one or more keys to the specified value.|

###### Example
```java
import java.util.*;  
class TestCollection14{  
 public static void main(String args[]){  

  LinkedHashMap<Integer,String> hm=new LinkedHashMap<Integer,String>();  

  hm.put(100,"Amit");  
  hm.put(101,"Vijay");  
  hm.put(102,"Rahul");  

for(Map.Entry m:hm.entrySet()){  
   System.out.println(m.getKey()+" "+m.getValue());  
  }  
 }  
}  
```
**Output**
```java
100 Amit
101 Vijay
102 Rahul
```
