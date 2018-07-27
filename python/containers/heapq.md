<h1 align="center">heapq</h1>

## What are Heaps?
> Heaps are binary trees for which every parent node has a value less than or equal to any of its children. This implementation uses arrays for which **heap[k] <= heap[2*k+1]** and **heap[k] <= heap[2*k+2]**
 for all k, counting elements from zero.

> The interesting property of a heap is that its smallest element is always the **root, heap[0]**.

> The heap discussed above is also called **min-heap**.There is another variation called as **max-heap** where each parent node has a value greater than or equal to any of its children.

<br/>

## Functions :

| <center>Function</center> | <center>What it Does?</center> | <center>Complexity</center> |
|----|:---|:---|
| **heapify(x)** | Transform list x into a heap, in-place | O(N) |
| **heappush(heap, item)** | Push the value item onto the heap | O(LogN) |
| **heappop(heap)** | Pop and return the smallest item from the heap | O(LogN) |
| **heappushpop(heap, item)** | Push item on the heap, then pop and return the smallest item from the heap | O(LogN) |
| **heapreplace(heap, item)** | Pop and return the smallest item from the heap, and also push the new item | O(LogN) |
| **nlargest(n, iterable, key=None)** | Return a list with the n largest elements from the dataset defined by iterable. key | O(N*Logn) |
| **nsmallest(n, iterable, key=None)** | Return a list with the n smallest elements from the dataset defined by iterable. key | O(N*Logn) |

> **Note** : All the functions maintain the heap invariant.



## Implementation :

```python
from heapq import *

x = [2,5,11,10,1,3,25]
print("List\n",x)

heapify(x)
print("Heap\n",x)

heappush(x,4)
print("Push(4)\n",x)

val=heappop(x)
print("Pop\n",val,x)

val=heappushpop(x,7)
print("PushPop(7)\n",val,x)

val=heapreplace(x,8)
print("Replace(8)\n",val,x)

print("4 Smallest elements\n",nsmallest(4,x,key=None))

print("4 Largest elements\n",nlargest(4,x,key=None))
```
### Output : 
```
List
 [2, 5, 11, 10, 1, 3, 25]
Heap
 [1, 2, 3, 10, 5, 11, 25]
Push(4)
 [1, 2, 3, 4, 5, 11, 25, 10]
Pop
 1 [2, 4, 3, 10, 5, 11, 25]
PushPop(7)
 2 [3, 4, 7, 10, 5, 11, 25]
Replace(8)
 3 [4, 5, 7, 10, 8, 11, 25]
4 Smallest elements
 [4, 5, 7, 8]
4 Largest elements
 [25, 11, 10, 8]
```
### Heap Sort : 
> A heapsort can be implemented by pushing all values onto a heap and then popping off the smallest values one at a time.

```python
def heapsort(arr):
    h = []
    for value in arr:
        heappush(h, value)
    return [heappop(h) for i in range(len(h))]
heapsort([1, 3, 5, 7, 9, 2, 4, 6, 8, 0])
```
Output:
```
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
```
