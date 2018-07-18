<div id = "queue"></div>
<h1 align="center"><a href="http://www.cplusplus.com/reference/queue/queue/"> Queue </a></h1>


> Queue is a container which follows FIFO  order (First In First Out).

> Elements are inserted at one end (  Rear  ) and extracted from another end( Front )

<br />

### Operations( Member functions )

| <center>Function </center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :------------- | :------------- | :------------- |
| <a href="#">push( )</a>        | Inserts an element in queue at one end(rear).       | O(1)
| <a href="#">pop( )</a>     | Deletes an element from another end if queue(front).       | O(1)
| <a href="#">front( ) </a>    | Access the element on the front end of queue.       | O(1)
| <a href="#">empty( ) </a>       | Checks if the queue is empty or not.       | O(1)
| <a href="#">size( ) </a>      | returns the size of queue.       | O(1)

<br />

### Implementation

```cpp
#include<iostream>
#include<cstdio>
#include<queue>           

using namespace std;

int main(){
        int  i ;
        queue <int> q ;                 // declaratation
        for ( i = 1 ; i < 4; i++ ){
                q.push(i*i);
        }
        printf("Size of queue %d \n ", q.size());
        while(!q.empty()){
                printf(" %d ",q.front());
                q.pop();
        }
        return 0 ;
}
```

Output

```
Size of queue 3
  1  4  9  

```
<br />

### Problems

 * codechef

<br />

<div id = "pqueue"></div>
<h1 align="center" ><a href="http://www.cplusplus.com/reference/queue/priority_queue/"> Priority-Queue </a></h1>

> A priority queue is a container that provides constant time extraction of the largest element .

> In a priority queue, an element with high priority is served before an element with low priority.

> All insertion / deletion operations takes place in Logarithmic time .


<br />

### Operations( Member functions )

| <center>Function </center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :------------- | :------------- | :------------- |
| <a href="#">push( )</a>        | Inserts a new element in the priority queue.       | O(logN)
| <a href="#">pop( )</a>     | Removes the largest(Top) element from the priority queue .       | O(LogN)
| <a href="#">top( ) </a>    | Returns a reference to the largest element in the priority queue.       | O(1)
| <a href="#">empty( ) </a>       |  Returns true if the priority queue is empty and false if the priority queue has at least one element       | O(1)
| <a href="#">size( ) </a>      | Returns the number of element in the priority queue.       | O(1)

<br />


### Implementation

```cpp
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq;             // declaratation
    pq.push(10);
    pq.push(20);
    pq.push(5);
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;
}
```

Output

```
20
10
5

```
<br />

### Problems
 * codechef


#### Note - Follow up [deque](http://www.cplusplus.com/reference/deque/deque/) as above
