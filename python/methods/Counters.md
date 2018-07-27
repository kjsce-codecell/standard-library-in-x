# Counter
```python
from collections import Counter
```

**Description** : A Counter is a container that keeps track of how many times equivalent values are added. It can be used to implement the same algorithms for which bag or multiset data structures are commonly used in other languages.

**Example** 
```python
from collections import Counter
letters = ['a','b','b','c','a','b']
print(Counter(letters))
```
**Output** :
```python
Counter({'b': 3, 'a': 2, 'c': 1})
```

| <center>Function</center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :------------- | :------------- | :------------- |
| counter()        | Counter is a container that keeps track of how many times equivalent values are added.       | O(n)
| update()     | Counter can be populated/updated using this. Note that it adds to counter and doesn't replace the value.      | O(1)
| most_common()    | Used to produce a sequence of the _k_ most frequently encountered input values and their respective counts.       | O(n log k)
| elements()      | The method returns an iterator that produces all of the items known to the Counter.      | O(n)

## Implementation :
```python
from collections import Counter

c = Counter() #This initialize a empty counter  
print('Initial:', c)

c.update('abcdaab')
print('Sequence:', c)

c.update({'a':1, 'd':5})
print('Dict:', c)

print(c.most_common(3))

print(list(c.elements()))
```
**Output :**
```python
Initial : Counter()
Sequence: Counter({'a': 3, 'b': 2, 'c': 1, 'd': 1})
Dict    : Counter({'d': 6, 'a': 4, 'b': 2, 'c': 1})
[('d', 6), ('a', 4), ('b', 2)]
['a', 'a', 'a', 'a', 'b', 'b', 'c', 'd', 'd', 'd', 'd', 'd', 'd']
```
