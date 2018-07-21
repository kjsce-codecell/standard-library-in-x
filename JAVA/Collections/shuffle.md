<h1 align="center"><a href="#">shuffle() </a></h1>


## Function

> It is used to randomly shuffle the specified list <i>in place</i> using a default or specified source of randomness.

## Declaration

```java
public static void shuffle(List<?> list,Random r)	
```

## Parameters
<b>list</b> - The list to be shuffled.

<b>r</b> - The custom source of randomness to use to shuffle the list. This can be used to make shuffling a deterministic process if needed.
When using identical sources of randomness to shuffle two same lists, both lists will contain elements in the exact same order after shuffling.

When second parameter is not present, the list is shuffled using default source of randomness.

## Example (Default source of randomness)

```java
import java.util.*;
  
public class ShuffleList
{
	public static void main(String[] args)
    	{
        	List<Integer> num = new ArrayList<Integer>();
 		for (int i = 11; i <= 20; i++)
		num.add(i);
	        System.out.println("Before shuffling: " +num);
	        Collections.shuffle(num);
        	System.out.println("After shuffling: " +num);
    }
}

```

## Output

```
Before shuffling: [11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
After shuffling: [12, 20, 11, 17, 13, 19, 15, 16, 18, 14]
```

## Example (Custom source of randomness)

```java
import java.util.*;
  
public class ShuffleList
{
	public static void main(String[] args)
    	{
        	List<Integer> num = new ArrayList<Integer>();
		List<Integer> num_copy = new ArrayList<Integer>();
 		for (int i = 1; i <= 10; i++)
		{
			num.add(i);
			num_copy.add(i);
		}
	        System.out.println("Before shuffling num: " +num);
		System.out.println("Before shuffling num_copy: " +num_copy);
	        Collections.shuffle(num,new Random(3));
		Collections.shuffle(num_copy,new Random(3));
        	System.out.println("After shuffling num: " +num);
		System.out.println("After shuffling num_copy: " +num_copy);
    }
}

```

## Output

```
Before shuffling num: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Before shuffling num_copy: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
After shuffling num: [7, 6, 2, 4, 9, 8, 10, 1, 3, 5]
After shuffling num_copy: [7, 6, 2, 4, 9, 8, 10, 1, 3, 5]
```

NOTE!- This function runs in linear time
