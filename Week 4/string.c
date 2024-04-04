#include <stdio.h>

int main(){

    // char str[5] = "Hello";
    // char str[] = "Hello";
	// printf("%s", str);

    char str[20] = "Hello";

//     str[0] = 'J';
//     printf("%s\n", str);  // Jello
// // 

    str[5] = 'w'; // DANGER!  str isn’t NULL terminated!
    printf("%s\n", str); // Jellow32949032r0erwe90asdas 
    // // Might get a silent error or segmentation fault.




}

