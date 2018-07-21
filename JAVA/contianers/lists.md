<h1 align="center">Lists</h1>

+<h1>Arraylists</h1>

>Java ArrayList class uses a dynamic array for storing the elements. It inherits AbstractList class and implements List interface

>ArrayList in Java can be seen as similar to vector in C++. 

> ArrayList only supports object entries, not the primitive data types(like int, float, char, etc).

>Java ArrayList class maintains insertion order

>Java ArrayList allows random access because array works at the index basis.

>In Java ArrayList class, manipulation is slow because a lot of shifting needs to be occurred if any element is removed from the array list.



###Operations

|<center>Function</center>  |<center>What it does?</center>  |  <center> Complexity </center>
| :------------- | :------------- | :------------- |
| <a href="#">void clear()</a>   | It is used to remove all of the elements from this list.|O(1)
|<a href="#">void add(int index, Object element)</a>  | It is used to insert the specified element at the specified position index in a list.|O(1) if added at the end,O(n) if added in the interior
|<a href="#">int indexOf(Object o)</a>  | It is used to return the index in this list of the first occurrence of the specified element, or -1 if the List does not contain this element |O(n)
|<a href="#">int lastIndexOf(Object o)</a>  |It is used to return the index in this list of the last occurrence of the specified element, or -1 if the list does not contain this element.|O
|<a href="#">Object[] toArray()</a>   |It is used to return an array containing all of the elements in this list in the correct order.|O(n)
|<a href="#">Object clone()</a>  | It is used to return a shallow copy of an ArrayList.|O()
|<a href="#">void trimToSize()</a> |It is used to trim the capacity of this ArrayList instance to be the list's current size.|


