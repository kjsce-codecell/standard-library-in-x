# Dictionary
Each key is separated from its value by a colon (:), the items are separated by commas, and the whole thing is enclosed in curly braces.
### clear()
The syntax of clear() is `dict.clear()`
The clear() method removes all items from the dictionary. It doesnt take any parameters and doesnt return any value( returns `None`).
Example:
```python
d = {1: "one", 2: "two"}
d.clear()
print('d =', d)
```
Output:
```python
d = {}
```
Elements can also be removed by assingning empty dictionary `{}`  .
However, there is a difference between the two if there is a variable referencing the dictionary.
Example:
```python
d = {1: "one", 2: "two"}
d1 = d
d.clear()
print('Removing items using clear()')
print('d =', d)
print('d1 =', d1)
d = {1: "one", 2: "two"}
d1 = d
d = {}
print('Removing items by assigning {}')
print('d =', d)
print('d1 =', d1)
```
Output:
```python
Removing items using clear()
d = {}
d1 = {}
Removing items by assigning {}
d = {}
d1 = {1: 'one', 2: 'two'}
```




### copy()
The syntax of copy() is `dict.copy()`
They copy() method returns a shallow copy of the dictionary.It doesn't modify the original dictionary.
Example:
```python
original = {1:'one', 2:'two'}
new = original.copy()
print('Orignal: ', original)
print('New: ', new)
```
Output:
```python
Orignal:  {1: 'one', 2: 'two'}
New:  {1: 'one', 2: 'two'}
```

### fromkeys()
The syntax of fromkeys() method is:
`dictionary.fromkeys(sequence[, value])`
The fromkeys() method creates a new dictionary from the given sequence of elements with a value provided by the user.
The fromkeys() method takes two parameters:
- sequence - sequence of elements which is to be used as keys for the new dictionary.
- value (Optional) - value which is set to each each element of the dictionary.

The fromkeys() method returns a new dictionary with the given sequence of elements as the keys of the dictionary.
If the value argument is set, each element of the newly created dictionary is set to the provided value.
Example:
```python
keys = {'a', 'e', 'i', 'o', 'u' }
value = 'vowel'
vowels = dict.fromkeys(keys, value)
print(vowels)
```
Output:
```python
{'a': 'vowel', 'u': 'vowel', 'o': 'vowel', 'e': 'vowel', 'i': 'vowel'}
```



### get()
The syntax of get() is:
`dict.get(key[, value])`
The get() method returns the value for the specified key if key is in dictionary.
The get() method takes maximum of two parameters:
- key - key to be searched in the dictionary.
- value (optional) - Value to be returned if the `key` is not found. The default value is `None`.

The get() method returns:
the value for the specified key if key is in dictionary.
- `None` if the `key` is not found and value is not specified.
- `value` if the `key` is not found and value is specified.

Example:
```python
person = {'name': 'Barney', 'age': 21}
print('Name: ', person.get('name'))
print('Age: ', person.get('age'))
print('Salary: ', person.get('salary'))
print('Salary: ', person.get('salary', 0.0))
```
Output:
```python
Name:  Barney
Age:  21
Salary:  None
Salary:  0.0
```


### items()
The syntax of items() method is:
`dictionary.items()`
The items() method returns a view object that displays a list of dictionary's (key, value) tuple pairs.
Example:
```python
abc = { 'One': 1, 'Two': 2, 'Three': 3 }
print(abc.items())
```
Output:
```python
dict_items([('One', 1), ('Two', 2), ('Three', 3)])
```



### keys()
The syntax of keys() is:
`dict.keys()`
The keys() method returns a view object that displays a list of all the keys in the dictionary. When the dictionary is changed, the view object also reflect these changes.
Example:
```python
person = {'name': 'Abc', 'age': 21, 'salary': 1200.0}
print(person.keys())
empty_dict = {}
print(empty_dict.keys())
```
Output:
```python
dict_keys(['name', 'age', 'salary'])
dict_keys([])
```

### pop()
The syntax of pop() method is
`dictionary.pop(key[, default])`
The pop() method removes and returns an element from a dictionary having the given key.
The pop() method takes two parameters:
- key - key which is to be searched for removal
- default - value which is to be returned when the key is not in the dictionary

The pop() method returns:
- If key is found - removed/popped element from the dictionary
- If key is not found - value specified as the second argument (default)
- If key is not found and default argument is not specified - KeyError exception is raised

Example:
```python
sales = { 'apple': 2, 'orange': 3, 'grapes': 4 }
element = sales.pop('apple')
print('The popped element is:', element)
print('The dictionary is:', sales)
```
Output:
```python
The popped element is: 2
The dictionary is: {'orange': 3, 'grapes': 4}
```


### popitem()
The syntax of popitem() is:
`dict.popitem()`
The popitem() returns and removes an arbitrary element (key, value) pair from the dictionary.
The popitem()
- returns an arbitrary element (key, value) pair from the dictionary.
- removes an arbitrary element (the same element which is returned) from the dictionary.

