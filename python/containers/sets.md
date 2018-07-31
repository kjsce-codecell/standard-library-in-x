<h1 align="center">Sets</h1>

## Introduction

- A set is an unordered collection data type with no duplicate elements. Sets are iterable and mutable. The elements appear in an arbitrary order when sets are iterated.

- Sets are commonly used for membership testing, removing duplicates entries, and also for operations such as intersection, union, and set difference.

## Creating a set
- To create an empty set, set1 = set( )
- To create a set with a string, set2 = set("Baz")
> set1 = {'b', 'a', 'z'}
- If we create a set with repeated elements: set3=set([1,2,3,2,3,1])
> set3 = {1,2,3}
## Functions :
<!--
| <center>Method name</center> | <center>Exlpanation</center> | <center>Use</center> |
|----|:---|:---|
| **append** | Adds a new item to the end of the list | list.append(item) |
| **insert** |Inserts element at ith position in list | list.insert(i, item) |
| **pop** | Pop and return the last item from the list | list.pop() |
| **pop** | Pop and return the ith item from the list| list.pop(i) |
| **sort** | Modifies a list to be sorted | list.sort() |
| **reverse** | Modifies a list to be in reverse order | list.reverse() |
| **del** |Deletes element in ith position | del l[i] |
| **index**|Returns index of first occurrence of item | list.index(item) |
| **count** |Returns number of occurrences of item | list.count(item) |
| **remove** |Deletes element in ith position | list.remove(item) |
| **extend** |Adds second list to end of first list | l1.extend(l2) | -->

## add()

- Used to add an element to a set.
- Complexity: O(1)
```Python
set1 = set([1,2,3,4,5])
set1.add(6)
print(s1)
```
Output:
```
{1, 2 , 3, 4 ,5 ,6}
```

- Similarly, we can add a tuple
```Python
set1 = set([1,2,3,4,5])
set1.add((6,7))
print(s1)
```
Output:
```
{1, 2, 3, 4, 5 ,(6, 7)}
```

## update()
- adds elements to set; it is an in-place set union operation 
- Complexity: O(len(s)+len(t)), where s is the set and t is the iterable to be added.
```python
set1 = set([1,2,3,4])
set1.update([5,6])
print(set1)
set1.update({7,8})
print(set1)
```
Output:
```
{1,2,3,4,5,6}
{1,2,3,4,5,6,7,8}
```

## discard() and remove()

- Both are used to remove an element from the set.

- Both discard and remove take a single argument, the element to be deleted from the set. If the value is not present, discard() does not do anything. Whereas, remove will raise a KeyError exception.

- Complexity: O(1)
```Python
set1 = set([1,2,3,4,5,6,7])
set1.discard(7)
print(set1)
set1.remove(6)
print(s1)
set1.discard(8)
print(set1)
set1.remove(8)
```
Output:
```
{1,2,3,4,5,6}
{1,2,3,4,5}
{1,2,3,4,5}
 Traceback (most recent call last):

   File "python", line 1, in <module>
KeyError: 8
```

## copy()

- Creates a new set with same elements as original one.
- Complexity: O(n)
```python
set1 = set([1,2,3,4])
set2 = set1.copy()
print(set2)
```
Output:
```
{1,2,3,4}
```

**Using assignment here instead of copy() will create a pointer to the already existing set.**

## clear()
- Removes all elements from the set.
```python
set1 = set([1,2,3,4])
set1.clear()
print(set1)
```
Output:
{ }

## pop()
- Removes and returns arbitrary set element.

- Raises KeyError exception if set is empty.

- Complexity: O(1)
```python
set1 = set([1])
set1.pop() #3
set1.pop() # KeyError: 'pop from an empty set'
```

## difference, intersection, union

- **intersection()** returns a new set with the elements common in both the sets.

- **union()** returns new set with all elements from both the sets.

- **difference()** returns a new set with all items from first set not in second.
```python
set1 = {1,2,3,4}
set2 = {3,4,5,6}
print(set1.union(set2))
print(set1.intersection(set2))
print(set1.difference(set2))
```
Output:
```
{1,2,3,4,5,6}
{3,4}
{1,2}
```

## isdisjoint, issubset, issuperset

- isdisjoint() returns true if intersection of sets is empty otherwise false.

- issubset() returns true if setA is subset of setB, False if not. **<=** operator can also be used to test for issubset. To check for proper subset **<** is used. That is `set1 < set2` would check if set1 is a proper subset of set 2
```python
set1 = {1,2,3,4}
set2 = {1,2,3,4,5,6}
print(set1.isdisjoint(set2))
print(set1.issubset(set2))
print(set2.issuperset(set1))
```
Output:
```
False
True
True
```

## symmetric_difference()

- Returns a set with all the elements that are in the set and the iterable but not both.
```python
s = set("Hello")
p = set("World")
print s.symmetric_difference(p)
```
Output:
```
{'H','e','W','r','d'}
```

## sorting a set
- Returns a list with elemnts of s in sorted order.
- Complexity O(nlogn)
```python
s = set([3,2,1,5,7,6,4])
print(sorted(s))
```
Output:
```
[1,2,3,4,5,6,7]
```
- Note that this returns a list and not a set because sets are not ordered, that is, {2,1} and {1,2} are the same sets.


One example where sets might be used is when we want to count the number of distinct numbers in a given list.
```python
l = [1,2,5,4,2,3,1,5]
s=set(l)
print(len(l)) #number of distinct elements
```

Output:
```
5
```
