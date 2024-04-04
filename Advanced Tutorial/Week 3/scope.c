#include <stdio.h>

// Global variable declaration
int globalVar = 10;
int staticVar = 100;
int localVar = 1000; 

void demoFunction() {
    // Static variable declaration
    static int staticVar = 5;
    // Local variable declaration
    int localVar = 20;

    staticVar++;
    localVar++;
    globalVar++;

    printf("Inside demoFunction: staticVar = %d, localVar = %d, globalVar = %d\n", staticVar, localVar, globalVar);
}

int main() {
    int i;
    for (i = 0; i < 3; i++) {
        demoFunction();
    }

    // Accessing global variable in main
    printf("In main: globalVar = %d\n", globalVar);
    printf("In main: staticVar = %d\n", staticVar);
    printf("In main: localVar = %d\n", localVar);


    return 0;
}
