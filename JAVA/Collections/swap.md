<h1 align="center"><a href="#">swap() </a></h1>


## Function

> It is used to swap the elements at the specified positions in the specified list.

## Declaration

```java
public static void swap(List<?> list,int index1,int index2)	
```

## Parameters
<b>list</b> - The list in which to the swap elements.

<b>index1</b> - The index of first element to be swapped.

<b>index2</b> - The index of the other element to be swapped.

If the elements with index numbers of index1 and index2 do not exist, the method throws <b>ArrayIndexOutOfBoundsException</b>.

## Example

```java
import java.util.*;
public class SwapExample
{
	public static void main(String args[])
	{
		ArrayList list = new ArrayList();
		list.add(50);
		list.add(10);
		list.add(20);
		list.add(40);
    		System.out.println("Before swapping: " +list);
		Collections.swap(list, 0,3);
		System.out.println("After swapping: " +list); 
	}
}
```

## Output

```
Before swapping: [50, 10, 20, 40]
After swapping: [40, 10, 20, 50]
```

