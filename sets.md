<h1 align="center"><a href="#"> Sets </a></h1>

> Sets are containers which store only unique values and permit easy look ups.

> The values in the sets are stored in some specific order (like ascending or descending).

> Elements can only be inserted or deleted, but cannot be modified.

> We can access and traverse set elements using iterators just like vectors.

### Operations( Member functions )

| <center>Function </center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :------------- | :------------- | :------------- |
| <a>begin( )</a>        | Returns an iterator to the first element of the set.       | O(1)
| <a>end( ) </a>      | Returns an iterator pointing to a position which is next to the last element       | O(1)
| <a>clear( )</a>     |  Deletes all the elements in the set and the set will be empty.       | O(N)
| <a>count( ) </a>    | Returns 1 or 0 if the element is in the set or not respectively.       | O(logN)
| <a>empty( ) </a>       |  Returns true if the set is empty and false if the set has at least one element       | O(1)
| <a>erase( ) </a>      |  Deletes a particular element or a range of elements from the set.       | O(N)
| <a>find( ) </a>      | Searches for a particular element and returns the iterator pointing to the element if the element is found otherwise it will return the iterator returned by end().       | O(logN)
| <a>size( ) </a>      | Returns the size of the set or the number of elements in the set.       | O(1)
| <a>insert( ) </a>      |  insert a new element.       | O(1)

<br>


### Implementation

```C++


```
<br>

### Problems

 * codechef
<br>

<h1 align="center"><a href="#"> Unordered-Sets </a></h1>

> Unordered sets are containers that store unique elements in no particular order, and which allow for fast retrieval of individual elements based on their value.

> Internally, the elements in the unordered_set are not sorted in any particular order, but organized into buckets depending on their hash values to allow for fast access to individual elements directly by their values (with a constant average time complexity on average).
<br>

### Operations( Member functions )

[Same as sets](#Operations)

### Implementation

```C++


```
<br>

### Problems

 * codechef
<br>
