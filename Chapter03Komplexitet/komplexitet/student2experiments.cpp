#include "experiments.h"

#include "sortingalgorithms.h"

#include <QElapsedTimer>
#include "dalgorandom.h"
#include <iostream>
using namespace std;



/***********************************************************************

 Resultat av experimenten:

 TODO


Fyll i körttid OCH komplexitet i nedanstående tabell

----------------------------------------------------------------
            |     ordnat   |   nästan ordnat |   slumpmässigt  |
----------------------------------------------------------------
bubbleSort  |       O(   ) |        O(   )   |          O(  )  |
----------------------------------------------------------------
insertSort  |       O(   ) |        O(   )   |          O(  )  |
----------------------------------------------------------------

TODO fyll också i nedanstående!

körtiden för insertSort (slumpmässig) skattas med t(n) = c*n^2
där c = ...

Tiden att sortera sortera 10 miljoner tal borde då bli

= ...  sekunder, dvs .... timmar.

Med std::sort tog det ....  att sortera 10 miljoner tal.



************************************************************************/




void sixExperiments(){

    cout << endl << endl << "sixExperiments()" << endl ;

    // Om du gör detta frivilliga uppdrag behöver du skriva kod här.
    // Du behöver också skriva funktioner som fyller
    // arrayer på olika sätt, sorterar, och mäter tid.
    //
    // Skriv inte koden så att du manuellt måste byta ut sorteringsfunktionerna
    // när du gör dina experiment, utan skriv koden så att denna funktion utför
    // alla 6 experimenten i följd! (Självklart får du dela upp koden i flera funktioner)
    // Låt sådan all kod ligga kvar så att jag kan upprepa dina experiment
    // utan att ändra i din kod.
    // One more thing: Tänk på att sorteringsalgoritmerna sorterar, och att du därför
    // måste återställa arrayernas slumpmässighet innan varje sortering (skriv gärna
    // hjälpfunktioner som fillWithRandom, fillWithRandomSorted, fillWithAlmostSorted).

    // Redogör för resultatet med en tabell i kommentaren överst i denna fil.



    cout << endl << "sixExperiments()" << endl;
}


void stdSortExperiment(){
    cout << endl << endl << "stdSortExperiment()" << endl;



}

const char* nameOfStudent2(){
    return "Homer Simpson"; // ändra till ditt namn
}

