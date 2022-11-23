#include "studentbadgames.h"
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool ragnarsTest1();

string nameOfStudent(){
    return "Anton Thoresson";
}

/**********************************************************
ANROP:   uint elva = oneMore( tio );
UPPGIFT: Returnerar inparametern+1
***********************************************************/
int oneMore(int a){
    return a+1;
}
/**********************************************************
ANROP:   uint nio = oneLess( tio );
UPPGIFT: Returnerar inparametern-1
***********************************************************/
int oneLess(int a){
    return a-1;
}

/**********************************************************
ANROP:   int s = sum(a,b);
UPPGIFT: Returnerar a+b;
***********************************************************/
int sum(int a, int b){
    if (b == 0)
        return a;
    return oneMore(sum(a, oneLess(b)));


}

/**********************************************************
ANROP:   int d = diff(a,b);
UPPGIFT: Returnerar a-b;
***********************************************************/
int diff(int a, int b){
    if (b == 0)
        return a;
    return oneLess(diff(a,oneLess(b)));

}

/**********************************************************
ANROP:   int prod = product(a,b);
UPPGIFT: Returnerar a*b;
***********************************************************/
int product(int a, int b){
    if (b == 0)
        return 0;
    return sum(a, product(a, oneLess(b)));
}

/**********************************************************
ANROP:   int result = pow(a,b);
UPPGIFT: Returnerar a upphöjt till b;
***********************************************************/
int pow(int a, int b){
    if (b==0)
        return 1;
    return product(a, pow(a, oneLess(b)));


}

/**********************************************************
ANROP:   int factorial = fac(a);
UPPGIFT: Returnerar a!
***********************************************************/
int fac(int a){
    if (a == 0)
        return 1;
    return product(a,fac(oneLess(a)));
}


void studentsTest(){

    // testa alla funktiner här
    // Men skriv bara mycket små tal ( < 5 )
    // Annars kanske programmet kraschar pga
    // stackoverflow

    assert(sum(2,2) == 4);
    assert(diff(4,3) == 1);

    assert(product(4,2) == 8);
    assert(product(1,1) == 1);

    assert(pow(0,1) == 0);
    assert(pow(3,0) == 1);
    assert(pow(2,2) == 4);

    assert(fac(0) == 1);
    assert(fac(1) == 1);
    assert(fac(4) == 24);


    cout << endl << "####### MINA TESTER LYCKADES !!! ########" << endl;



}

int main()
{

    studentsTest();

    ragnarsTest1();

}

