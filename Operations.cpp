#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    // 1. Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl << endl;

    // 2. Relational Operators
    cout << "Relational Operators:" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl << endl;

    // 3. Logical Operators
    cout << "Logical Operators:" << endl;
    cout << "(a > 5 && b < 10) : " << ((a > 5) && (b < 10)) << endl;
    cout << "(a > 5 || b > 10) : " << ((a > 5) || (b > 10)) << endl;
    cout << "!(a == b) : " << (!(a == b)) << endl << endl;

    // 4. Assignment Operators
    cout << "Assignment Operators:" << endl;
    int x = 10;
    cout << "Initial x = " << x << endl;
    x += 5;  cout << "x += 5 -> " << x << endl;
    x -= 3;  cout << "x -= 3 -> " << x << endl;
    x *= 2;  cout << "x *= 2 -> " << x << endl;
    x /= 4;  cout << "x /= 4 -> " << x << endl;
    x %= 3;  cout << "x %= 3 -> " << x << endl << endl;

    // 5. Bitwise Operators
    cout << "Bitwise Operators (a=10, b=5):" << endl;
    cout << "a & b = " << (a & b) << endl;   // AND
    cout << "a | b = " << (a | b) << endl;   // OR
    cout << "a ^ b = " << (a ^ b) << endl;   // XOR
    cout << "~a = " << (~a) << endl;         // NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift
    cout << endl;

    // 6. Increment / Decrement Operators
    cout << "Increment/Decrement Operators:" << endl;
    int y = 5;
    cout << "Initial y = " << y << endl;
    cout << "y++ = " << (y++) << " (post-increment)" << endl;
    cout << "Now y = " << y << endl;
    cout << "++y = " << (++y) << " (pre-increment)" << endl;
    cout << "Now y = " << y << endl;
    cout << "y-- = " << (y--) << " (post-decrement)" << endl;
    cout << "Now y = " << y << endl;
    cout << "--y = " << (--y) << " (pre-decrement)" << endl;
    cout << "Now y = " << y << endl;

    return 0;
}
