- Ice breaker 

- Hello world! 
	- Ex1.02
- Input/output
	- Ex2.08
- Format specifiers
	- Ex3.07 and Ex3.07b 
- Bounds on numbers
	- Ex2.04


- #include libraries: 
	- <stdio.h> : standard I/O         <stdlib.h>
- Declaration:   
	- int x;
	- double height;
- Initialisation:   
	- x = 5;
	- int x = 5;
- Input:    
	- scanf("%d", &x);     returns number of valid arguments (here: 1)
	- input valid:  
		- if (scanf("%d %d", &a, &b) != 2) exit(EXIT_FAILURE);
- Output: 
	- printf("Your number is %d!\n", x);
- Datatypes: 
	- int "%d" 6   
	- double "%lf" 1.24   
	- char "%c" 'a'
- Macros:
	- #define NUM_BEARS (10 + 2)
- Compilation:
	- gcc(clang) -Wall -o program source.c       
- Running:        ./program
    