#include <iostream>
#include "studentIdentiskaAnrop.h"
#include <cassert>
using namespace std;




void assertApproximation(float value, float approximation){
    float diff = value - approximation;
    float epsilon = 0.01f;
    assert( -epsilon < diff && diff < epsilon );
}

void ragnarsTest(){
    cout << "ragnarsTest testar att minimum fungerar..." << endl;
    const int size = 4;
    float arr[size]{ -1.2, 5.5, 1, 5.5 };
    assertApproximation( minimum(&arr[0], &arr[size]),  -1.2);

    float arr2[size]{ -1.2, 5.5, 1, -5.5 };
    assertApproximation( minimum(&arr2[0], &arr2[size]),  -5.5);

    cout << "...minimum tycks fungera " << endl;

}





int main()
{
    cout << endl << "Identiska Anrop" << endl<< endl;

    studentsTest();
    ragnarsTest();

    timingExperiment();

    return 0;
}
