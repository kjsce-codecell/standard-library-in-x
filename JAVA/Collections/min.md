<h1 align="center"><a href="#">min() </a></h1>


## Function

>It returns the minimum element present in the given collection, according to the order induced by the specified comparator.

>All elements in the collection must be mutually comparable by the specified comparator 
(that is, comp.compare(e1, e2) must not throw a <b>ClassCastException</b> for any elements e1 and e2 in the collection)

NOTE!- This method requires a list type of data, we need to first convert the collection to list first using <b>aslist()</b> function.

## Declaration

```java
public static <T> T min(Collection<? extends T> coll,Comparator<? super T> comp)
```

## Parameters
<b>coll</b> - The collection whose minimum element is to be determined.

<b>comp</b> - The comparator with which to determine the minimum element.

If the second argument is not provided, then comparison is made based on the natural order of elements

## Example

```java
import java.util.*;  
public class MinExample 
{  
    	public static void main(String args[])
	{         
        	List<Integer> list = new ArrayList<Integer>();  
        	list.add(100);  
        	list.add(-2);  
        	list.add(86);  
        	list.add(986);  
        	list.add(112);    
        	System.out.println("The minimum value in collection is "+Collections.min(list,null));  
    	}  
}  
```

## Output

```
The minimum value in collection is -2
```
