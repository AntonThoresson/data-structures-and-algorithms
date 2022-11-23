#include "ragnarstest.h"
#include "studentArrayrekursioner.h"

#include <string>
#include <iostream>
#include <cassert>

using namespace std;



void assertApproximation(float value, float approximation){
    float diff = value - approximation;
    float epsilon = 0.01f;
    assert( -epsilon < diff && diff < epsilon );
}

void testaSum(){
    const int size = 4;
    float arr[size]{ 3,1,1,5.5 };
    assertApproximation( sum( &arr[0], &arr[size]), 3+1+1+5.5 );
}

void testaFillValue(){
    const int size = 10;
    float arr[size]{0};
    fillValue(1, &arr[1], &arr[size-1]);
    assert( arr[0] == 0);
    assert( arr[1] == 1);
    assert( arr[size-2] == 1);
    assert( arr[size-1] == 0);
}

void testaHasValueInRange(){
    const int size = 4;
    float arr[size]{ 3,1,1,5.5 };
    const float epsilon = 0.001;
    assert( hasValueInRange(3-epsilon, 3+epsilon,  &arr[0], &arr[size]) );
    assert( hasValueInRange(5.5-epsilon, 5.5+epsilon,  &arr[0], &arr[size]) );
}


void testaNumberOfValuesInRange(){
    const int size = 4;
    float arr[size]{ 5.5, 5.5, 1, 5.5 };
    const float epsilon = 0.001;
    assert( numberOfValuesInRange(5.5-epsilon, 5.5+epsilon,  &arr[0], &arr[size]) == 3 );
    assert( numberOfValuesInRange(1-epsilon, 1+epsilon,  &arr[0], &arr[size]) == 1 );
    assert( numberOfValuesInRange(4-epsilon, 4+epsilon,  &arr[0], &arr[size]) == 0 );
}


void ragnarsTest(){

    cout << R"(
    ragnarsTest1 for arrayrekursioner.
    Efter testen skriver jag ut att den har lyckats,
    om du inte ser den utskriften har den misslyckats!
    Kor da i debug-lage, dvs tryck på Play-knappen med
    en liten lus.
    )";

    assert( nameOfStudent() != "Homer Simpson" );


    testaSum();
    testaFillValue();
    testaHasValueInRange();
    testaNumberOfValuesInRange();

    cout << R"(
    Grattis, ragnarsTest1 for arrayrekursioner har lyckats!

    )";

}


