<div align="center">
	<h1 align="center">Map</h1>
</div>

<h2  > Introduction:</h2>

A map is a datastructure to store a key value pair.

<h2 > Import:</h2>

```cpp
#include <map>
```

<h2 > Properties:</h2>

1. It is a datastructure which stores a key value pair.

2. Elements are referenced using their keys not by position(unlike arrays).

3. The elements are stored in orders(i.e. they are pre-sorted).

4. Internal implementation is like a binary search tree.

5. Size is increased and decreased automatically, according to storage needs.

6. Keys are unique. Same key cannot be used to store more than 1 values.

<h2 > Usage:</h2>
<h3>1. Initialize</h3>

Template has two data types first for key and second for value. User defined comparator can be added as third parameter.

<h3>2. Constructors</h3>
<h4>1. Default:</h4> Makes an empty container.
<br>
```cpp
map<Type1, Type2> var_name; //Starts the var_name map with no key value pairs
```

<br>

<h4>2. Range:</h4> Used to copy range of elements from one map to other.

```cpp
map<Type1, Type2> var_name1;
//fill 10 elements in var_name
//If want to copy elements from 0-10
map<Type1, Type2>  var_name2(var_name1.begin(),var_name1.end());
```

Note: The template types should be same.<br>
<h4>3. Copy:</h4>
Copy entire container in new map object.<br>

```cpp
map<Type1, Type2> var_name(map_object);
```

Copies the map_object in var_name. The map_object should be of same type.<br><br>

<h3>3. Insert</h3>
<h4>1. Insert using key and value directly, using array-like syntax.</h4>

```cpp
map<char, int> map_object;
map_object['a'] = 10;
```

<h5 style="display:inline">Note:</h5> This method overwrites the previous value (if any).

<h4>2. Insert using insert()</h4>

```cpp
map_object.insert(make_pair<char, int>('b', 20));
```

<h5 style="display:inline">Note:</h5> This method does not overwrite the previous value (if any) but returns an object pointing to the previous value and new value is not inserted.

<h4>3. Returned object of insert()</h4>

The return_object is a pair, first is an iterator to inserted element(or the same key element if insertion was prevented) and second is a boolean object which is true if insert happened and is false if it was stopped.
<br>

```cpp
#include<maps>
map<char,int> mymap;
mymap.insert ( pair<char,int>('a',100) );
mymap.insert ( pair<char,int>('z',200) );

pair<std::map<char,int>::iterator,bool> ret;
ret = mymap.insert (pair<char,int>('z',500) );
if (ret.second==false) {
	cout << "element 'z' already existed";
	cout << " with a value of " << ret.first->second << '\n';
}
```

<h3>4. Access</h3>

<h4>1. Access using key directly</h4>

```cpp
cout << mymap['b'];
```

<h4>2. Access using at()</h4>

```cpp
cout << mymap.at('b');
```

<h4>3. Access using find()</h4>

```cpp
cout << mymap.find('b')->second;
cout << (*mymap.find('b')).second;
```
<h5 style="display:inline">Note:</h5> This method returns an iterator to the elements.

<h3>5. Delete</h3>
<h4>1. erase()</h4>

```cpp
mymap.erase('b');
it = mymap.find('a');
mymap.erase(it, mymap.end());
```

<h3>6. Iteration</h3>

<h4>1. Begin()</h4>Returns an iterator to first element in the map.
<h4>2. End()</h4>Returns an iterator to the end of map (<b>Not the last element</b>).

```cpp
map<char,int> mymap;

mymap['b'] = 100;
mymap['a'] = 200;
mymap['c'] = 300;
for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); it++)
	std::cout << it->first << " => " << it->second << '\n';
return 0;
```

<h2 > Complexities</h2>

<h3>Insert: O(log(n))</h3>
<h3>Access: O(log(n))</h3>
<h3>Delete: O(1) + Access = O(log(n))</h3>


<div align="center">
	<h1 align="center">Unordered Map</h1>
</div>

<h2 >Introduction: </h2>

An unordered map is a datastructure to store a key value pair and access it fast enough.

<h2 >Import:</h2>

```cpp
#include <unordered_map>
```

<h2 >Properties: </h2>

1. It is a datastructure which stores a key value pair.

2. Elements are referenced using their keys not by position(unlike arrays).

3. The elements are not sorted.

4. Internal implementation is using hashing.

5. Size is increased and decreased automatically, according to storage needs.

6. Keys are unique. Same key cannot be used to store more than 1 values.

7. Introduced in C++11.

<h2 >Usage </h2>
<h3>1. Initialize</h3>

Template has two data types first for key and second for value.

<h3>2. Constructors</h3>
<h4>1. Default:</h4> Makes an empty container.

```cpp
unordered_map<Type1, Type2> var_name; //Starts the var_name map with no key value pairs
```

<br>

<h4>2. Range:</h4> Used to copy range of elements from one map to other.

```cpp
unordered_map<Type1, Type2> var_name1;
//fill 10 elements in var_name
//If want to copy elements from 0-10
unordered_map<Type1, Type2>  var_name2(var_name1.begin(),var_name1.end());
```

Note: The template types should be same.<br>
<h4>3. Copy:</h4>
Copy entire container in new map object.<br>

