#include "Dummy.hpp"
#include <plain_package/Dummy.hpp>
#include <iostream>

using namespace std;
using namespace rock_library_deps_pkgconfig;

void DummyClass::welcome()
{
    plain_package::DummyClass dummy;
    dummy.welcome();

    cout << "You successfully compiled and executed DummyProject. Welcome!" << endl;
}
