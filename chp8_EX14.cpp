#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*

- Can we declare a non-reference function argument const (e.g., void f(const int);)? 

    - What might that mean? 
    - Why might we want to do that? 
    - Why don’t people do that often? 


- Try it:
    write a couple of small programs to see what works.


*/

void test_function_1(const int a){
    cout << "const int: ";
    cout << a << endl;
    cout << "When alteration is attempted, I get error: \"expression must be a modifiable lvalue\"" << endl;
    //a = 5;
}

void test_function_2(int a){
    cout << "non-const int: ";
    cout << a << endl;
    cout << "When alteration is attempted, no errors are thrown." << endl;
    a = 5;
}


// int main(){

//     /*
//     void test_function(const test_parameter){
//         //...
//     }
    
//     Yes, this can be done, but isn't really used too often (it has some
//     niche cases though).

//     Declaring your function paramter const will make it to where it can't be 
//     changed or altered, if you do within the code, you'll get an error.

//     You'd want to do it if you want to make sure that, that the function
//     paramter can't be changed within the code.

//     People don't do this often because, usually when you use a function parameter,
//     you want to do somthing with it (math, logic, etc.), and this usually 
//     requires the function parameter to be changed or altered in some way.
//     */

//    test_function_1();
//    test_function_2();

//     return 0;
// }