<h1 align="center"><a href="#">reverseOrder() </a></h1>


## Function

> This function returns a comparator that reverse the natural ordering imposed by Comparable.

> This method along with <b>sort()</b> is used to sort a collection in descending order.

## Declaration

```java
public static <T> Comparator<T> reverseOrder(Comparator<T> cmp)
```

## Parameters
<b>cmp</b> − This is the comparator.
This parameter is optional.

## Example (Using Comparator)

```java
import java.util.*;
class User  
{
    String name;
    public User(String name) 
    {
        this.name = name;
    }
    public String getName()
    {
        return name;
    }
    
} 
public class ReverseOrderwithComparator 
{
    public static void main(String args[]) 
    {
        ArrayList <User> list = new ArrayList <User> ();
        list.add(new User("ABC"));
        list.add(new User("XYZ"));
        list.add(new User("PQR"));
        System.out.println("Sort using Comparator:");
        Collections.sort(list, new UserComparator());
        for(User u: list)
        {
            System.out.println(u.getName());
        }
        System.out.println("Reverse Order using Comparator:");
        Collections.sort(list, Collections.reverseOrder(new UserComparator()));
        for(User u: list)
        {
        	System.out.println(u.getName());
        }
    }
}
class UserComparator implements Comparator<User> {
	@Override
	public int compare(User u1, User u2) {
		return (u1.getName()).compareTo(u2.getName());
	}
} 
```

## Output

```
Sort using Comparator:
ABC
PQR
XYZ
Reverse Order using Comparator:
XYZ
PQR
ABC
```
