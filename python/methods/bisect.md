<h1 align="center">bisect</h1>

> It provides support for maintaining a list in sorted order without having to sort the list after each insertion.

> It uses a basic bisection algorithm to do its work.

### Functions 

* **bisect(arr,x,lo=0,hi=len(a))**
>Locate the insertion point for x in a to maintain sorted order.

>The returned insertion point i partitions the array a into two halves so that all(val <= x for val in a[lo:i]) for the left side and all(val > x for val in a[i:hi]) for the right side.

>If x is present in list both **bisect_left** and **bisect_right** return the same value,else bisect_left returns the leftmost place in the sorted list to insert x and bisect_right returns the rightmost place.
```python

bisect_left([1,2,4,5,7,8],3)
bisect_right([1,2,4,5,7,8],3)
bisect([1,2,4,5,7,8],3)
bisect_left([1,2,4,5,5,7,8],5)
bisect_right([1,2,4,5,5,7,8],5)
bisect([1,2,4,5,5,7,8],5)    
```
Output :
```
2
2
2
3
5
5
```
* **insort(a,x,lo=0,hi=len(a))**
>Insert x in a in sorted order.

>x is inserted in a after any existing entries of x same as **insort_right()**.But,**insort_left()** inserts x before the existing entries of x.
```python
x=[1,2,4,5,6,7]
insort(x,3)
print(x)
```
Output:
```
[1,2,3,4,5,6,7]
```
> **Note** : The values of lo and hi can be changed to apply the functions on a subset of the list instead.
