<h1 align="center"><a href="#">Hashing</a></h1>

## Introduction

> Hashing is the process of indexing and retrieving element (data) in a data structure to provide faster way of finding the element using the hash key.

> Java provides HashMap and HashSet classes to implement Hashing by using the hashcode value of an object to determine where the object should be stored in the collection. This hashcode is used again to help locate the object in the collection.

> In case you want to hash your custom class, you need to use the <b>hashCode()</b> and the <b>equals()</b> methods provided in <b>java.lang.Object</b> class and override them.

## hashcode() and equals() methods

> <b>equals(Object obj)</b>: This method indicates whether some other object passed as an argument is "equal to" the current instance. Two objects are equal <i>if and only if</i> they are stored in the <b>same memory address</b>.

> <b>hashcode()</b>: This method returns an integer representation of the object memory address. By default, this method returns a <i>random integer that is unique for each instance</i>. This integer might change between several executions of the application and won't stay the same.


NOTE!- <b>If two objects are equal according to the equals(Object) method, then calling the hashcode() method on each of the two objects must produce the same integer result.</b>

## Why overriding hashCode() and equals() method is needed?
Note the examples given below. 
In the first example, both the methods are overridden so that Pair("Hello","World") and Pair("World","Hello") both have the same hashCode.
```java
class Pair 
{
    String a,b;
    public Pair(String a, String b) 
    {
        super();
        this.a = a;
        this.b = b;
    }
    @Override
    public boolean equals(Object obj) 
    {
        boolean t = true;
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (this.hashCode() == obj.hashCode())
            return true;
        return t;
    }

    @Override
    public int hashCode() 
    {
        return a.hashCode() + b.hashCode();
    }
}

public class Main
{
    public static void main(String args[])
    {
        Pair p1 = new Pair ("Hello", "World");
        Pair p2 = new Pair ("World", "Hello");
        System.out.println("p1 hashcode = " + p1.hashCode());
        System.out.println("p2 hashcode = " + p2.hashCode());
        System.out.println("Checking equality between p1 and p2 = " + p1.equals(p2));
    }
}
```
## Output
```
p1 hashcode = 153375780
p2 hashcode = 153375780
Checking equality between p1 and p2 = true
```

> If <b>equals()</b> and <b>hashCode()</b> methods are not overridden, we will get different hash code for Pair("Hello", "World") and Pair("World", "Hello"). The example below demonstrates this.

```java
class Pair 
{
    String a,b;
    public Pair(String a, String b) 
    {
        super();
        this.a = a;
        this.b = b;
    }
    //Not overriding equals() and hashCode() methods
}   

public class Main
{
    public static void main(String args[])
    {
        Pair p1 = new Pair ("Hello", "World");
        Pair p2 = new Pair ("World", "Hello");
        System.out.println("p1 hashcode = " + p1.hashCode());
        System.out.println("p2 hashcode = " + p2.hashCode());
        System.out.println("Checking equality between p1 and p2 = " + p1.equals(p2));
    }
}
```
## Output
```
p1 hashcode = 366712642
p2 hashcode = 1829164700
Checking equality between p1 and p2 = false
```
