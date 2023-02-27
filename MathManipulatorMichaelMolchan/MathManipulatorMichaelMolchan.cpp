#include <iostream>
#include <cstring>

using namespace std;


// Function to split a C-string expression into individual elements (numbers, operators, and spaces)
void splitExpression(char expression[], char* elements[], int& count) {
    char* token = strtok(expression, " "); // get the first token
    count = 0;
    while (token != nullptr) { // loop through the tokens
        elements[count] = token; // store the token in the array
        count++;
        token = strtok(nullptr, " "); // get the next token
    }
}

// Function to print the elements of a C-string array, one per line
void printArray(char* elements[], int count) {
    for (int i = 0; i < count; i++){
        cout << elements[i] << endl;
    }
}
    
    
