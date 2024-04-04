- More strings
	- **char str[5] = {‘N’, ‘i’, ‘c’, ‘e’, ‘\0’}; // <- array of chars
	- But, they’re NULL terminated character array -- Example string.c
		```c
		char str[5] = {‘N’, ‘i’, ‘c’, ‘e’, ‘\0’};
		char str[] = {78, 105, 99, 101, 0};
		char str[] = “Nice”;
		```
	- Useful string functions -- string_functions.c
		- To use them, `#include <string.h>`
		- `strlen(str);` -- Give length of string without the `\0`
		- `strncpy(str2, str);`  -- copy str -> str2  (including `\0`)**
		- strcomp(a, b) --a - b      
			- a > b : return +     a < b : return -     a == b : return 0
			- lower > upper 
		- 
	- Summary 
		<string.h>  has lots of useful string functions. [some more here](https://pubs.opengroup.org/onlinepubs/007908799/xsh/string.h.html).
		- strlen(str) :: find the length of string str (excludes` \0`)
			- WARNING: make sure str is` \0` terminated!
		- strcpy(dest, src) :: copy string src to string dest
			- WARNING: make sure length of dest >= length of src!
		- strcmp(str1, str2)
			- returns  0 if strings str1 == str2  (not pointers)
			- returns +1 if str1 > str2      “hi” > “ay”
			- returns -1 if str1 < str2      “aa” < “ab”
			    
		Exercise: implement these three algorithms yourself. Has been on the exam!
		Don’t forget about` <ctype.h>: isupper, toupper, tolower, isalnum, ...
	- String literal
		```c
		printf(“Hello world\n”);
			-------------
				 ^
				 String literal.
	```
		- String : A character array terminated with a ` \0 ` - null byte.
		- String literals: Sequences of characters enclosed in double quotes -- Read only

		- Escape characters 
			```c
			\n  //newline         (“line feed”)		
			\r  //carriage return     => these terms are from typewriters.		
			\\  //unescaped backslash			
			\”  //double quote		
			\’  //single quote
			\   //escaped newline (as seen before)
			\t  //tab character
````
		- NOTE
			```c
			char *p = “Hello”;
			```
			p has type “char *” or pointer to char - the first char of the string literal.
			Remember: a string literal is read only.  
			If you use p to modify the contents of the string literal, the behaviour is undefined.  
			
			  


- Structures -- See slide
- void * -- Sed slide 