```cpp
unordered_map<Type1, Type2> var_name(map_object);
```

Copies the map_object in var_name. The map_object should be of same type.<br><br>
<h4>4. List:</h4>
Initialize a list as a key value pair.


<h3>3. Insert</h3>
<h4>1. Insert using key and value directly, using array-like syntax.</h4>

```cpp
unordered_map<char, int> map_object;
map_object['a'] = 10;
```

<h5 style="display:inline">Note:</h5> This method overwrites the previous value (if any).

<h4>2. Insert using insert()</h4>

```cpp
map_object.insert(make_pair<char, int>('b', 20));
```

<h5 style="display:inline">Note:</h5> This method does not overwrite the previous value (if any) but returns an object pointing to the previous value and new value is not inserted.

<h4>3. Returned object of insert()</h4>

The return_object is a pair, first is an iterator to inserted element(or the same key element if insertion was prevented) and second is a boolean object which is true if insert happened and is false if it was stopped.

```cpp
unordered_map<char,int> mymap;
mymap.insert ( pair<char,int>('a',100) );
mymap.insert ( pair<char,int>('z',200) );

pair<std::map<char,int>::iterator,bool> ret;
ret = mymap.insert (pair<char,int>('z',500) );
if (ret.second==false) {
	cout << "element 'z' already existed";
	cout << " with a value of " << ret.first->second << '\n';
}
```

<h3>4. Access</h3>

<h4>1. Access using key directly</h4>

```cpp
cout << mymap['b'];
```

<h4>2. Access using at()</h4>

```cpp
cout << mymap.at('b');
```

<h4>3. Access using find()</h4>

```cpp
cout << mymap.find('b')->second;
cout << (*mymap.find('b')).second;
```

<h5 style="display:inline">Note:</h5> This method returns an iterator to the elements.

<h3>5. Delete</h3>
<h4>1. erase()</h4>

```cpp
mymap.erase('b');
it = mymap.find('a');
mymap.erase(it, mymap.end());
```

<h3>6. Iteration</h3>

<h4>1. Begin()</h4>Returns an iterator to first element in the map.
<h4>2. End()</h4>Returns an iterator to the end of map (<b>Not the last element</b>).

```cpp
unordered_map<char,int> mymap;

mymap['b'] = 100;
mymap['a'] = 200;
mymap['c'] = 300;
for (unordered_map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); it++)
	cout << it->first << " => " << it->second << '\n';
return 0;
```

<h2 >Complexities </h2>

<h3>Insert (Average Case): O(1)</h3>
<h3>Insert (Worst Case): O(n)</h3>
<h3>Access: O(1)</h3>
<h3>Delete (Average Case): O(1)</h3>
<h3>Delete (Worst Case): O(n)</h3>


<div align="center">
	<h1 align="center">Multimap</h1>
</div>

<h2 > Introduction: </h2>

A Multimap is a datastructure to store a key value pair having multiple keys.

<h2 > Import: </h2>

```cpp
#include <map>
```

<h2 > Properites: </h2>

Same as maps but only it can have multiple values for a key.

<h2 > Usage: </h2>
<h3>1. Initialize</h3>

Template has two data types first for key and second for value. User defined comparator can be added as third parameter.

<h3>2. Constructors</h3>
<h4>1. Default:</h4> Makes an empty container.

```cpp
multimap<Type1, Type2> var_name; //Starts the var_name map with no key value pairs
```

<br>

<h4>2. Range:</h4> Used to copy range of elements from one map to other.

```cpp
multimap<Type1, Type2> var_name1;
//fill 10 elements in var_name
//If want to copy elements from 0-10
multimap<Type1, Type2>  var_name2(var_name1.begin(),var_name1.end());
```

Note: The template types should be same.<br>
<h4>3. Copy:</h4>
Copy entire container in new map object.<br>

```cpp
multimap<Type1, Type2> var_name(map_object);
```

Copies the map_object in var_name. The map_object should be of same type.<br><br>
<h3>3. Insert</h3>
<h4>1. Insert using insert()</h4>
This method inserts an element with the key and value provided.
Use <a href = "http://www.cplusplus.com/reference/map/multimap/find/">this</a> link because it is very similar to maps and unordered_maps.
<h3>4. Access</h3>
<h4>1. Access using find()</h4>
Returns an iterator to an arbitrary element of possibly multiple elements having the given key.<br>
<a href="http://www.cplusplus.com/reference/map/multimap/find/">Example</a>

<h4>2. Access using equal_range()</h4>
Returns a pair of iterators. First is an iterator to the first element having the given key. Second is the iterator to the next to last element having the key.<br>
<a href="http://www.cplusplus.com/reference/map/multimap/equal_range/">Example</a>

<h3>5. Delete</h3>
<h4>1. erase()</h4>
Deletes an element using its iterator. Same as maps and unordered_maps.<br>
<a href="http://www.cplusplus.com/reference/map/multimap/erase/">Example</a>

<h3>6: Iteration</h3>
Same as maps and unordered_maps.<br>
<a href="http://www.cplusplus.com/reference/map/multimap/begin/">Example</a>

<h2 > Complexities </h2>
<h3>Insert: O(log(n))</h3>
<h3>Access: O(log(n))</h3>
<h3>Delete: O(1) + Access = O(log(n))</h3>
