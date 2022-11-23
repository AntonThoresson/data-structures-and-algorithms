#include "student1mergesort.h"
#include <algorithm>// får ej användas



const char* nameOfStudentMergesort(){
    return "Anton Thoresson";
}



//   lägg gärna in diverse hjälpfunktioner här!

//  ...

//  ...
int min (int a, int b){
    return (a<b? a: b);
}

void merge(const float* pFromBegin,  const float *pFromEnd, int sizeOfFromRuns, float *pToBegin){
    int li = 0;
    int ti = li;
    int size = pFromEnd - pFromBegin;
    int li2 = size/2;
    int ri = li2+1;
    while (li <= li2 && ri <= size)
    {
       if (pFromBegin[li] <= pFromBegin[ri])
           pToBegin[ti++] = pFromBegin[li++];
       else pToBegin[ti++] = pFromBegin[ri++];
    }
    while (li <= li2)
        pToBegin[ti++] = pFromBegin[li++];
    while (ri <= size)
        pToBegin[ti++] = pFromBegin[ri++];
}


void mergesort(float* pBegin, float* pEnd){

    int size = pEnd - pBegin;

    float* pTemp  = new float [size];

    int p, i, l, mid, h;
    for (p = 2; p <= size; p *=2){
        for (i = 0; i + p-1 < size; i += p){
            l = i;
            h = i+p-1;
            mid = (l+h)/2;
            //merge()
        }
    }
    if (p/2 < size)
        //merge()

    delete [] pTemp;
}
