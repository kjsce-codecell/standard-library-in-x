<h1 align="center"><a href="#"> Bitsets </a></h1>

<h2>INTRODUCTION</h2>

* A bitset is an array of bool but each Boolean value is not stored separately instead bitset optimizes the space such that each bool takes 1 bit space only, so space taken by bitset bs is less than othe methods to store them.<br>
* However, a limitation of bitset is, N must be known at compile time it isn't dynamic<br>
* As bitset stores the same information in compressed manner the operation on bitset are faster than that of array and vector.
* We can access each bit of bitset individually with help of array indexing operator [] that is bs[3] shows bit at index 3 of bitset bs just like a simple array. <br>
<br>!Remember bitset starts its indexing backward that is for 10110, 0 are at 0th and 3rd indices whereas 1 are at 1st 2nd and 4th indices.<br>

<h2>CONSTRUCTION</h2>

```cpp

bitset<10> bset1; // default constructor initializes with all 10 bits 0

bitset<10> bset2(20); // bset2 is initialized with bits of 20

bitset<10> bset3(string("1100")); // bset3 is initialized with bits of specified binary string

```

<h2>FUNCTIONS</h2>

| <center>Function </center>    | <center>What it does ?</center>  |
| :-------------                | :-------------                   |
| <a>count()</a>        |Returns the number of bits in the bitset that are set (i.e., that have a value of one).      |
| <a>size()</a>        |Returns the number of bits in the bitset.      |
| <a>test()</a>        |Returns boolean value regarding a position being set       |
| <a>any()/none()</a>        |Returns true/false if any bit is set in a given bitset      |
| <a>all()</a>        |Returns true if all bits are set      |
| <a>set()</a>        |Sets all bits to 1 or specific bits to 1 or 0      |
| <a>reset()</a>        |Sets all bits to 0 or specific pos to 0      |
| <a>flip()</a>        |Flips bitvalue at a specific or all positions      |
| <a>to_string/to_ulong/to_ullong</a>        |Converts the bitsets into appropriate datatypes   |

<h2>IMPLEMENTATION</h2>

```cpp

#include <iostream>
#include <string>
#include <bitset> //for bitsets
using namespace std;

#define M 32

int main()
{

    bitset<8> set8;    // 00000000

    // setting first bit (or 6th index)
    set8[1] = 1;    // 00000010
    set8[4] = set8[1];   //  00010010
    cout << set8 << endl;

    int numberof1 = set8.count(); // count function returns number of set bits in bitset

    // size function returns total number of bits in bitset so there difference will give us number of unset(0) bits in bitset
    int numberof0 = set8.size() - numberof1;
    cout << set8 << " has " << numberof1 << " ones and "
         << numberof0 << " zeros\n";

    cout << "bool representation of " << set8 << " : ";
    for (int i = 0; i < set8.size(); i++)
        cout << set8.test(i) << " "; // test function return 1 if bit is set else returns 0

    cout << endl;

    if (!set8.any()) // any function returns true, if atleast 1 bit is set
        cout << "set8 has no bit set.\n";

    if (!bset1.any())
        cout << "bset1 has no bit set.\n";

    // none function returns true, if none of the bit is set
    if (!bset1.none())
        cout << "bset1 has all bit set\n";

    cout << set8.set() << endl; // bset.set() sets all bits

    cout << set8.set(4, 0) << endl; //  bset.set(pos, b) makes bset[pos] = b

    cout << set8.set(4) << endl; // bset.set(pos) makes bset[pos]=1

    // reset function makes all bits 0
    cout << set8.reset(2) << endl;
    cout << set8.reset() << endl;

    // flip function flips all bits i.e.  1 <-> 0
    // and  0 <-> 1
    cout << set8.flip(2) << endl;
    cout << set8.flip() << endl;

    // Converting decimal number to binary by using bitset
    int num = 100;
    cout  << "\nDecimal number: " << num
         << "  Binary equivalent: " << bitset<8>(num)<<endl;
    cout<<endl;

    // Converting bitset into string for manipulation
    bitset<8> set9(43); //00101011
    string s;
    s=set9.to_string();
    cout<<s<<"\n";
    s=set9.to_string('*');
    cout<<s<<"\n";
    s=set9.to_string('O','X');
    cout<<s<<"\n";

    return 0;
}

```
Output

```
00010010
00010010 has 2 ones and 6 zeros
bool representation of 00010010 : 0 1 0 0 1 0 0 0
bset1 has no bit set.
11111111
11101111
11111111
11111011
00000000
00000100
11111011

Decimal number: 100 Binary equivalent: 01100100

00101011
**1*1*11
OOXOXOXX

```
<h2>PROBLEMS</h2>

<br><br>
NOTE!- As such bitset may not feel useful but there are particular sets of problems wherein such properties and function would save a lot of efforts and make things much more simpler.
