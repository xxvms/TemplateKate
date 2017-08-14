#include <iostream>
//using namespace std;

template <class T>
T max(T&& t1, T&& t2)
{
    return t1 < t2 ? t2: t1;
}


int main() {

    std::cout << "max of 33 and 44 is " << max<double >(33.233, 44) << '\n';
    std::cout << "min of 33 and 44 is " <<  std::min(33, 44) << '\n';

    std::string s1 = "Hello";
    std::string s2 = "world";
    std::cout << "max of " << s1 << " and " << s2 << " is " << max(s1, s2) << '\n';
    return 0;
}
