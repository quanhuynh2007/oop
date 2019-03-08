#include<iostream>

int main() {
    int a = 5;
    [&] { std::cout << a << std::endl; }();   // a sẽ được truyền bằng reference.
    [=] { std::cout << a << std::endl; }();    // a sẽ được truyền bằng value.
    [&] { a = a + 1; std::cout << a << std::endl; }();   // --> In 6 
    std::cout << a << std::endl;
    return 0;
}
