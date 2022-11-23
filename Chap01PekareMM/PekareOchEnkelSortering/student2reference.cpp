#include "student2reference.h"

#include <iostream>
using namespace std;


const char* nameOfTheStudent2(){
    return "Anton Thoresson";  // Byt ut denna sträng mot ditt eget namn!
}




// ################ experiment med värde- pekar- och referensanrop #################



struct Exempelstruct{
    int m_intValue1;
    int m_intValue2;
    float m_array[1000];
};


void skrivStruktensAdresser(const Exempelstruct &s){
    cout << &s.m_intValue1 << endl;
    cout << &s.m_intValue2 << endl;
    cout << &s.m_array[0] << endl;
}




// call by value, theStruct kommer att kopieras (även arrayen)
void skrivAdresser1(Exempelstruct theStruct){
    cout << "skrivAdresser1" << endl;
    cout << "--------------" << endl;
    skrivStruktensAdresser( theStruct );
    cout << endl << endl;
}


// call by reference, theStruct är identisk med anroparens s.
void skrivAdresser2(const Exempelstruct &theStruct){
    cout << "skrivAdresser2" << endl;
    cout << "--------------" << endl;
    skrivStruktensAdresser( theStruct );
    cout << endl << endl;
}

// call by pointer. Nu är (*pThestruct) identisk med anroparens s.
void skrivAdresser3(const Exempelstruct *pTheStruct){
    cout << "skrivAdresser3" << endl;
    cout << "--------------" << endl;
    skrivStruktensAdresser( *pTheStruct );
    cout << endl << endl;
}


// Experimentkoden är färdigskriven med betrakta utskrifterna!!
void experimentMedParameteroverforing(){

    cout << "Experiment med parameteröverföring!\n";
    cout << "(studera utskrifterna så att du kan förklara dem i nedanstående kommentar)" << endl;

    Exempelstruct s;

    skrivAdresser1(s);
    skrivAdresser2(s);
    skrivAdresser3(&s);


    /* TODO!!
       Skriv din förklaring här:
       (förklara allt som efterfrågas i kompendiet!)

1. Då man använder sig av call by pointer allokeras storlek och en egen minnes adress
   skapas på stacken medans vid call by reference så delar (kopia skapas) man på samma minnes adress, en
   ny minnes adress skapas alltså inte (dock så tar den upp storlek på stacken) och då
   anropen är identiska i denna kod delar skrivAdresser2 och skrivAdresser3 samma adress på stacken.

2. Se min visualisering av hur stacken ser ut samt hur ordningen på adresserna blir
                                                                                                                     ^
                                                                                                      adress 213 osv |
                                                                                |-------------------|
                                                                                |   skrivAdress3()  | adress 212
                                                                                |-------------------|
                                                                                |   skrivAdress2()  | adress 212
                                                                                |-------------------|
                                                                                |   skrivAdress1()  | T.ex adress 200
                                                                                |-------------------|
                                                                                |      main         |   <------ STACK
                                                                                |-------------------|


3. Genom att kolla på adresserna är det möjligt att se antalet byte en int och float tar upp.
   I mitt fall kan jag se att både en int och en float tar upp 4 byte på minnet.
   Ex nedan:
   000000AC482FE780 (int)
   000000AC482FE784 (int)
   000000AC482FE788 (float)

   Som man kan se på de två sista siffrorna på adresserna ser man att det ökar med fyra vilket
   betyder att datorn har gjort plats för fyra byte var för varje datatyp.




     */
}




void mainFunctionInStudent2(){

    cout << "\n\n\n################ testingCode2 #################\n\n";

    experimentMedParameteroverforing();
}

