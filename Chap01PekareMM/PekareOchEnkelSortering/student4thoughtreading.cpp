#include "student4thoughtreading.h"
#include <iostream>
using namespace std;




// ################ MAGI! Förklara hur tankeläsningen fungerar! #################

void tankPaEttTal(){
    int x = 108;
    cout <<  "Denna funktion tanker pa ett hemligt tal (" << x << ")" << endl;

}

void tankelasning(){
    int hemligheten;
    cout <<  "Denna funktion tror att den andra funktionens hemlighet ar " << hemligheten << endl;
}

void experimentMedTankeoverforing(){
    cout << "Experiment med tankeoverforing!\n";
    cout << "(studera utskrifterna sa att du kan forklara dem i kommentaren)\n";
    tankPaEttTal();
    tankelasning();


    /* TODO
       Förklaring:

    På grund av sättet anropsstacken fungerar samt att "int hemlighet" inte initieras till ett värde
    tilldelar kompilatorn variablen "hemlighet" till det senaste värdet som har initieras (kan dock få ett random skräpvärde,
    beror på kompilatorn). Så sammanfattningsvis, när en variabel tilldelas en minnesplats av kompilatorn,
    är standardvärdet för den variabeln det värde som redan råkar finnas på den minnesplatsen och i detta
    fall är det värdet på x (108).



     */
}




void mainFunctionInStudent4(){

    cout << "\n\n\n################ testingCode4 #################\n\n";

    experimentMedTankeoverforing();

}


