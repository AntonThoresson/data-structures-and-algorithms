#include "student6tidtagningsexperiment.h"
#include "student1.h"
#include "student5Sortings.h"

#include <QElapsedTimer>
#include <math.h>
#include "student5Sortings.h"

#include <iostream>
#include <string>
using namespace std;

typedef void(*sortFunction)(float* pBegin,  float* pEnd);

float timeToSort(sortFunction sorter, const char* nameOfFunction, int sizeOfArray){
    float *pArr = new float[sizeOfArray];
    fillWithRandomI( pArr, pArr+sizeOfArray);
    cout << "Vi kommer nu att sortera " << sizeOfArray << " tal med " << nameOfFunction << ", tryck return!:";
    string str;
    getline(cin, str);


    QElapsedTimer myTimer;
    myTimer.start();

    sorter(pArr, pArr+sizeOfArray);

    float elapsedTime = (float) myTimer.elapsed()/ 1000.0;
    cout << "Fardig! Och det tog " << elapsedTime << " sekunder. \n";
    delete [] pArr;
    return elapsedTime;
}

void ragnarsTidtagningsexperiment(){
    int size = 100000;
    cout << "Valkommen till Ragnars tidtagningexpreimet!\n";
    cout << "Vi skall sortera " << size << " element pa olika satt!" << endl << endl;

    cout << "Skriv körtiderna i nedanstående komentar (i programfilen)!\n";

    cout << "(Det kan droja upp till nagon minut!)\n";


    timeToSort( bubbleSortI, "bubbleSortI", size );
    timeToSort( bubbleSortP, "bubbleSortP", size );
    timeToSort( insertSortI, "insertSortI", size );
    timeToSort( insertSortP, "insertSortP", size );

    cout << "ok, lat oss ocksa prova std::sort (som behandlas senare i kursen)\n";

    timeToSort( std::sort, "std::sort", size );

/*
    TODO
    Körtider:

    bubbleSortI: 22.13 sekunder
    bubbleSortP: 22.938 sekunder

    insertSortI: 1.254 sekunder
    insertSortP: 1.37 sekunder

    std::sort: 0.009 sekunder

    (kompilerades i "profile mode")

  */
}

void mainFunctionInStudent6(){
    cout << "\n\n\n################ testingCode6 #################\n\n";

    ragnarsTidtagningsexperiment();
}

