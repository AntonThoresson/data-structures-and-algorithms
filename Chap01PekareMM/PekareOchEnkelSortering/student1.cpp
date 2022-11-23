#include "student1.h"
#include <cassert>
#include "ragnarstest1.h"
#include "dalgorandom.h"

#include <iostream>
using namespace std;


// Läs Detta!

// Pekaruppdragen går ut på att implementera nedastående funktioner
// Många funktioner skall implementeras på två olika sätt (I och P):
// Version I: Räkna ut size och använd arraynotation med hakparanteser och heltalsindex.
// Version P: Använd istället pekarnotation, dvs  *p,  p+=1,  etc.




// ************************************************************
// ANROP:   char* namn = nameOfStudent1();
// UPPGIFT: Returnerar ditt namn!
// ************************************************************
const char* nameOfTheStudent1(){
    return "Anton Thoresson";  // Byt ut denna sträng mot ditt eget namn!
    // Om ditt project heter "homerSimpson_ChapXY" måste du också byta
    // namn på pro-filen (Avsluta först Qt-creator).
    // Se anvisningarna i kapitel 0.
}


// ################ version I, löses med [ ]  och indexnotation #############



// ************************************************************
// ANROP:   float value = minimumElement(&arr[0], &arr[size]);
// UPPGIFT: Returnerar arrayens minsta värde
// ************************************************************
float minimumElementI(const float *pBegin, const float *pEnd){

    // Jag låter min egen lösnin ligga kvar.
    // Förstå denna! Lös de andra uppgifterna själv.

    assert( pBegin < pEnd );

    int size = int(pEnd - pBegin);
    float extreme = pBegin[0];
    for (int i=0; i<size ; i+=1)
        if (pBegin[i]<extreme)
            extreme = pBegin[i];
    return extreme;
}


// ************************************************************
// ANROP:   float value = maximumElement( &arr[0], &arr[size] );
// UPPGIFT: Returnerar arrayens största värde
// ************************************************************
float maximumElementI(const float *pBegin, const float *pEnd){

    assert(pBegin < pEnd);

    int size = int(pEnd-pBegin);
    float maximum = pBegin[0];
    for (int i = 0; i < size; ++i){
        if (pBegin[i] > maximum)
            maximum = pBegin[i];
    }
    return maximum;

}


// ************************************************************
// ANROP:   float value = averageElement( &arr[0], &arr[size] );
// UPPGIFT: Returnerar arrayens medelvärde
// ************************************************************
float averageElementI(const float *pBegin, const float *pEnd){

    int size = int(pEnd-pBegin);
    float sum = 0;

    for (int i = 0; i < size; ++i)
        sum += pBegin[i];
    return sum/size;


}


// ************************************************************
// ANROP:   fillWithRandomI( &arr[0], &arr[size] );
// UPPGIFT: Fyller arrayen med oberoende slumpdata
// ************************************************************
void fillWithRandomI(float *pBegin, float *pEnd){

    int size = int(pEnd-pBegin);

    for (int i = 0; i < size; ++i)
        pBegin[i] = dalgoRandom();

}

// ************************************************************
// ANROP:   fillWithRandomI( &arr[0], &arr[size] );
// UPPGIFT: Fyller arrayen med sorterat slumpdata. Minst först
// ************************************************************
void fillWithRandomSortedI(float *pBegin, float *pEnd){
    // TODO

    // Tips: loopa från vänster till höger, låt varje tal vara
    // likamed föregående tal + ett slumptal >= 0
    int size = int(pEnd-pBegin);

    for (int i = 0; i < size; ++i){
        if (i == 0)
            pBegin[i] = dalgoRandom();
        else pBegin[i] = pBegin[i-1] + dalgoRandom();
    }

}


