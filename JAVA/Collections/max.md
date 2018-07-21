<h1 align="center"><a href="#">max() </a></h1>


## Function

>It returns the maximum element of the given collection.


NOTE!- This method requires a list type of data, we need to first convert the collection to list first using <b>aslist()</b> function.

## Syntax

```java
Collections.max(listName);
```

## Example

```java
import java.util.*;  
public class MaxExample 
{  
    	public static void main(String args[])
	{         
        	List<Integer> list = new ArrayList<Integer>();  
        	list.add(100);  
        	list.add(-2);  
        	list.add(86);  
        	list.add(986);  
        	list.add(112);    
        	System.out.println("The maximum value in collection is "+Collections.max(list));  
    	}  
}  
```

## Output

```
The maximum value in collection is 986
```
