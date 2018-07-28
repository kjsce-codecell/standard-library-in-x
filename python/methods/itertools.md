<h1 align = "center">Itertools</h1>

> **itertools** is a python module that provides a set of powerful tools that deal with iterators. An iterator is an object that can be iterated upon and returns data items one at a time using its next() method. 
> 
> Iterator based code is more memory efficient as data is not produced from the iterator until it is needed. 

>Using itertools leads to cleaner and more readable code.

> To use itertools we must import the module as
```python
import itertools
```


## Functions:

### accumulate() <a name = "accumulate"></a>
```python
accumulate(iterable [,func])
```
> The **accumulate** function processes the input iterable and applies function *func* successively to its n<sup>th</sup> and n+1<sup>th</sup> element and produces a return value. 
> 
> If *func* is not provided, it defaults to addition to produce the cummulative sum of the input. If *func* is provided, it must be a function of two arguements.

Example 1:
```python
from itertools import *
l = [1, 2, 3, 4, 5]
for e in accumulate(l): # defaults to add
    print(e, end=' ')
print()
```

Output:
```
1 3 6 10 15
```

Example 2:
```python
from itertools import *
l = [1, 2, 3, 4, 5]
for e in accumulate(l, operator.mul):
    print(e, end=' ')
print()
```
Output:
```
1 2 6 24 120
```


### count()
```python
count(start=0, step=1)
```

> This function makes an iterator that returns evenly spaced values starting from *start* and the spacing is equal to *step*. If not provided, start and step default to **0** and **1** respectively. 
> 
> This function produces an infinite series. This is useful when we need to iterate over an infinite series, stopping when a condition is met. 

Example 1:
```python
from itertools import *
for e in count(10, 0.05):
    print(e)
```
Output:
```
Note: this program would print 
10
10.05
10.10
10.15
and so on, looping infinitely.
```

Example 2:
```python
from itertools import *
c = count(10, 0.25)
print(next(c))
print(next(c))
print(next(c))
```

Output:
```
10
10.25
10.5
```

### permutations()

```python
permutations(iterable [,r]) 
```
> This function returns successive r-length permutations of an iterable. If r is not provided, it defaults to the length of the iterable. The permutations are returned as tuples.
> 
> Permutations are emitted in lexicographic sort order. So, if the input iterable is sorted, the permutation tuples will be produced in sorted order.


Example:
```python
from itertools import *
li = [2, 3, 1]
for e in permutations(li, 2):
    print(e)
```
Output:
```
(2, 3)
(2, 1)
(3, 2)
(3, 1)
(1, 2)
(1, 3)
```

### combinations()
```python
combinations(iterable, r) 
```
> This function returns successive r-length combinations (or subsequences) of an iterable. Note that r is not optional here.

Example:
```python
from itertools import *
li = [2, 3, 1]
for e in combinations(li, 2):
    print(e)
```
Output:
```
(2, 3)
(2, 1)
(3, 1)
```

## combinations_with_replacement()
```python
combinations_with_replacement(iterable, r) 
```
> This function is very similar to combinations with the difference being that this one allows an element to be repeated.

Example:
```python
from itertools import *
li = [2, 3, 1]
for e in combinations_with_replacement(li, 2):
    print(e)
```
Output:
```
(2, 2)
(2, 3)
(2, 1)
(3, 3)
(3, 1)
(1, 1)
```
