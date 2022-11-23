#include "studentsvenska.h"

#include <iostream>
#include <string>
#include <cassert>

using namespace std;


void ragnarsTest(){
    cout << "ragnarsTest. Om testen lyckas kommer det att skrivas ut nedan." << endl << endl;

    assert( svenskaFranHeltal(0) == "noll" );
    assert( svenskaFranHeltal(1) == "ett" );
    assert( svenskaFranHeltal(2) == "tva" );
    assert( svenskaFranHeltal(3) == "tre" );
    assert( svenskaFranHeltal(4) == "fyra" );
    assert( svenskaFranHeltal(5) == "fem" );
    assert( svenskaFranHeltal(6) == "sex" );
    assert( svenskaFranHeltal(7) == "sju" );
    assert( svenskaFranHeltal(8) == "atta" );
    assert( svenskaFranHeltal(9) == "nio" );
    assert( svenskaFranHeltal(10) == "tio" );
    assert( svenskaFranHeltal(11) == "elva" );
    assert( svenskaFranHeltal(12) == "tolv" );
    assert( svenskaFranHeltal(13) == "tretton" );
    assert( svenskaFranHeltal(14) == "fjorton" );
    assert( svenskaFranHeltal(15) == "femton" );
    assert( svenskaFranHeltal(16) == "sexton" );
    assert( svenskaFranHeltal(17) == "sjutton" );
    assert( svenskaFranHeltal(18) == "arton" );
    assert( svenskaFranHeltal(19) == "nitton" );
    assert( svenskaFranHeltal(20) == "tjugo" );
    cout << svenskaFranHeltal(21) <<endl;
    assert( svenskaFranHeltal(21) == "tjugoett" );
    assert( svenskaFranHeltal(22) == "tjugotva" );
    assert( svenskaFranHeltal(29) == "tjugonio" );
    cout << svenskaFranHeltal(30) <<endl;

    assert( svenskaFranHeltal(30) == "trettio" );
    assert( svenskaFranHeltal(33) == "trettiotre" );
    assert( svenskaFranHeltal(40) == "fyrtio" );
    assert( svenskaFranHeltal(50) == "femtio" );
    assert( svenskaFranHeltal(60) == "sextio" );
    assert( svenskaFranHeltal(70) == "sjuttio" );
    assert( svenskaFranHeltal(80) == "attio" );
    assert( svenskaFranHeltal(90) == "nittio" );
    cout << svenskaFranHeltal(100) <<endl;
    cout << svenskaFranHeltal(200) << endl;
    cout << svenskaFranHeltal(108) << endl;
    cout << svenskaFranHeltal(999) << endl;

    assert( svenskaFranHeltal(100) == "etthundra" );
    assert( svenskaFranHeltal(108) == "etthundraatta" );
    assert( svenskaFranHeltal(999) == "niohundranittionio" );
    assert( svenskaFranHeltal(3507) == "tretusenfemhundrasju" );
    cout << svenskaFranHeltal(9807) <<endl;

    assert( svenskaFranHeltal(9807) == "niotusenattahundrasju" );
    assert( svenskaFranHeltal(98507) == "nittioattatusenfemhundrasju" );

    assert( svenskaFranHeltal(298507) == "tvahundranittioattatusenfemhundrasju" );
    cout << svenskaFranHeltal(1298507) <<endl;

    assert( svenskaFranHeltal(1298507) == "enmiljonertvahundranittioattatusenfemhundrasju" );

    cout << svenskaFranHeltal(4123298507) << endl;

     assert( svenskaFranHeltal(4123298507) == "fyramiljarderetthundratjugotremiljonertvahundranittioattatusenfemhundrasju" );

    cout << endl << "Grattis, ragnarTest lyckades!" << endl << endl;
}



int main()
{
    cout <<
R"(
  ***********
  * Svenska *
  ***********
)";

    studentTest();
    ragnarsTest();


    return 0;
}
