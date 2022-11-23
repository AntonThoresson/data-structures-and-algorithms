#include "studentstest.h"
#include "ragnarstest.h"
#include <iostream>
#include <cassert>
#include "student3_listque.h"
#include "student4_arrayque.h"
#include "student5_adeque.h"

using namespace std;


void studentstest(){

    // skriv din egen testkod här

    cout << "Haer boer studentens testrsultat synas" << endl;

    AQue que;
    for (int i = 0; i < 9; ++i){
        if(i == 1)
            que.pushBack(66);
        else que.pushBack(1);
    }

    que.pushBack(2);
    assert(que.back() == 2);
    que.popFront();
    assert(que.size() == 9);
    que.pushBack(5);
    assert(que.front() == 66);
    assert(que.size() == 10);
    cout << "STUDENT TEST LYCKADES" << endl;


}

