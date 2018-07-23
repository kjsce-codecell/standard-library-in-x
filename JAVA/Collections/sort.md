<h1 align="center"><a href="#">sort() </a></h1>


## Function

> It is used to sort the elements present in the specified list of Collection in ascending order using the Merge Sort technique.

> It can sort the elements of ArrayList, linked list, queue and many more. It can be used to sort an array after creating an ArrayList of given array items.

## Declaration

```java
public static <T> void sort(List<T> list,Comparator<? super T> c)	
```

## Parameters
<b>list</b> - This is the list to be sorted.

<b>c</b> - This is the comparator to determine the order of the list.


## Example (Using a Comparator)

```java
import java.util.*;
import java.lang.*;
import java.io.*;

class Product
{
    int id, weight;
    String name;
    public Product(int id, String name, int weight)
    {
        this.id = id;
        this.weight = weight;
        this.name = name;
    }
 
    public String toString()
    {
        return this.id + " " + this.name +
                           " " + this.weight;
    }
}
 
class SortbyWeight implements Comparator<Product>
{
    // Used for sorting in ascending order of weight
    public int compare(Product p1, Product p2)
    {
        return p1.weight - p2.weight;
    }
}
 
public class SortUsingComparator
{
    public static void main (String args[])
    {
        ArrayList<Product> list = new ArrayList<Product>();
        list.add(new Product(111, "Watermelon",3));
        list.add(new Product(112, "Cake",2));
        list.add(new Product(113, "Chocolate",1));
 
        System.out.println("Unsorted");
        for (Product p:list)
            System.out.println(p);
 
        Collections.sort(list, new SortbyWeight());
 
        System.out.println("\nSorted by weight");
        for (Product p:list)
            System.out.println(p);
    }
}
```

## Output

```
Unsorted
111 Watermelon 3
112 Cake 2
113 Chocolate 1

Sorted by weight
113 Chocolate 1
112 Cake 2
111 Watermelon 3
```