// ************************************************************
// ANROP:   bool contains = containedInArrayI(value,  &arr[0], &arr[size] );
// UPPGIFT: Returnerar true om arrayen innehåller angivet värde.
// ************************************************************
bool  containedInArrayI(float value, const float *pBegin, const float *pEnd){
    // Till studenten: Man bör egentligen aldrig undersöka om  två flyttal
    // är exakt lika stora. Istället är det normalt bättra att undersöka om
    // de är ungefär lika stora, och acceptera en avvikelse på någon promille.
    // I detta uppdrag är det dock meningen att du skall undersöka likhet (==),
    // ignorera med andra ord kompilatorns varning!

    int size = int(pEnd-pBegin);

    for (int i = 0; i < size; ++i)
        if (pBegin[i] == value)
            return true;

    return false;
}

// ************************************************************
// ANROP:   int number = numberOfValuesEqualToI(value,  &arr[0], &arr[size] );
// UPPGIFT: Returnerar antalet värden som är lika med angivet värde
// ************************************************************
int numberOfValuesEqualToI(float value, const float *pBegin, const float *pEnd){
    // Till studenten: Man bör egentligen aldrig undersöka om  två flyttal
    // är exakt lika stora. Istället är det normalt bättra att undersöka om
    // de är ungefär lika stora, och acceptera en avvikelse på någon promille.
    // I detta uppdrag är det dock meningen att du skall undersöka likhet (==),
    // ignorera med andra ord kompilatorns varning!

    int size = int(pEnd-pBegin);
    int counter = 0;

    for (int i = 0; i < size; ++i)
        if (pBegin[i] == value)
            ++counter;


    return counter;
}




// ################ version P, samma uppgifter löses nu med pekarnotation  ###############






float minimumElementP(const float *pBegin, const float *pEnd){
    // Jag låter min egen lösnin ligga kvar.
    // Förstå denna! Lös de andra uppgifterna själv.

    assert( pBegin < pEnd );
    float extreme = *pBegin;
    for (const float *p=pBegin ; p<pEnd; p+=1)
        if (*p<extreme)
            extreme = *p;
    return extreme;
}


float maximumElementP(const float *pBegin, const float *pEnd){
    assert(pBegin < pEnd);
    float max = *pBegin;
    for (const float *p = pBegin; p < pEnd; ++p)
        if (*p > max)
            max = *p;


    return max;
}

float averageElementP(const float *pBegin, const float *pEnd){

    float sum = 0;
    for (const float *p = pBegin; p < pEnd; ++p)
        sum += *p;
    int size = int(pEnd-pBegin);

    return sum/size;
}

void fillWithRandomP(float *pBegin, float *pEnd){
    for (float *p = pBegin; p < pEnd; ++p)
        *p = dalgoRandom();


}

void fillWithRandomSortedP(float *pBegin, float *pEnd){
    float gamla = 0;
    for (float *p = pBegin; p < pEnd; ++p){
        *p = gamla + dalgoRandom();
        gamla = *p;

    }


}

bool containedInArrayP(float value, const float *pBegin, const float *pEnd){
    for (const float *p = pBegin; p < pEnd; ++p)
        if (*p == value)
            return true;


    return false;
}


int  numberOfValuesEqualToP(float value, const float *pBegin, const float *pEnd){
    int counter = 0;
    for (const float *p = pBegin; p < pEnd; ++p)
        if (*p == value)
            ++counter;


    return counter;
}




// ################ Skriv din egen testkod här! #################


