#include "gc_pointer.h"
#include "LeakTester.h"
#include <iostream>

int main()
{
    Pointer<int> p = new int(19);
    p = new int(21);
    p = new int(28);
	std::cout << "p = " << p << "\n";
    return 0;
}