Example:
```python
person = {'name': 'Abc', 'age': 21, 'salary': 1200.0}
result = person.popitem()
print('person = ',person)
print('Return Value = ',result)
```
Output:
```python
person =  {'name': 'Abc', 'salary': 1200.0}
result =  ('age', 21)
```

The popitem() raises a `KeyError` error if the dictionary is empty.

### setdefault()
The syntax of setdefault() is:
`dict.setdefault(key[, default_value])`
The setdefault() method returns the value of a key (if the key is in dictionary). If not, it inserts key with a value to the dictionary.
The setdefault() takes maximum of two parameters:
- key - key to be searched in the dictionary
- default_value (optional) - `key` with a value `default_value` is inserted to the dictionary if key is not in the dictionary. If not provided, the `default_value` will be `None`.

The setdefault() returns:
- value of the `key` if it is in the dictionary.
- None if key is not in the dictionary and default_value is not specified.
- `default_value` if `key` is not in the dictionary and `default_value` is specified.


Example:
```python
person = {'name': 'Abc', 'age': 21}
age = person.setdefault('age')
print('person = ',person)
print('Age = ',age)
```
Output:
```python
person =  {'name': 'Abc', 'age': 21}
Age =  21
```

### update()
The syntax of update() is:
`dict.update([other])`
The update() method updates the dictionary with the elements from another dictionary object or from an iterable of key/value pairs. It adds element(s) to the dictionary if the key is not in the dictionary. If the key is in the dictionary, it updates the key with the new value.
The update() method takes either a dictionary or an iterable object of key/value pairs (generally tuples).
If update() is called without passing parameters, the dictionary remains unchanged.
Example:
```python
d = {1: "one", 2: "three"}
d1 = {2: "two"}

d.update(d1)
print(d)
d1 = {3: "three"}

d.update(d1)
print(d)```
Output:
```{1: 'one', 2: 'two'}
{1: 'one', 2: 'two', 3: 'three'}
```

### values()
The syntax of values() is:
`dictionary.values()`
The values() method returns a view object that displays a list of all the values in the dictionary.
Example:
```python
sales = { 'apple': 2, 'orange': 3, 'grapes': 4 }
print(sales.values())
```
Output:
```python
dict_values([2, 4, 3])
```

### all()
The syntax of all() method is:
`all(iterable)`
The all() method takes a single parameter:
- iterable - any iterable (list, tuple, dictionary, etc.) which contains the elements.

If all keys (not values) are true or the dictionary is empty, all() returns True. Else, it returns false for all other cases.
Example:
```python
s = {0: 'False', 1: 'False'}
print(all(s))
s = {1: 'True', 2: 'True'}
print(all(s))
s = {1: 'True', False: 0}
print(all(s))
s = {}
print(all(s))

s = {'0': 'True'}
print(all(s))
```
Output:
```python
False
True
False
True
True
```


### any()
The syntax of any() is:
`any(iterable)`
If all keys (not values) are false, any() returns `False`. If at least one key is true, any() returns `True`.
Example:
```python
d = {0: 'False'}
print(any(d))
d = {0: 'False', 1: 'True'}
print(any(d))
d = {0: 'False', False: 0}
print(any(d))
d = {}
print(any(d))

d = {'0': 'False'}
print(any(d))
```
Output:
```python
False
True
False
False
True
```

### len()
The syntax of len() is:
`len(s)`
The len() function returns the number of items (length) of an object.
Failing to pass an argument or passing an invalid argument will raise a `TypeError` exception.
Example:
```python
dict = {'Name': 'Manni', 'Age': 7, 'Class': 'First'}
print ("Length : %d" % len (dict))
```
Output:
```python
Length : 3
```

### sorted()
The syntax of sorted() method is:
`sorted(iterable[, key][, reverse])`
sorted() takes two three parameters:
- iterable - collection (dictionary) or any iterator 
- reverse (Optional) - If true, the sorted list is reversed (or sorted in Descending order)
- key (Optional) - function that serves as a key for the sort comparison

sorted() method returns a sorted list from the given iterable.

Example:
```python
pyDict = {'e': 1, 'a': 2, 'u': 3, 'o': 4, 'i': 5}
print(sorted(pyDict, reverse=True))
```
Output:
```python
['u', 'o', 'i', 'e', 'a']
```


### cmp()
The syntax of cmp() method is:
`cmp(dict1, dict2)`
The method cmp() compares two dictionaries based on key and values. This method returns 0 if both dictionaries are equal, -1 if dict1 < dict2 and 1 if dict1 > dict2.
Example:
```python
dict1 = {'Name': 'Zen', 'Age': 7};
dict2 = {'Name': 'Mac', 'Age': 27};
print "Return Value : %d" %  cmp (dict1, dict2)
```
Output:
```python
Return Value : -1
```







