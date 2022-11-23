#include "student5Sortings.h"
#include "student1.h"
#include "student3swaps.h"

#include "ragnarstest5.h"

#include <iostream>
using namespace std;

// Läs detta!
// Nedan finns version I och P av bubble- respektive insert-sort.

// Själv har jag implementerat bubbleSortI och insertSortP.
// Två algoritmer återstår!



// ************************************************************
// ANROP:   char* namn = nameOfStudent5();
// UPPGIFT: Returnerar ditt namn!
// ************************************************************
const char* nameOfTheStudent5(){
    return "Anton Thoresson";  // Byt ut denna sträng mot ditt eget namn!
}



/**********************************************************************************
 * ANROP:   bubbleSortI( pBegin, pEnd);
 * UPPGIFT: pBegin och pEnd definierar en array av element (pBegin pekar på det
 *          första elementet och pEnd EFTER det sista).
 *          Funktionen sorterar arrayen så att det minsta elementet hamnar först.
 *
 *          Algoritmen som används måste vara den version av bubbleSort som
 *          beskrivs i uppdragshäftet!!
 * ********************************************************************************/
void bubbleSortI(float *pBegin, float *pEnd){
    long int size = pEnd - pBegin;
    for (long int maxIndex = size-1 ; maxIndex>0 ; maxIndex -= 1)
        for (int i=0 ; i<maxIndex ; i+=1)
            if (pBegin[i]>pBegin[i+1])
                swap( (pBegin[i]), (pBegin[i+1]));
}


/**********************************************************************************
 * ANROP:   insertSortI( pBegin, pEnd);
 * UPPGIFT: pBegin och pEnd definierar en array av element (pBegin pekar på det
 *          första elementet och pEnd EFTER det sista).
 *          Funktionen sorterar arrayen så att det minsta elementet hamnar först.
 *
 *          Algoritmen som används måste vara den version av insertSort som
 *          beskrivs i uppdragshäftet!!
 * ********************************************************************************/
void insertSortI(float *pBegin, float *pEnd){
    int size = int(pEnd-pBegin);

    for (int i = 0; i < size-1; ++i){
        float lastInOrder = pBegin[i+1];
        int j = i;
        for ( ; j >= 0 && pBegin[j] > lastInOrder; --j)
            pBegin[j+1] = pBegin[j];
        pBegin[j+1] = lastInOrder;
    }



}



void bubbleSortP(float *pBegin, float *pEnd){

    for (float *x = pEnd-1; x > pBegin; --x)
        for (float *p = pBegin; p < x; ++p)
            if (*p > *(p+1))
                swap(*p, *(p+1));



}


void insertSortP(float *pBegin, float *pEnd){

    for (float *pLastInOrder=pBegin; pLastInOrder<pEnd-1 ; pLastInOrder+=1){
        float x = *(pLastInOrder+1);
        float *p = pLastInOrder;
        for (   ; p>=pBegin && *p>x ; p-=1)
            *(p+1) = *p;
        *(p+1) = x;

    }

}


void studentsTest5(){

    // Testa själv bubble- och insert- sort här!
    cout << "Dina egna tester maste komma haer!\n";
    float arr[5]{5,5,55,-55,4};
    cout << "Test bubbleSortP: \n";
    bubbleSortP(&arr[0],&arr[5]);
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
    cout << endl << "-------------------------" << endl;

    cout << "Test bubbleSortI: \n";
    bubbleSortI(&arr[0],&arr[5]);
    for (int i = 0; i < 5; ++i)
        cout << arr[i] << " ";
     cout << endl<< "-------------------------" << endl;

     float arr2[5]{9,7,3,6,2};
     cout << "Test insertSortI:\n";
     insertSortI(&arr2[0], &arr2[5]);
     for (int i = 0; i < 5; ++i)
         cout << arr2[i] << " ";
      cout << endl << "-------------------------" << endl;

      cout << "Test insertSortP:\n";
      insertSortP(&arr2[0], &arr2[5]);
      for (int i = 0; i < 5; ++i)
          cout << arr2[i] << " ";
       cout << endl << "-------------------------" << endl;



}


void mainFunctionInStudent5(){

    cout << "\n\n\n################ testingCode5 #################\n\n";

    studentsTest5();


}
