<h1 align="center">Lists</h1>

## Introduction

- A list is an ordered collection of zero or more references to Python data objects. Lists are written as comma-delimited values enclosed in square brackets. Lists are heterogeneous, meaning that the data objects need not all be from the same class and the collection can be assigned to a variable. Lists are enclosed in [ ].

## Operations :
| <center>Operation Name</center> | <center>Explanation</center> | <center>Operator</center> |
|----|:---|:---|
| **indexing** |  Access an element   |<center>[]</center>|
| **concatenation** |combine sequences| <center>+</center>|
| **repetition** | Concatenate a repeated number of times |<center>*</center>  |
| **membership** | to check if a given item is in the sequence | <center>in</center> |
| **length** |gives number of elements in sequence| <center>len</center> |


## Methods:
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
| **extend** |Adds second list to end of first list | l1.extend(l2) |

## Slicing Lists

#### **Examples**
```python
l=[1,2,3,4]
l[0]
l[0:1]
l[-1]
l[:-2]
l[::-1]
l[1::-1]
```
 #### Output:

 ```Python
1
[1]
4
[1,2]
[4,3,2,1]
[2,1]
 ```
 **x == y checks if x and y have the _same value_ while
x is y checks if x and y refer to the same object (_point to the same memory location_)**

Thus, if
```Python
l1 = [1,2,3]
l2=l1
```
Changing the elements of l2 will cause change in l1 too.

 Thus if we want a new list that has the same elements of another, we have to perform
 >l2 = l1[:]
## Examples:
## append()
```python
l = [1, 2]
l.append(3)
print(l)
```
> l = [1,2,3]
## extend()
```python
l1=[1,2]
l2=[3,4]
l3=l1.extend(l2)
print(l3)
```
> l3 = [1,2,3,4]
## concatenation
```python
l1=[1,2,3,4]
l2=[5,6,7,8]
l3 = l1+l2
print(l3)
```
> [1,2,3,4,5,6,7,8]

Concatenantion always produces a new list so if
```python
l1=[1,2,3]
l2=l1
l1=l1+[4]
```
l1 will no longer point to the same list (l1 is l2 returns false)

## insert()
```python
l=[1,2,4]
l.insert(2,3)
print(l)
```
>[1,2,3,4]

## delete
```python
l=[3.14, 42, "baz"]
del l[2]
print(l)
```
> [3.14, 42]

## remove()
```python
l = [1, 2, 3 , 2]
l.remove(2)
print(l)
```
> [1, 3, 2]

To remove **_all_** occurrences of element x in list l,

```Python
while x in l:
  l.remove(x)
```

## pop()

```python
l=[1,2,3,4]
print(l.pop(2))
```
> 3

#### pop vs. remove vs. del

remove removes the first matching value, not a specific index; del removes the item at a specific index; while pop removes the item at a specific index and returns it.

## range() and in:
```python
l1 = [1, 2, 3, 4]
p=len(l1)
for i in range(1,p,1): #1 included p excluded, step = 1
    i+=1

l = [4,3,2,5]
for i in l:
    i+=1

print(l , l1)
```
> [5, 4, 3, 6]    [1 ,3 ,4 ,4]
## count()
```python
l=["a","b","c","b"]
print(l.count("b"))
```
> 2

## sorting a List
```python
l=[3,2,9,7]
l.sort()            #sorts l in place, return type void
a=sorted(l)         #sorts list and creates new list
```


## Nested Lists
```python
l = [[2,[37]], 4, ["foo"]]
print(l[0][1][0])
```
> 37
