#include "ragnarstest1.h"
#include "student1.h"

#include <string>
#include <iostream>
#include <algorithm>
#include <assert.h>
#include <QThread>
#include <assert.h>
#include <math.h>



using namespace std;

float absolute(float x){
    return x<0 ? -x : x;
}


bool okName1(){
    // Ändra INTE denna funktion !!!!
    // Ändra istället nameOfTheStudent1 ! (se anvisningarna i kap 0)

    string name = nameOfTheStudent1();

    if (name=="Homer Simpson"){
        cout << "nameOfStudent1() returnerar inte DITT namn!" << endl;
        assert(false);
    }
    return true;
}


// Sätter alla element till nan (not a number)
void prepareArray(float *arr, int size){
    for (int i=0; i<size;  i+=1 )
        arr[i] = nanf("");
}

// Verifierar att första och sista elementet är nan, och att alla andra är icke-nan.
void assertArr(float *arr, int size){
    assert( isnan( arr[0] ) && isnan(arr[size-1] ));
    for (int i=1; i<size-1 ; i+=1)
        assert( !isnan(arr[i]) );
}



void assertApproximation(float value, float approximation){
    float diff = value - approximation;
    float epsilon = 0.01f;
    assert( -epsilon < diff && diff < epsilon );
}

typedef void(*voidFromArrayFunction)(float* pBegin,  float* pEnd);
typedef float(*floatFromArrayFunction)(const float* pBegin,  const float* pEnd);
typedef bool(*boolFromFloatAndArrayFunction)(float x, const float* pBegin,  const float* pEnd);
typedef int(*intFromFloatAndArrayFunction)(float x, const float* pBegin,  const float* pEnd);


void testaFill( voidFromArrayFunction fillWithRandom){
    const int size = 100;
    float arr[size];

    float *pBegin = &arr[1];
    float *pEnd   = &arr[size-1];

    prepareArray(arr, size);
    fillWithRandom(pBegin, pEnd);
    assertArr(arr, size);
}


void testaFillSorted( voidFromArrayFunction fillWithRandomSorted){
    const int size = 100;
    float arr[size];

    float *pBegin = &arr[1];
    float *pEnd   = &arr[size-1];

    prepareArray(arr, size);
    fillWithRandomSorted(pBegin, pEnd);
    assertArr(arr, size);

    for (float* p=pBegin+1 ; p!=pEnd; p+=1)
        assert( *p>=*(p-1));

}

void testa( floatFromArrayFunction  minimumElement,
            floatFromArrayFunction  maximumElement,
            floatFromArrayFunction  averageElement,
            boolFromFloatAndArrayFunction   containedInArray,
            intFromFloatAndArrayFunction  numberOfValuesEqualTo){

    float data1[5] = {nanf(""), 6.0f, 2.3f, 15.4f, nanf("")};
    float data2[5] = {nanf(""), -6.0f, -2.3f, -15.4f, nanf("")};
    float data3[5] = {nanf(""), 6.0f, 2.3f, 6.0f, nanf("")};

    assertApproximation( minimumElement(&data1[1], &data1[4]) , 2.3f);
    assertApproximation( minimumElement(&data2[1], &data2[4]) , -15.4f);

    assertApproximation( maximumElement(&data1[1], &data1[4]) , 15.4f);
    assertApproximation( maximumElement(&data2[1], &data2[4]) , -2.3f);

    assertApproximation(averageElement(&data1[1], &data1[4]) , float( (6.0+2.3+15.4)/3 ));


    for (int i=1; i<4 ; i+=1){
        assert( containedInArray(data1[i], &data1[1], &data1[4]) );
    }
    assert( !containedInArray(2.0f, &data1[1], &data1[4]) );

    assert( numberOfValuesEqualTo(6.0f, &data3[1],&data3[4]) == 2 );
}

void printCheck(int i){
    cout << "test " << i << endl;
    QThread::msleep(500);

}

bool testIandP(){
    int testNumber = 0;

    printCheck(testNumber++);
    testaFill( fillWithRandomI );

    printCheck(testNumber++);
    testa(minimumElementI, maximumElementI,averageElementI,containedInArrayI, numberOfValuesEqualToI);

    printCheck(testNumber++);
    testaFillSorted( fillWithRandomSortedI);

    printCheck(testNumber++);
    testaFill( fillWithRandomP );

    printCheck(testNumber++);
    testa(minimumElementP, maximumElementP,averageElementP,containedInArrayP, numberOfValuesEqualToP);

    printCheck(testNumber++);
    testaFillSorted( fillWithRandomSortedP);

    printCheck(testNumber++);


    return true;
}


bool ragnarsTest1(){

   cout << "Hej " << nameOfTheStudent1() << ", nu kör vi Ragnars test 1." << endl;
   cout << "Om testen lyckas kommer ett meddelande som anger detta att skrivas ut," << endl;
   cout << "annars har du en bug" << endl;



   QThread::msleep(100);
   bool ok = okName1()
           && testIandP();

   cout << "Grattis, Ragnars test 1 lyckades! " << endl;
   return ok;
}
