#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '^') 
        return 3;  // Exponentiation has highest precedence
    if (op == '*' || op == '/') 
        return 2;  // Multiplication and division have second highest precedence
    if (op == '+' || op == '-') 
        return 1;  // Addition and subtraction have the lowest precedence
    return 0;      // Parentheses have no precedence
}

// Function to check if the character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to perform infix to postfix conversion
string infixToPostfix(string infix) {
    stack<char> operators;  // Stack to hold operators
    string postfix = "";    // Resulting postfix expression
    
    for (char c : infix) {
        // If character is an operand, add it to postfix
        if (isalnum(c)) {
            postfix += c;
        }
        // If character is '(', push it to stack
        else if (c == '(') {
            operators.push(c);
        }
        // If character is ')', pop and output from the stack until '(' is found
        else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            if (!operators.empty() && operators.top() == '(')
                operators.pop(); // Remove '(' from stack
        }
        // If character is an operator
        else if (isOperator(c)) {
            // While the precedence of the current operator is less than or equal
            // to the operator at the top of the stack, pop from stack
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                if (c == '^' && operators.top() == '^') // Handle right associativity of '^'
                    break;
                postfix += operators.top();
                operators.pop();
            }
            // Push the current operator onto the stack
            operators.push(c);
        }
    }
    
    // Pop all the remaining operators in the stack
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }
    
    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
