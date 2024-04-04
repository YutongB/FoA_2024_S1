- Big O recap 
- 
- Arrays
	- Declare : `int numbers[10];` `int nums[MAXINUM];`
		- This does NOT initialise the array -- All 'garbage' values in here at the moment! 
			- can initialise arrays using array initialisation syntax:
				`int numbers[10] = {10};`
				`int numbers[] = { 10, 2, 4, 5 };`
		- Arrays must have a positive size, and the size **cannot change** after it has been declared. Hence, the size of the array must be known before declaring it
			- What if we don't know the size? 
			- What if we want to save memory? 
	- Indexing : `numbers[1] = 6; `
	- No length/size functions
		- How do we get the length of an array then? 
	- Array variables -- example array.c
		- `int A[] = {10, 20, 30, 40, 50}`
		- What is `A`? `*A`? `A+3`?  -- example array.c
		- `*(arr + i)  => *(arr + i * sizeof(*arr))`
- Work on Exercise 7.01 to start on arrays

- Sorting + Searching  -- See slides, also maybe next week 
	- Linear search 
	- Binary search
	- Insertion 
	- Selection 
	- Quick 
- 