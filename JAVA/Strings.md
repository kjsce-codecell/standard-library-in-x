# JAVA String/StringBuffer 

### Difference Between String and StringBuffer Class in Java :


String and StringBuffer both are the classes which operate on strings. The object of  String class is of fixed length. 

The object of the StringBuffer class is growable. The basic difference between String and StringBuffer is that the object of the “String” class is immutable. 

The object of the class “StringBuffer” mutable.


![p1](https://github.com/Kadam-Tushar/standard-library-in-x/blob/master/JAVA/p1.JPG)

**What is meant by immutable:** 

we cannot append,remove new string to created object.StringBuffer objects provide more functionality to the strings as compared to the class String. 

Hence, it is preferable to work with StringBuffer instead of class String.so when we want to make fixed size string use string object and when we want perform operation like append remove we use stringBuffer class object.

```
String Object:

Creating empty string object    →  String str = new String (“Hello”); 

Appending new string            →  str.concat(“World !”);

Printing string object          →  System.out.println(str);

Output		                →  Hello

StringBuffer Object:

Creating empty string object    →  String str = new String (“Hello”); 

Appending new string            →  str.append(“ World !”);

Printing string object          →  System.out.println(str);

Output		                →  Hello World !

```

### Important Note :
- Concat operation on StringBuffer is O(1 ) while for String Class it is O(n).

- Because String is immutable hence new object is created for every concat.

### Important methods of String class:

![p4](https://github.com/Kadam-Tushar/standard-library-in-x/blob/master/JAVA/p4.JPG)


### Important methods of StringBuffer class:

![p3](https://github.com/Kadam-Tushar/standard-library-in-x/blob/master/JAVA/p3.JPG)

