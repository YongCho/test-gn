#include <iostream>
#include "staticA.h"
#include "staticAOne.h"
#include "staticATwo.h"

void staticA()
{
    using namespace std;
    cout << "In staticA()" << endl;
    staticAOne();
    staticATwo();
}
