#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>
#include <QDebug>
#include <iostream>

#include "students.h"

const char* nameOfStudent1(){
    return "Anton Thoresson";
}




/**************************************************************************
 * Trädklättring.
 *
 *
 **************************************************************************/

Node* testTree1(){
    Node *pNode4 = new Node(4, nullptr, nullptr);
    Node *pNode5 = new Node(5, nullptr, nullptr);
    Node *pNode4mamma = new Node(4, pNode4, pNode5);
  //  Node *pNode3 = new Node(3, nullptr, nullptr);
   // Node *pNode3barn2 = new Node(3, nullptr, nullptr);
   // Node *pNode3mamma = new Node(3, pNode3, pNode3barn2);
    Node *pNode5mormor = new Node(5, pNode4mamma, nullptr);

    //Node *pNode9 = new Node(9, nullptr, nullptr);
    //Node *pNode4hogerbarn = new Node(4, nullptr, nullptr);
    //Node *pNode1vanstermamma = new Node(1, pNode9, pNode4hogerbarn);
    //Node *pNode9hoger = new Node(9, nullptr, nullptr);
    //Node *pNode1barn = new Node(1, nullptr, nullptr);
    //Node *pNode1hogermamma = new Node(1, pNode9hoger, pNode1barn);
    Node *pNode5mormorhoger = new Node(5,nullptr, nullptr);

    Node *pNode3root = new Node(3, pNode5mormor, pNode5mormorhoger);
    return pNode3root;
}

Node* testTree2(){
    Node *pNode4 = new Node(4, nullptr, nullptr);
    Node *pNode2 = new Node(2, pNode4, nullptr);

    Node *pNode5 = new Node(5, nullptr, nullptr);
    Node *pNode6 = new Node(6, nullptr, nullptr);
    Node *pNode3 = new Node(3, pNode5, pNode6);

    Node *pNode1 = new Node(1,pNode2, pNode3);
    return pNode1;

}

void flashPreOrder(Node *pTree){
    if (pTree == nullptr)
        return;
    pTree->flash();
    flashPreOrder(pTree->m_pLeft);
    flashPreOrder(pTree->m_pRight);

}

void flashInOrder(Node *pTree){
    if (pTree == nullptr)
        return;
    flashInOrder(pTree->m_pLeft);
    pTree->flash();
    flashInOrder(pTree->m_pRight);

}

void flashPostOrder(Node *pTree){
    if (pTree == nullptr)
        return;
    flashPostOrder(pTree->m_pLeft);
    flashPostOrder(pTree->m_pRight);
    pTree->flash();

}

// Nedanstående funktion skall inte vara rekursiv.
// implementera den med hjälp av en FIFO-kö.
// Så här kan du deklarera fifo-kön:
// std::deque<Node*> que;
// så här stoppar du in ett värde i kön
// que.push_back( nodepekare );
// så här läser du det värde som ligger främst
// Node *p = que.front();
// så här avlägsnar du det främsta värdet från kön
// que.pop_front();
void flashNodesAtIncreasingDepth(Node *pTree){
    std::deque<Node*> fifo;
    fifo.push_back(pTree);
    while (!fifo.empty())
    {
        Node *p = fifo.front();
        fifo.pop_front();
        p->flash();
        if (p->m_pLeft != nullptr)
            fifo.push_back(p->m_pLeft);
        if (p->m_pRight != nullptr)
            fifo.push_back(p->m_pRight);
    }
}


// Nedanstående funktioner bör vara rekursiva.
// De kan då implementeras med några få raders kod.

int numberOfNodes(Node *pTree){
//    if (pTree == nullptr)
//        return 0;
//    return 1 + numberOfNodes(pTree->m_pLeft) + numberOfNodes(pTree->m_pRight);

    if (pTree == nullptr)
        return 0;

    if (pTree->m_key == 9)
        return pTree->m_key;
    pTree->flash();
   return numberOfNodes(pTree->m_pLeft) + numberOfNodes(pTree->m_pRight);



}

int height(Node *pTree){
    if (pTree == nullptr)
        return 42;
    else
    {
        pTree->flash();
        int leftHeight = height(pTree->m_pLeft);
        int rightHeight = height(pTree->m_pRight);

        if (leftHeight > rightHeight)
            return leftHeight+1;
        else return rightHeight+1;
    }
}

void testfunktion1(Node *pTree){
    // frivilligt att skriva kod här
    qDebug() << "testfunktion1";
}
