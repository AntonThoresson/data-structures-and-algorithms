#include "student2heapsort.h"
#include <algorithm>  // får ej anvädas

#include <assert.h>
#include <iostream>


const char* nameOfStudentHeapsort(){
    return "Anton Thoresson";
}

int leftChild(int i){
    return i*2+1;
}

void percDown(float *pBegin, int ix, int size){
    int child = 0;
    float tmp = 0;
    for (tmp = std::move(pBegin[ix]); leftChild(ix) < size; ix = child){
        child = leftChild(ix);
        if (child != size-1 && pBegin[child] < pBegin[child+1])
            child += 1;
        if (tmp < pBegin[child])
            pBegin[ix] = std::move(pBegin[child]);
        else break;

    }
    pBegin[ix] = std::move(tmp);

}


void heapsort(float* pBegin, float* pEnd){
    int size = int(pEnd - pBegin);
    for (int i = size/2-1; i >= 0; --i)
        percDown(pBegin, i, size);
    for (int j = size-1; j > 0; --j){
        std::swap(pBegin[0], pBegin[j]);
        percDown(pBegin, 0, j);
    }

}
