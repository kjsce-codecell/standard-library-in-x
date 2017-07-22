<h1 align="center"><a href="#">Introduction</a></h1>

# Switching from Turbo to Gcc

Many institutions introduce programming to students by making them use Turbo compiler.
While the interface of Turbo compiler might give you (a beginner) an amazing feeling that you are writing a code, that's all it does. Turbo C++ uses a very old compiler which is outdated and is not in compliance with the latest standards, while the latest compilers are 32-bit or 64-bit and comply to the standards. If you haven't already, it's the right time to switch from TurboC++ to the worldwide used standard compiler like gcc/g++ or mingw-g++/mingw-gcc.
We will cut to the chase by stating most important and valuable features of GCC:
 - The GNU Compiler Collection is an open source (GPL) compiler. It's found on a wide variety of systems, ranging from GNU/Linux to every flavor of Unix, to Windows.
 - GCC contains support for many languages (C, C++, Fortran, to name but a few). It's highly portable, and widely used, and tends to produce good code. It can also be used as a cross-compiler (compiling for a system other than the one running GCC).
 - It's the default compiler choice for most Unix-type systems because most vendors don't bother to write their own compilers anymore - GCC is just too good for general use.
 - Under Windows, Microsoft's own dev tools are often preferred because they get support for new technologies quicker.
 - In high-performance programming environments (and some embedded environments) you may want a compiler that's more highly tuned to the chip/system in question.


# Turbo V/s Gcc

  - The main difference between turbo and GCC compilers is that turbo has not received an update since 2000. So it’s quite out dated.
  -  In GCC, there are header files such as cstdio which can be used to incorporate the functions of c in c++.
  - GCC has namespace std. Namespace is a block which defines the scope of the function which it contains. Std stands for standard i.e. it contains all the standard functions such as cout and cin. Using namespace will eliminate the confusion as to which version of the functions having the same name must be used in the program.
  - GCC eliminates the use of .h extension in header files.

While gcc is extensively used in Linux, mingw-gcc is the Windows version of gcc. Although it's best to code in Linux, but if you're more comfortable with Windows, it is recommended that you use replit. Repl.it is an online compiler (available at https://repl.it/), which supports many languages include c,c++,java,python etc.

# Installation and Use
Gcc is preinstalled in any unix based system. To invoke gcc to compile C++ files, “g++” command is used.
In Windows 10, one can enable the ubuntu unix terminal by enabling the developer mode in settings.
Say you have a file helloworld.cpp as follows :
```cpp
#include <cstdio>
#include <iostream>
using namespace std;
int main ()
{
    cout<<"Hello World"<<endl;
    return 0;
}

```

You can compile and run it from the unix prompt as follows :

```shell  

g++ helloworld.cpp

```

This creates an executable called "a.out". You can run it by typing

```shell

./a.out

```

Since no executable name was specified to g++, a.out is chosen by default. Use the `-o` option to change the name:

```shell

g++ helloworld.cpp -o helloworld

```
creates an executable called "helloworld".

# Points to Remember regarding GCC
  - No programming contest (except some school contests) and no online coding platforms (like CodeChef, Spoj,etc.) support Turbo C++, but use gcc for compilation. To make the code compilable with gcc and to ensure that the latest standards are met, few minor changes are required in the Turbo C++ code (though the rest of the
code remains the same).
  - There's no header file named as 'conio.h' in gcc. Including such header file would result in compilation error. Since conio.h header file doesn't exist, the latest standard does not support functions like clrscr(), getch(), getche(), gets(), cgets(), puts, putch(), cputs(), etc. too. Hence, using such functions would also result in compilation error. **So, do NOT use conio.h header file** and any of its functions. So how do you clear the screen then? You don't need to. Atleast you won't be required to clear the screen in the programming contests (whenever the program runs/starts, the output stream (if not the screen) is cleared automatically, and the contest's judging system compares the output in the output stream only with the expected output). Isn't getch() a necessary function to use? No! Program can very well work (and generate output) without that function. If gets() is not allowed, how do you then take string as input? You can always input strings using cin or scanf(). You would generally not be required to take strings with spaces as input in any
programming contest. And if you ever have to, you can use functions like cin.getline(), etc. In short, you can always do without using conio.h header file and any of its functions.

  - Functions from (most of) rest of the header files can be used normally, as you did in Turbo. But some of the header files are included differently. For example, you write
 ` #include<iostream> ` instead of #include<iostream.h> Not accepted. Same goes for iomanip.h. You include iomanip instead. And header files which were originally a
part of C language (like math.h, string.h, stdio.h, time.h, stdlib.h, ctype.h, etc.) must have 'c' as a prefix to them (and shouldn't be having .h at the end). You include them like:

```cpp

#include<cmath>
#include<cstring>
#include<cstdio>
#include<ctime>
#include<cstdlib>
#include<cctype>

```

  - Either you prefix std:: with all cout and cin statements and few other places, or we'd advice you to add the following line outside the main function: using namespace std;
  - Do not use void main(), and only int main(), and always return 0 at the end of the main() function.
