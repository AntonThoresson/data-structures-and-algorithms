#include "studentsvenska.h"

#include <iostream>
#include <cassert>

#include <string>

using namespace std;
string svenskaFranHeltal(unsigned int tal){
    string uppTillTjugo[]{"noll", "ett","tva", "tre", "fyra","fem","sex","sju","atta","nio","tio","elva","tolv",
        "tretton","fjorton","femton","sexton","sjutton","arton","nitton"};


    string tiotal[]{"noll", "tio", "tjugo", "trettio", "fyrtio", "femtio", "sextio", "sjuttio", "attio", "nittio"};

    if (tal == 0)
        return "noll";
    string resultat;
    if (tal/1000000000 > 0){
        resultat += svenskaFranHeltal(tal/1000000000) + "miljarder";
        tal %= 1000000000;
    }

    if (tal/1000000 > 0){
        resultat += svenskaFranHeltal(tal/1000000) + "miljoner";
        tal %= 1000000;
    }

    if (tal/1000 > 0){
        resultat += svenskaFranHeltal(tal/1000) + "tusen";
        tal %= 1000;
    }

    if (tal/100 > 0){
        resultat += svenskaFranHeltal(tal/100) + "hundra";
        tal %= 100;
    }

    if (tal > 0){
        if (tal < 20)
            resultat += uppTillTjugo[tal];
        else
        {
            resultat += tiotal[tal/10];
            if (tal%10 > 0)
                resultat += uppTillTjugo[tal%10];
        }
    }
    return resultat;

}
void studentTest(){

}
