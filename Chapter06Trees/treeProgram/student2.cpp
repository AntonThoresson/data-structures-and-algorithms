

#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>
#include <QDebug>
#include "students.h"


const char* nameOfStudent2(){
    return "Anton Thoresson";
}

/**************************************************************************
 * Sökträd.
 *
 *
 **************************************************************************/

void insertKeyToSearchtree(Node*& pTree, int key){
    if (pTree == nullptr)
        pTree = new Node(key,nullptr, nullptr);
    else if (key < pTree->m_key)
        return insertKeyToSearchtree(pTree->m_pLeft, key);
    else if (key > pTree->m_key)
        return insertKeyToSearchtree(pTree->m_pRight, key);
}

bool contains(Node *pTree, int key){
    if (pTree == nullptr)
        return false;
    if (key < pTree->m_key){
        pTree->flash();
        return contains(pTree->m_pLeft, key);
    }
    if (key > pTree->m_key){
        pTree->flash();
        return contains(pTree->m_pRight, key);
    }

    return true;

}


Node* nodeWithMinimumKey(Node *pTree){
    if (pTree == nullptr)
        return nullptr;

    Node *ptrToLeaf = pTree;
    while (ptrToLeaf->m_pLeft != nullptr)
        ptrToLeaf = ptrToLeaf->m_pLeft;

    return ptrToLeaf;

}

void removeKeyFromSearchtree(Node* &pTree, int key){
    if (pTree == nullptr)
        return;
    else if (key < pTree->m_key)
        removeKeyFromSearchtree(pTree->m_pLeft, key);
    else if (key > pTree->m_key)
        removeKeyFromSearchtree(pTree->m_pRight, key);
    else
        if (pTree->m_pLeft == nullptr || pTree->m_pRight == nullptr)
        {
            Node *oldNode = pTree;
            pTree = (pTree->m_pLeft != nullptr? pTree->m_pLeft: pTree->m_pRight);
            delete oldNode;
        }
        else
        {
            pTree->m_key = nodeWithMinimumKey(pTree->m_pRight)->m_key;
            removeKeyFromSearchtree(pTree->m_pRight, pTree->m_key);
        }


}

/*** redogörelse för experiment ***************************************

  Hur stort blir trädets höjd respektive genomsnittliga
   djup om man stoppar in 255 element (gör flera experiment om det går)?


  TODO...
  Fem tester gjordes vilket resulterade i följande resultat:
  höjd = 14, 16, 14, 18, 16

  genomsnittligt djup = 7.40, 8.53, 7.45, 9.99, 8.04

  För ett träd som är så jämnt som möjligt hade det genomsnittliga djupet varit log2(n), där n är antalet noder.

  (gör flera experiment)

   OBS på Windowsmaskiner kan det vara svårt att utföra flera olika experiment.


  varför är det genomsnittliga djupet intressant? ... Det berättar söktiden för oss.


 ******************************************************************************/



void testfunktion2(Node *pTree){
    qDebug() << "testfunktion2";

    // frivilligt att skriva kod här
}
