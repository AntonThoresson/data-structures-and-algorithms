#include "student2stackl.h"
#include <assert.h>
#include <iostream>

using namespace std;

const char* nameOfStudent2(){
    return "Anton Thoresson";
}

StackL::StackL(){

    m_size = 0;
    m_pTop = nullptr;
}


StackL::StackL(const StackL& theOther)
{
    m_pTop = nullptr;
    m_size = theOther.m_size;
    Link *pPreviousLink = nullptr;

    for (const Link *pOthLnk = theOther.m_pTop; pOthLnk != nullptr; pOthLnk=pOthLnk->m_pNext){
        Link *pCopy = new Link;
        pCopy->m_data = pOthLnk->m_data;
        pCopy->m_pNext = nullptr;
        if (pPreviousLink == nullptr)
            m_pTop = pCopy;
        else
            pPreviousLink->m_pNext = pCopy;
        pPreviousLink = pCopy;
    }

}

StackL::~StackL(){
    while (m_size > 0)
        pop();
    assert(m_pTop == nullptr);
    assert(m_size == 0);
}
 void StackL::push(float value){
    Link *pNewTop = new Link;
    pNewTop->m_data = value;
    pNewTop->m_pNext = m_pTop;
    m_pTop = pNewTop;
    m_size += 1;
}

void StackL::pop(){
    assert(m_size > 0);
    Link *pOldTop = m_pTop;
    m_pTop = pOldTop->m_pNext;
    m_size -= 1;
    delete pOldTop;
}


float StackL::top() const {
    assert(m_size > 0);
    return m_pTop->m_data;
}
int StackL::size() const {
    return m_size;
}


void testOfSizeAndPush()
{
    StackL stack;
    assert(stack.size() == 0);
    stack.push(2);
    stack.push(2);
    stack.push(2);
    stack.push(2);
    stack.push(2);
    assert(stack.size() == 5);
    stack.~StackL();
}

void testOfPopAndTop()
{
    StackL stack;
    stack.push(1);
    stack.push(2);
    stack.push(50);
    assert(stack.top() == 50);

    StackL stack2 = StackL(stack);
    assert(stack2.top() == 50);
    stack2.pop();
    stack2.pop();
    assert(stack2.top() == 1);

    stack.~StackL();
    stack2.~StackL();
}

void studentTest2()
{

     cout << endl << endl <<  "studentTest2..." << endl;
     testOfPopAndTop();
     testOfSizeAndPush();
     cout << endl << endl <<  "STUDENT TEST 2 LYCKADES!!!" << endl;
}
