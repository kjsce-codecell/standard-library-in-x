<h1 align="center"><a href="#">Pair </a></h1>

## Function
> JavaFX 2.2 has the <b>javafx.util.Pair</b> class which can be used to store a pair. 

> <b><Key, Value></b> simply refers to a pair of values that are stored together.

> Pairs provide a convenient way of handling simple key to value association and are particularly useful when we want to return two values from a method.

NOTE!- You need to have Java 8 installed on your machine in order to run the below program.


## Syntax
```java
//This returns an object of Pair class with key of Type T1 and Value of Type T2
Pair <T1, T2> p = new Pair <> (val1, val2);
```

## Parameters
<b>val1</b> : Key of type T1

<b>val2</b> : Value for key val1, of type T2

## Methods of Pair Class

Method | Description
------------ | -------------
<b>Pair (K key, V value)</b> | Creates a new pair
<b>boolean equals()</b> | It is used to compare two pair objects. It compares on the basic of the values (<Key, Value>) which are stored in the pair objects.
<b>String toString()</b> | It returns the String representation of the Pair.
<b>K getKey()</b> | It returns key for the pair.
<b>V getValue()</b> | It returns value for the pair.
<b>int hashCode()</b> | Generates a hash code for the Pair.

## Example
```java
import javafx.util.Pair;

public class Main
{
    public static void main(String args[])
    {
        Pair <String, Integer> p1 =new Pair<>("Mumbai",6);
        Pair <String, Integer> p2 =new Pair<>("Chennai",7);
        Pair <String, Integer> p3 =new Pair<>("Bombay",6);
        Pair <String, Integer> p4 =new Pair<>("Mumbai",6);
        //equals method example
        System.out.println(p1.equals(p2));
        System.out.println(p1.equals(p3));
        System.out.println(p1.equals(p4));
        //toString example
        System.out.println(p1.toString());
        //getKey and getValue example
        System.out.println("Number of alphabets in "+p1.getKey()+" is "+p1.getValue());
    }
    
    
}
```

## Output
```
false
false
true
Mumbai=6
Number of alphabets in Mumbai is 6
```