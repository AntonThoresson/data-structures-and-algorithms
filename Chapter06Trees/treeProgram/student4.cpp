
#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>
#include <QDebug>

#include "students.h"


const char* nameOfStudent4(){
    return "Anton Thoresson";
}

/**************************************************************************
 * Fler uppgifter.
 **************************************************************************/


bool hasPathToTarget(Node *pTree){
//    if (pTree == nullptr)
//        return false;

//    pTree->flash();

//    if (pTree->isTarget()){
//        pTree->makeRed();
//        return true;
//    }

//    if (!hasPathToTarget(pTree->m_pLeft) && !hasPathToTarget(pTree->m_pRight))
//        return false;

//    pTree->makeRed();
//    return true;
    if (pTree == nullptr)
        return false;

    if (pTree->m_key == 9 || hasPathToTarget(pTree->m_pLeft) || hasPathToTarget(pTree->m_pRight))
        return true;
    pTree->flash();
    qDebug() << "x\n";
    return false;

}


bool didFind500(Node *pTree){
    if (pTree == nullptr)
        return false;
    if (pTree->m_key == 9)
        return true;
    if (didFind500(pTree->m_pLeft) || didFind500(pTree->m_pRight)){
        qDebug() << "true" << pTree->m_key << "\n";
    }
    qDebug() << "false" << pTree->m_key << "\n";
    return false;
}

void testfunktion4(Node *pTree){
    qDebug() << "testfunktion4";

    // frivilligt att skriva kod här

}





