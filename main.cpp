#include "chp8_EX14.h"

int main(){

    /*
    void test_function(const test_parameter){
        //...
    }
    
    Yes, this can be done, but isn't really used too often (it has some
    niche cases though).

    Declaring your function paramter const will make it to where it can't be 
    changed or altered, if you do within the code, you'll get an error.

    You'd want to do it if you want to make sure that, that the function
    paramter can't be changed within the code.

    People don't do this often because, usually when you use a function parameter,
    you want to do somthing with it (math, logic, etc.), and this usually 
    requires the function parameter to be changed or altered in some way.
    */

   const int a = 5;
   int b = 10;

   test_function_1(a);
   test_function_2(b);

    return 0;
}