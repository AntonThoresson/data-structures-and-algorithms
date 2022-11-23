#include "student1cstackl.h"
#include <assert.h>
#include <iostream>

using namespace std;

const char* nameOfStudent1(){
    return "Anton Thoresson";
}

CStackL  CStackLConstruct(){
    // Jag lämnar kvar denna implementering
    CStackL theStack;
    theStack.m_pTop = nullptr;
    theStack.m_size = 0;
    return theStack;
}




CStackL  CStackLConstruct(const CStackL &other){
    CStackL theStack;
    theStack.m_pTop = nullptr;
    theStack.m_size = other.m_size;
    Link *pPreviousLink = nullptr;

    for (const Link *pOthLnk = other.m_pTop; pOthLnk != nullptr; pOthLnk=(*pOthLnk).m_pNext){
        Link *pCopy = new Link;

        (*pCopy).m_data = (*pOthLnk).m_data;
        (*pCopy).m_pNext = nullptr;
        if (pPreviousLink == nullptr)
            theStack.m_pTop = pCopy;
        else
            (*pPreviousLink).m_pNext = pCopy;
        pPreviousLink = pCopy;
    }
    return theStack;
}



void   CStackLDestruct(CStackL *pDettaObjekt){
    while (CStackLSize(pDettaObjekt) > 0)
    {
        CStackLPop(pDettaObjekt);
    }
    assert((*pDettaObjekt).m_pTop == nullptr);
    assert((*pDettaObjekt).m_size == 0);
}

void   CStackLPush(CStackL *pDettaObjekt, float data){
    Link *pNewTop = new Link;
    (*pNewTop).m_data = data;
    (*pNewTop).m_pNext = (*pDettaObjekt).m_pTop;
    (*pDettaObjekt).m_pTop = pNewTop;
    (*pDettaObjekt).m_size += 1;

}


float  CStackLTop(CStackL *pDettaObjekt){
    assert(pDettaObjekt->m_size > 0);
    return (*pDettaObjekt).m_pTop->m_data;

}


void CStackLPop(CStackL *pDettaObjekt){
    assert(pDettaObjekt->m_size > 0);
    Link *pOldTop = (*pDettaObjekt).m_pTop;
    (*pDettaObjekt).m_pTop = (*pOldTop).m_pNext;
    (*pDettaObjekt).m_size -= 1;
    delete pOldTop;

}

int  CStackLSize(CStackL *pDettaObjekt){
    return (*pDettaObjekt).m_size;

}

// ----- Din testkod
void testOfTop(){

    CStackL stack = CStackLConstruct();
    CStackLPush(&stack, 22);
    CStackLPush(&stack, 2);
    CStackLPush(&stack, 222);

    assert(CStackLTop(&stack) == 222);

    CStackLDestruct(&stack);

}
void testOfSizeAndPush(){
    CStackL stack = CStackLConstruct();
    CStackLPush(&stack, 22);
    CStackLPush(&stack, 2);
    CStackLPush(&stack, 222);

    assert(CStackLSize(&stack) == 3);
    CStackL emptyStack = CStackLConstruct();
    assert(CStackLSize(&emptyStack) == 0);

    CStackLDestruct(&stack);
    CStackLDestruct(&emptyStack);
}

void testOfPop(){
   CStackL stack = CStackLConstruct();
   CStackLPush(&stack, 40);
   CStackLPush(&stack, 40);
   CStackLPush(&stack, 40);
   CStackLPush(&stack, 40);

   CStackLPop(&stack);

   assert(CStackLSize(&stack) == 3);

   CStackLDestruct(&stack);
}

void studentTest1(){
    testOfPop();
    testOfSizeAndPush();
    testOfPop();

    cout << endl << "###### MINA TESTER LYCKADES ######" << endl;



}


