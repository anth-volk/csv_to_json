#include <stdbool.h>

// From errorTesting.c
bool errorTestArgc(int argc);
bool errorTestFile(char* arg, char option);
int errorExit(char* message, int errorCode);

// From utils.c
char* strInitCpy(char* string);

// From csvReading.c