#include "studentbinsearch2.h"
#include <cassert>

#include <iostream>

using namespace std;


const char* nameOfStudent2(){
    return "Anton Thoresson";
}


// Returnerar pekare till det första tal som är >= x, eller
// pEnd om inget sådant tal finns.
const float* pointerToFirstElementGreaterOrEqualToX(float x, const float* pBegin, const float* pEnd){
    int size = int(pEnd-pBegin);
    if (x <= *pBegin)
        return pBegin;
    if (x > *(pEnd-1))
        return pEnd;
    else
    {
        const float *pMid = pBegin+size/2;
        if (x <= *pMid)
            return pointerToFirstElementGreaterOrEqualToX(x, pBegin, pMid);
        else
            return pointerToFirstElementGreaterOrEqualToX(x,pMid+1, pEnd);
    }




}






void studentsTest2(){

   cout << "Har borde studentens testresultat synas\n\n";

   const float arr[5]{ 1.5, 3.111, 4.123, 8.1, 10.0001 };
   assert(pointerToFirstElementGreaterOrEqualToX(5, &arr[0], &arr[5]) == &arr[3]);
   assert(pointerToFirstElementGreaterOrEqualToX(10.2, &arr[0], &arr[5]) == &arr[5]);
   assert(pointerToFirstElementGreaterOrEqualToX(1, &arr[0], &arr[5]) == &arr[0]);

   const float test[35]{1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
   assert(pointerToFirstElementGreaterOrEqualToX(2, &test[0], &test[35]) == &test[3]);
   assert(pointerToFirstElementGreaterOrEqualToX(2, &test[0], &test[35]) != &test[2]);
   assert(pointerToFirstElementGreaterOrEqualToX(2, &test[0], &test[35]) != &test[4]);

    cout << "############# STUDENT TESTEN LYCKADES!!! #############\n";

   // TODO din egen testkod som anropar contains här
}

