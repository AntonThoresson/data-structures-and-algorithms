#include "sortingalgorithms.h"

#include <algorithm>
#include <iostream>

using namespace std;

// Uppdraget som beskrivs i häftet går i korthet ut på att analysera
// nedanstående algoritmer för olika typer av indata. Se uppdragsbeskrivning.
//

/***********************************************************************

 Resultat av analysen:

 TODO

 BubbleSort:
 n=(n(n-1))/2 - Ordningen på arrayen spelar ingen roll då man alltid kommer
 utföra samma antal iterationer oberoende på ordning. Jämförelsen
 kommer göras n+n gånger medan swappandet kommer variera beroende
 på hur ordnad arrayen är.


 InserSort:

 Best case när arrayen är sorterad kommer den yttre loopen iterera igenom arrayen
 och göra alla tilldelningar men inte gå in i den inre for loopen då argumenten
 inuti i den alltid kommer vara falska. Argumenten kommer kollas n-1 gånger och
 den yttre loopen blir n+1. (n+1) + (n-1) = 2n. Detta ger en komplexitet på O(n).

 När arrayen nästan är sorterad ( t.ex {5,2,3,4,1} ) kommer 5:an skiftas (1 iteration av inre loopen varje gång)
 för varje steg av den yttre loopen tills den hamnat sist i arrayen (då pLastInOrder pekar på pEnd-2)
 och först då kommer den inre loopen göra n-1 iterationer så att 1:an hamnar först i arrayen. Detta ger en
 komplexitet på O(n)

                 pEnd-2       <--- Se visualisering av algoritmens iterationer (yttre = horisontellt, inre = vertikalt)
 ---------------------
  |    |    |   |   |
                    |
                    |
                    |




 Tar vi föregående exempel array och slumpar dom elementen kan man se att vi har 5 element och
 algoritmen utför 4 steg --> 5 element x 4 steg == n x (n-1) == n^2 --> O(n^2). Har en bättre visuell
 förklaring nedskriven i mitt kollegieblock.


Fyll i nedanstående tabell och var  beredd på att förklara
hur du gjort analysen!

----------------------------------------------------------
            |  ordnat   | nästan ordnat |  slumpmässigt  |
----------------------------------------------------------
bubbleSort  | O( n^2  ) |  O( n^2  )    |   O( n^2 )     |
----------------------------------------------------------
insertSort  |  O( n )   |   O( n )      |     O( n^2 )   |
----------------------------------------------------------

************************************************************************/



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
    long long int size = pEnd - pBegin;
    for (long long int maxIndex = size-1 ; maxIndex>0 ; maxIndex -= 1)
        for (int i=0 ; i<maxIndex ; i+=1)
            if (pBegin[i]>pBegin[i+1])
                swap( (pBegin[i]), (pBegin[i+1]));
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



void testingSortAlgoritms(){

    // Här kan du skriva testkod om du vill experimentera med algoritmerna
    // men i just detta uppdrag är det ingen kravatt skriva testkod.



}


const char* nameOfStudent1(){
    return "Anton Thoresson"; // ändra till ditt namn
}

