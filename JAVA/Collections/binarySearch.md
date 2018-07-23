<h1 align="center"><a href="#">binarySearch() </a></h1>


## Function

> This function is used to search the specified object in a list using the binary search algorithm.

> The method returns the index of the search key, if it is contained in the list and throws <b>ClassCastException</b> if the list contains elements that are not mutually comparable.

## Declaration

```java
public static <T> int binarySearch(List<? extends T> list,T key,Comparator<? super T> c)
```

## Parameters
<b>list</b> − This is the list to be searched.

<b>key</b> − This is the key to be searched for.

<b>c</b> − This is the comparator by which the list is ordered. A null value indicates that the elements' natural ordering should be used. The list must be sorted into ascending order according to the specified comparator.
This parameter is optional.

## Example (Without Comparator)

```java
import java.util.*;

public class BinarySearch 
{
   public static void main(String args[]) 
   {
   
    ArrayList<String> list = new ArrayList<String>();

    list.add("K. J.");
    list.add("Somaiya");
    list.add("College");
    list.add("Of");
    list.add("Engineering");

    int index = Collections.binarySearch(list, "College");     

    System.out.println("Position of 'College' is "+index);
   }    
}
```

## Output

```
Position of 'College' is 2
```

## Example (With Comparator)

```java
import java.util.*;
 
public class BinarySearchwithComparator
{
    public static void main(String args[])
    {
        ArrayList<Integer> list = new ArrayList<Integer>();
        list.add(100);
        list.add(500);
        list.add(250);
        list.add(30);
        list.add(45);
        int index = Collections.binarySearch(list, 30, 
                                  Collections.reverseOrder());
 
        System.out.println("Position of 30 is " + index);
    }
}

```

## Output

```
Position of 30 is 3
```
