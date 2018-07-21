<h1 align="center"><a href="#">reverse() </a></h1>


## Function

>It reverses the order of the elements in the specified list.

This method can be used to reverse a LinkedList, ArrayList and arrays.

## Declaration

```java
public static void reverse(List<?> list)	
```

## Parameters
<b>list</b> - The list which is to be sorted.

## Example

```java
import java.util.*;

public class ReverseList 
{
	public static void main(String[] args) 
	{
      		ArrayList<String> letters = new ArrayList<String>();
		letters.add("A");
		letters.add("B");
		letters.add("C");
		letters.add("D");
		letters.add("E");

		System.out.println("Before reversing: "+letters);
		Collections.reverse(letters);
		System.out.println("After reversing: "+letters);
   }
}
```

## Output

```
Before reversing: [A, B, C, D, E]
After reversing: [E, D, C, B, A]
```
