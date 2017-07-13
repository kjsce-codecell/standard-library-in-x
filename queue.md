<h1 align="center"><a href="#"> Queue </a></h1>

> Queue is a container which follows FIFO  order (First In First Out).

> Elements are inserted at one end (  Rear  ) and extracted from another end( Front )
<br>

### Operations( Member functions )

| <center>Function </center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :------------- | :------------- | :------------- |
| <a>push( )</a>        | Inserts an element in queue at one end(rear).       | O(1)
| <a>pop( )</a>     | Deletes an element from another end if queue(front).       | O(1)
| <a>front( ) </a>    | Access the element on the front end of queue.       | O(1)
| <a>empty( ) </a>       | Checks if the queue is empty or not.       | O(1)
| <a>size( ) </a>      | returns the size of queue.       | O(1)
<br>

### Implementation

```C++
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
<br>

### Problems

 * codechef
<br>

<h1 align="center" ><a href="#"> Priority-Queue </a></h1>

> A priority queue is a container that provides constant time extraction of the largest element .

> In a priority queue, an element with high priority is served before an element with low priority.

> All insertion operations takes place in Logarithmic time .
<br>

### Operations( Member functions )

| <center>Function </center>    | <center>What it does ?</center>  | <center>Complexity</center>  |
| :------------- | :------------- | :------------- |
| <a>push( )</a>        | Inserts a new element in the priority queue.       | O(logN)
| <a>pop( )</a>     | Removes the largest(Top) element from the priority queue .       | O(LogN)
| <a>top( ) </a>    | Returns a reference to the largest element in the priority queue.       | O(1)
| <a>empty( ) </a>       |  Returns true if the priority queue is empty and false if the priority queue has at least one element       | O(1)
| <a>size( ) </a>      | Returns the number of element in the priority queue.       | O(1)
<br>


### Implementation

```C++
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
<br>

### Problems
 * codechef


#### Note - Follow up Deque as above
