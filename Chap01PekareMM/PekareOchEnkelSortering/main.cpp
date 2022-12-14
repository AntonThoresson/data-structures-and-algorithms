#include <stdio.h>

#include "student1.h"
#include "student2reference.h"
#include "student3swaps.h"
#include "student4thoughtreading.h"
#include "student5Sortings.h"

#include "ragnarstest1.h"
#include "ragnarstest2.h"
#include "ragnarstest3.h"
#include "ragnarstest4.h"
#include "ragnarstest5.h"
#include "student6tidtagningsexperiment.h"

#include <iostream>
using namespace std;

int main(int , char **)
{

    mainFunctionInStudent1();
    mainFunctionInStudent2();
    mainFunctionInStudent3();
    mainFunctionInStudent4();
    mainFunctionInStudent5();

    cout << endl;
    cout << "###################" << endl;
    cout << "###################" << endl;
    cout << "### Nu kommer   ###" << endl;
    cout << "### mina tester ###" << endl;
    cout << "### Lycka Till! ###" << endl;
    cout << "###################" << endl;
    cout << "###################" << endl;
    cout << endl;

    ragnarsTest1();
    ragnarsTest2();
    ragnarsTest3();
    ragnarsTest4();
    ragnarsTest5();


    mainFunctionInStudent6();



    return 0;
}
