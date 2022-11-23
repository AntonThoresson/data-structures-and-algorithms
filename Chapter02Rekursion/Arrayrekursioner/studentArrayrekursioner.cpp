
#include "studentArrayrekursioner.h"
#include <cassert>
#include <iostream>
#include <random>

using namespace std;


std::string nameOfStudent(){
    return "Anton Thoresson";  // TODO andra till ditt namn!
}



float sum(const float *pBegin, const float *pEnd){
    if (pBegin >= pEnd)
        return 0;
    return *pBegin + sum(pBegin+1,pEnd);



}


void fillValue(float value,  float *pBegin,  float *pEnd){
    if (pBegin >= pEnd)
        return;
    *pBegin = value;
    fillValue(*pBegin, pBegin+1, pEnd);

}

bool hasValueInRange(float min, float max, const float *pBegin, const float *pEnd){

    if (min >= max || pBegin >= pEnd)
        return false;

    else if (*pBegin >= min && *pBegin < max)
        return true;
    else return hasValueInRange(min, max, pBegin+1, pEnd);



}

int numberOfValuesInRange(float min, float max, const float *pBegin, const float *pEnd){
    int antal = 0;
    if (min >= max || pBegin >= pEnd)
        return 0;
    if (*pBegin >= min && *pBegin < max)
        ++antal;
    antal += numberOfValuesInRange(min, max, pBegin+1, pEnd);

    return antal;
}



void testSum(){
    float arr[5]{1,3,7,5.5,1}; //sum = 17.5
    assert(sum(&arr[0],&arr[5]) == 17.5);
}

void testaFill(){
    float arr[5]{1,3,7.5,5.5,1};
    cout << "Testar fillValue:" << endl << "[";
    fillValue(3, &arr[0], &arr[5]);
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
    cout << "]" << endl;
    assert( arr[0] == 3);
    assert( arr[3] == 3);
}

void testInRange(){
    float arr[5]{3,1,7,5.5,1};
    const float epsilon = 0.001;
    assert( hasValueInRange(3-epsilon, 3+epsilon,  &arr[0], &arr[5]));
    assert(hasValueInRange(1,1,&arr[0], &arr[5]) == false);

}

void testNumberOfValue(){
    float arr[4]{1,2,1,3};
    const float epsilon = 0.001;
    assert(numberOfValuesInRange(1-epsilon, 1+epsilon, &arr[0], &arr[4]) == 2);
    assert(numberOfValuesInRange(4-epsilon, 4+epsilon, &arr[0], &arr[4]) == 0);
}

void studentTest(){

    testSum();
    testaFill();
    testInRange();
    testNumberOfValue();


    cout << endl << "############ MINA TESTER GICK IGENOM!!!############" << endl;

}


// ------------


