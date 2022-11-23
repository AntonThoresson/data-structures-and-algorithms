#include "student2_arrstack.h"
#include <assert.h>

const char* nameOfStudentAStack(){
    return "Anton Thoresson";
}



AStack::AStack()
{
    m_capacity = 10;
    m_size = 0;
    m_pArr = new float[m_capacity];

}

AStack::~AStack()
{
    delete [] m_pArr;
}

void AStack::pushBack(float value)
{
    if (m_size == m_capacity){
        m_capacity *= 2;
        float *tempArr = new float[m_capacity];
        for (int i = 0; i < m_size; ++i)
            tempArr[i] = m_pArr[i];
        delete [] m_pArr;
        m_pArr = tempArr;
    }
    m_pArr[m_size++] = value;

}


float &AStack::back()
{
    assert(m_size > 0);
    return m_pArr[m_size-1];

}

void AStack::popBack()
{
    assert(m_size > 0);
    m_size -= 1;

}

int AStack::size() const
{
    return m_size;

}

void testOfSizeAndPush()
{
    AStack stack;
    stack.pushBack(1);
    stack.pushBack(1);
    stack.pushBack(1);
    stack.pushBack(1);
    assert(stack.size() == 4);
}
void testOfPopAndBack()
{
    AStack stack;
    stack.pushBack(2);
    stack.pushBack(55);
    stack.popBack();
    assert(stack.size() == 1);
    assert(stack.back() == 2);

}


void studentTest2()
{

    testOfSizeAndPush();
    testOfPopAndBack();


}

/******** kommentar som efterfrågades i "öka istället linjärt"

  blev det någon skillnad när du ökade arraystorleken med 10 istället för med dubbleing?

  Svar:
  Vid dubblering av m_capacity tar det runt 90-120ms att köra programmet men
  vid ett ökande av 10 crashar programmet då stacken är för långsam. Testen
  avslutas runt i = 70000-80000.


 ***********************************************************************/
