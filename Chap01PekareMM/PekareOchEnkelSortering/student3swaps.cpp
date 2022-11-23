#include "student3swaps.h"
#include "dalgorandom.h"
#include <cassert>
#include <iostream>
using namespace std;

const char* nameOfTheStudent3(){
    return "Anton Thoresson";  // Byt ut denna sträng mot ditt eget namn!
}


// ################ Implementera swap med pekar- och referensanrop #################



// ANROP:   swap(a,b); eller swap( (&a), (&b) );
// UPPGIFT: Byter värden mellan a och b.
void swap(float* pa, float* pb){
    float temp = *pa;
    *pa = *pb;
    *pb = temp;

}

// ANROP:   swap(a,b); eller swap((a), (b));
// UPPGIFT: Byter värden mellan a och b.
void swap(float &a, float &b){
    float temp = a;
    a = b;
    b = temp;

}

// För att öva på referenser ger jag här en
// lite annorluna implementerting av max.
float& max(float &a, float &b){
    if (a>b)
        return a;
    return b;
}



void testaMax(){
    float a = dalgoRandom();
    float b = dalgoRandom();
    max(a,b) = 1;


    /* OBS! Förklara vad ovanstående kodrad gör, och varför!
     *
     *
     * a och b tilldelas ett random värde mellan 0-1. Det värde som är störst
     * tilldelas sedan värdet 1. Detta eftersom funktionen retunerar ett värde som en referens till en float.
     * Detta möjliggör att man kan anropa funktionen till vänster om en tilldelning.
     *
     *
     */

    cout << "a=" << a << " , b=" << b << endl;
}


void studentsTest3(){
    float pa = 3;
    float pb = 10;
    swap(&pa,&pb);
    assert(pa == 10 && pb == 3);
    cout << pa << ", " << pb << endl;

    float a = 3;
    float b = 10;
    swap(a,b);
    assert(a == 10 && b == 3);
    cout << a << ", " << b << endl;

}



void mainFunctionInStudent3(){

    cout << "\n\n\n################ testingCode3 #################\n\n";

    studentsTest3();
    testaMax();
}
