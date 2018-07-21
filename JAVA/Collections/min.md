<h1 align="center"><a href="#">min() </a></h1>


## Function

>It returns the minimum element present in the given collection.


NOTE!- This method requires a list type of data, we need to first convert the collection to list first using <b>aslist()</b> function.

## Declaration

```java
Collections.min(listName);
```

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
        	System.out.println("The maximum value in collection is "+Collections.min(list));  
    	}  
}  
```

## Output

```
The maximum value in collection is -2
```