void studentsTest1(){

    // Testa själv dina funktioner här!
    // Det är OBLIGATRORISKT att anropa varje funktion som du själv
    // implementeratrat,  så att jag kan se att du förstått hur funktionerna skall
    // anropas!

    // Helst bör du också skriva kod som verifierar att dina funktioner
    // returnerar korrekta resultat för vissa exempeel på indata.
    // Istället för att skriva ut ett felmedelande på skärmen bör du se
    // till så att programmet kraschar om det innehåller ett fel!
    // Man kan göra detta genom att anropa:
    //   assert( false );
    // Men istället för att skriva:
    // if (!isOk) // om inte okay..
    //    assert( false );  // ..krascha programmet!
    // Bör man skriva:
    //   assert( isOk );
    // Ännu bättre... Istället för att skriva isOK kan man skriva ett uttryck som
    // blir true eller false, exempelvis (förutsatt att arr[0]==1 och arr[1]==2)
    //   assert( averageElementP(&arr[0],  &arr[2]) == 1.5 );



    cout << "(dina egna tester borde komma har!)\n";



    /********* MAX OCH MIN TEST *************/

    float arr1[5]{5,10,3,2,6};
    float arr2[5]{5.2,5.1,5.01,10,6};

    float arr4[5]{5.1, 5.11, 5.09, 5.1, 5.12};

    assert(minimumElementI(&arr1[0], &arr1[5]) == arr1[3]);
    assert(minimumElementI(&arr2[0], &arr2[5]) == arr2[2]);


    assert(minimumElementP(&arr1[0], &arr1[5]) == arr1[3]);
    assert(minimumElementP(&arr2[0], &arr2[5]) == arr2[2]);


    assert(maximumElementI(&arr1[0], &arr1[5]) == arr1[1]);
    assert(maximumElementI(&arr4[0], &arr4[5]) == arr4[4]);
    assert(maximumElementP(&arr1[0], &arr1[5]) == arr1[1]);
    assert(maximumElementP(&arr4[0], &arr4[5]) == arr4[4]);

    /*************************************/
    /********* AVERAGE TEST *************/
    const float arr5[2]{1.5,1.5};
    const float arr6[4]{2,6,4,4};

    assert(averageElementI(&arr5[0], &arr5[2]) == 1.5);
    assert(averageElementI(&arr6[0], &arr6[4]) == 4);
    assert(averageElementP(&arr5[0], &arr5[2]) == 1.5);
    assert(averageElementP(&arr6[0], &arr6[4]) == 4);

    /************************************/
    /********* RANDOM FUNKTIONER TEST *************/
    float arr7[5]{0,0,0,0,0};
    fillWithRandomI(&arr7[0], &arr7[5]);
    cout << "fillWithRandomI:" << endl;
    for (int i = 0; i < 5; ++i)
        cout << arr7[i] << endl;
    cout << "---------------------------" << endl;
    cout << "fillWithRandomP:" << endl;
    fillWithRandomP(&arr7[0], &arr7[5]);
    for (int i = 0; i < 5; ++i)
        cout << arr7[i] << endl;
    cout << "---------------------------" << endl;

    fillWithRandomSortedI(&arr7[0], &arr7[5]);
    cout << "fillWithRandomSortedI:" << endl;
    for (int i = 0; i < 5; ++i)
        cout << arr7[i] << endl;
    cout << "---------------------------" << endl;
    fillWithRandomSortedP(&arr7[0], &arr7[5]);
    cout << "fillWithRandomSortedP:" << endl;
    for (int i = 0; i < 5; ++i)
        cout << arr7[i] << endl;
    cout << "---------------------------" << endl;

    /************************************/
    /********* CONTAINED OCH EQUAL TEST *************/

    const float arr8[5]{1,2,3,4,5};
    const float arr9[5]{1,5,3,4,5};

    assert(containedInArrayI(2, &arr8[0], &arr8[5]) == true);
    assert(containedInArrayI(2, &arr9[0], &arr9[5]) == false);

    assert(containedInArrayP(2, &arr8[0], &arr8[5]) == true);
    assert(containedInArrayP(2, &arr9[0], &arr9[5]) == false);


    const float arr10[5]{2,2,2,4,5};
    const float arr11[5]{1,1,1,4,5};
    assert(numberOfValuesEqualToI(2, &arr10[0], &arr10[5]) == 3);
    assert(numberOfValuesEqualToI(2, &arr11[0], &arr11[5]) == 0);

    assert(numberOfValuesEqualToP(2, &arr10[0], &arr10[5]) == 3);
    assert(numberOfValuesEqualToP(2, &arr11[0], &arr11[5]) == 0);

    /************************************/

}




void mainFunctionInStudent1(){

    cout << "\n\n\n################ testingCode1 ################# \n\n";

    studentsTest1();


}


