#include "hello.hpp"

#include <iostream>
using namespace std;

void hello::say_hello() {
    cout << "hello, world, in library! version: " << SAY_HELLO_VERSION << endl;
}