<h1 align="center"><a href="#">max() </a></h1>


## Function

>It returns the maximum element of the given collection.


NOTE!- This method requires a list type of data, we need to first convert the collection to list first using <b>“aslist()”<b> function.

## Declaration

```java
Collections.max(listName);
```

## Example

```java
import java.util.*;  
public class CollectionsExample {  
    public static void main(String a[]){         
        List<Integer> list = new ArrayList<Integer>();  
        list.add(46);  
        list.add(67);  
        list.add(24);  
        list.add(16);  
        list.add(8);  
        list.add(12);  
        System.out.println("Value of maximum element from the collection: "+Collections.max(list));  
    }  
}  
```

## Output

```
Value of maximum element from the collection: 67
```
