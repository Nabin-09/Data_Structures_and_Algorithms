#include <iostream>
#include <cmath>
#include <string>
#include <unordered_map>

using namespace std;

// Function to define the user input function based on a string expression
double userFunction(double x, const string& expr) {
    unordered_map<char, function<double(double)>> operators = {
        {'+', [](double a, double b) { return a + b; }},
        {'-', [](double a, double b) { return a - b; }},
        {'*', [](double a, double b) { return a * b; }},
        {'/', [](double a, double b) { return a / b; }},
        {'^', [](double a, double b) { return pow(a, b); }},
    };

    // Replace this function with your code to safely evaluate the expression string
    // This is a simplified example using a basic stack approach, consider using libraries
    // for robust expression evaluation
    stack<double> values;
    for (char c : expr) {
        if (isdigit(c)) {
            values.push(c - '0');
        } else if (operators.count(c)) {
            double b = values.top();
            values.pop();
            double a = values.top();
            values.pop();
            values.push(operators[c](a, b));
        }
    }
    return values.top();
}

double bisectionMethod(double a, double b, double tol, const function<double(double x)>& f) {
    double c;
    while (abs(b - a) > tol) {
        c = (a + b) / 2;
        if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return c;
}

int main() {
    double a, b, tol,f;
    string expr;

    cout << "Enter the equation (e.g., x^2 - 2*x - 3): ";
    getline(cin, expr);

    cout << "Enter the initial interval (e.g., -2 3): ";
    cin >> a >> b;

    cout << "Enter the tolerance (e.g., 1e-6): ";
    cin >> tol;

    // Create a lambda function from the user input expression
    function<double(double)> f = [expr](double x) { return userFunction(x, expr); };

    double root = bisectionMethod(a, b, tol, f);

    cout << "The root of the equation is: " << root << endl;

    return 0;
}
