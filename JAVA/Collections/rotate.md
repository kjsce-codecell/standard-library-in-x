<h1 align="center"><a href="#">rotate() </a></h1>


## Function

> It is used to rotate the elements present in the specified list by a given distance.

> The distance can be zero, negative, or greater than size of the list. 

> Positive distance rotates the list to the right, negative distance rotates the list to the left while zero distance does not rotate the list.

This method can be used to rotate lists and arrays.

## Declaration

```java
public static void rotate(List<?> list,int distance)	
```

## Parameters
<b>list</b> - This is the list to be rotated.

<b>distance</b> - This is the distance to rotate the list.

## Example

```java
import java.util.*;
  
public class RotateList
{
	public static void main(String[] args)
    	{
        	List<Integer>  numbers = new ArrayList<Integer>();
 		for (int i = 101; i <= 110; i++)
		numbers.add(i);
	        System.out.println("Before rotating: " +numbers);
	        Collections.rotate(numbers,3);
        	System.out.println("After rotating: " +numbers);
    }
}

```

## Output

```
Before rotating: [101, 102, 103, 104, 105, 106, 107, 108, 109, 110]
After rotating: [108, 109, 110, 101, 102, 103, 104, 105, 106, 107]
```
