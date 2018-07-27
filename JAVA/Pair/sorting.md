<h1 align="center"><a href="#">Sorting</a></h1>

## Introduction
> To sort a collection of Pair objects,  we need to override the compareTo() method or create a new method to compare the keys or values. This is because it is not clear whether to sort based on key (first value) or based on value (second value) of Pair objects.  

> It is possible to sort a Hashmap based on key but to sort a HashMap by it's values, we need to convert the existing Map into a List and then sort this list by using Comparator interface and then again put this sorted list back to a Map.

## Example (Sorting by second value using Comparator)
```java
import javafx.util.Pair;
import java.util.*;

public class Main
{
    public static void main(String args[])
    {
       List<Pair<String, Integer>> fruits = new ArrayList<Pair<String, Integer>>();
        fruits.add(new Pair<String, Integer>("Strawberry",7));
        fruits.add(new Pair<String, Integer>("Watermelon",2));
        fruits.add(new Pair<String, Integer>("Orange",5));

        fruits.sort(new Comparator<Pair<String, Integer>>() {
        @Override
        public int compare(Pair<String, Integer> o1, Pair<String, Integer> o2) {
            if (o1.getValue() < o2.getValue()) {
                return -1;
            } else if (o1.getValue().equals(o2.getValue())) {
                return 0; 
            } else {
                return 1;
            }
        }
    });
    System.out.println("Sorting by second value (integer) in ascending order:");
    System.out.println(fruits);
    }
    
    
}
```
## Output
```
Sorting by second value (integer) in ascending order:
[Watermelon=2, Orange=5, Strawberry=7]
```


## Example (Sorting by first value in descending order)
```java
import javafx.util.Pair;
import java.util.*;

public class Main
{
    public static void main(String args[])
    {
       List<Pair<String, Integer>> fruits = new ArrayList<Pair<String, Integer>>();
        fruits.add(new Pair<String, Integer>("Strawberry",7));
        fruits.add(new Pair<String, Integer>("Watermelon",2));
        fruits.add(new Pair<String, Integer>("Orange",5));

        fruits.sort(new Comparator<Pair<String, Integer>>() {
        @Override
        public int compare(Pair<String, Integer> o1, Pair<String, Integer> o2) {
            if ((o1.getKey()).compareTo(o2.getKey()) >0 ) {
                return -1;
            } else if (o1.getKey().equals(o2.getKey())) {
                return 0; 
            } else {
                return 1;
            }
        }
    });
    System.out.println("Sorting by first value (string) in descending order:");
    System.out.println(fruits);
    }
    
    
}
```

## Output
```
Sorting by first value (string) in descending order:
[Watermelon=2, Strawberry=7, Orange=5]
```
