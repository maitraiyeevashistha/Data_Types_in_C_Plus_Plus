# Data Types In C++

## Title: Data Types in C++  


---

## Aim :
*To study and implement C++ Program Structure (Data Types).*

## Introduction

This program is created to explore and understand some of the most commonly used data types in the C++ programming language. The main aim is to learn how different types of data are stored in memory, how much memory space they use, and how to apply them correctly in different programming situations.



## Data Types Covered

###  Integer (`int`)
- Stores whole numbers like `5`, `100`, or `-42` (no decimals)
- Takes **4 bytes** of memory
- Used for counting, indexing, etc.

###  Float (`float`)
- Used for decimal numbers like `3.14`, `-0.5`
- Single precision; takes **4 bytes**
- used when we can work with limited accuracy after the decimal 

###  Double (`double`)
- Stores decimal values with **double precision**
- More accurate than float
- Uses **8 bytes** of memory

###  Character (`char`)
- Stores a single character, e.g., `'A'`, `'z'`
- Takes **1 byte**

###  String (`string`)
- Holds multiple characters, e.g., `"Hello"`
- Memory usage **varies** (dynamic allocation)

###  Boolean (`bool`)
- Holds only `true` or `false`
- Uses **1 byte** even though it holds only 0 or 1

---

##  Key Concepts Demonstrated

###  `sizeof()` Operator
- Used to find how many bytes a data type takes in memory.

###  Choosing the Right Data Type
- We have learnt to use :
  - `int` for counting
  - `float`/`double` for decimals
  - `char` for single letters
  - `string` for text
  - `bool` for logic

###  Input & Output
- Used `cin` to take input from the user.
- Used `cout` to display results on the screen.

---

##  Sample Output :
Enter any integer:15   
Integer = 15 and size is 4 bytes   
Enter any number with decimal:17.65   
Float= 17.65 and size is 4 bytes   
Enter any number with decimal:13.98   
Double= 13.98 and size is 8 bytes   
Enter any string:Hello   
String = Hello and size is 32 bytes   
Enter any character:h   
Character = h and size is 1 bytes   
Enter any boolean:false   
Boolean = 1 and size is 1 bytes   


##  Observations

- A `bool` takes **1 byte**, not 1 bit, due to system memory alignment.
- `double` gives more precise results than `float`, but takes more memory.
- `string` is not a basic type; it uses dynamic memory and is handled internally by the system.
- Understanding data types helps you write efficient and correct programs.

##  Conclusion

This program showed how different types of data are stored, how to use input/output, and how to check memory size using `sizeof()`.




