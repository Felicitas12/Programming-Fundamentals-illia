#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <sstream>
#include <stdexcept>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixToPostfix(const string &expression) {
    stack<char> operators;
    string postfix;
    istringstream tokens(expression);
    string token;

    while (tokens >> token) {
        if (isdigit(token[0])) {
            postfix += token + " ";
        } else if (token[0] == '(') {
            operators.push(token[0]);
        } else if (token[0] == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                postfix += " ";
                operators.pop();
            }
            operators.pop(); // Pop '('
        } else {
            while (!operators.empty() && precedence(operators.top()) >= precedence(token[0])) {
                postfix += operators.top();
                postfix += " ";
                operators.pop();
            }
            operators.push(token[0]);
        }
    }

    while (!operators.empty()) {
        postfix += operators.top();
        postfix += " ";
        operators.pop();
    }

    return postfix;
}

int performOperation(char operation, int operand1, int operand2) {
    switch (operation) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/':
            if (operand2 == 0) {
                throw runtime_error("Division by zero");
            }
            return operand1 / operand2;
        default: throw invalid_argument("Invalid operation");
    }
}

int evaluatePostfix(const string &expression) {
    stack<int> operands;
    istringstream tokens(expression);
    string token;

    while (tokens >> token) {
        if (isdigit(token[0])) {
            operands.push(stoi(token));
        } else {
            int operand2 = operands.top(); operands.pop();
            int operand1 = operands.top(); operands.pop();
            int result = performOperation(token[0], operand1, operand2);
            operands.push(result);
        }
    }

    return operands.top();
}

int main() {
    string expression;

    cout << "Enter an infix expression (e.g., 3 + 4 * 2): ";
    getline(cin, expression);

    try {
        string postfix = infixToPostfix(expression);
        cout << "Postfix expression: " << postfix << endl;
        int result = evaluatePostfix(postfix);
        cout << "Result: " << result << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
