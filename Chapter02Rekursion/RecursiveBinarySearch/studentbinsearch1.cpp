#include "studentbinsearch1.h"

#include "ragnarstest.h"
#include <cassert>

#include <iostream>
using namespace std;


const char* nameOfStudent1(){
    return "Anton Thoresson";
}


/****************************************************************
ANROP:    bool exist = containedInSortedarray(x, pBegin, pEnd);
VERSION:  ...
UPPGIFT:  Returnerar true omm *p==x för något p i
          intervallet [pBegin, pEnd), dvs pBegin <= p < pEnd
          (observera att pEnd skall peka på första elementet efter arrayen)
OBS:      Alla tal mellan pBegin och pEnd måste vara sorterade i
          stigande ordning
*****************************************************************/
bool containedInSortedarray(int x,  const int* pBegin, const int* pEnd)
{
    if (pBegin >= pEnd)
        return false;
    int size = int(pEnd-pBegin);
    if (size == 1)
        return *pBegin == x;
    else
    {
        const int *pMid = pBegin+size/2;
        if (*pMid == x)
            return true;
        if (x < *pMid)
            return containedInSortedarray(x, pBegin, pMid);
        else
            return containedInSortedarray(x, pMid+1, pEnd);
    }



}// contains



void studentsTest1(){

    cout << "Har borde studentens testresultat synas" << endl << endl;

    // TODO din egen testkod som anropar contains här
    const int size = 10;
    int arr[size]{2,3,5,7,11,24,28,31,35,41};

    assert(containedInSortedarray(5, &arr[0], &arr[size]) == true);
    assert(containedInSortedarray(41, &arr[0], &arr[size]) == true);
    assert(containedInSortedarray(24, &arr[0], &arr[size]) == true);

    assert(!containedInSortedarray(4, &arr[0], &arr[size]));
    assert(!containedInSortedarray(1, &arr[0], &arr[size]));
    assert(!containedInSortedarray(55, &arr[0], &arr[size]));

    int smallArr[1]{5};
    assert(containedInSortedarray(5, &smallArr[0], &smallArr[1]));
    assert(!containedInSortedarray(41, &smallArr[0], &smallArr[1]));
    assert(!containedInSortedarray(11, &smallArr[0], &smallArr[1]));

    int tomArr[]{0};
    assert(!containedInSortedarray(5, &tomArr[0], &tomArr[0]));

    cout << "############# STUDENT TESTEN LYCKADES!!! #############\n";

}

