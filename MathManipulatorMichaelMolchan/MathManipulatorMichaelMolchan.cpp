#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

// Function that divides the porgram into individual elements
vector<string> splitExpression(string expression) {
    vector<string> result; // create a vector that holds the individual elements
    stringstream ss(expression); // create a stringstream to parse the expression
    string token; // create a string variable to hold each individual element
    while (ss >> token) { // loop through the stringstream, extracting each token
        result.push_back(token); // add the token to the result vector
    }
    return result; // return the vector of individual elements
}

// Function to print the elements of a vector, one per line
void printVector(vector<string> v) {
    for (string element : v) {
        cout << element << endl; // print each element followed by a newline
    }
}

int main() {
    string expression; // declare a variable to hold the user's input
    while (true) { // repeat indefinitely until the user enters "0"
        cout << "Enter a mathematical expression (enter 0 to exit): ";
        getline(cin, expression); // read a line of input from the user
        if (expression == "0") { // if the input is "0", break out of the loop
            break;
        }
        vector<string> elements = splitExpression(expression); // parse the expression into individual elements
        cout << "Original expression: " << expression << endl;
        cout << "Elements of the expression: " << endl;
        printVector(elements); // print the individual elements of the expression
        cout << "Elements of the expression, reversed: " << endl;
        reverse(elements.begin(), elements.end()); // reverse the order of the elements
        printVector(elements); // print the reversed elements of the expression
    }
    return 0; // exit the program
}
