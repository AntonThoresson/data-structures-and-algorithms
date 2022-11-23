#include "student3_listque.h"
#include "assert.h"


const char* nameOfStudentLQue(){
    return "Anton Thoresson";
}



LQue::LQue()
{
    m_size = 0;
    m_pFront = nullptr;
    m_pBack = nullptr;


}

LQue::~LQue()
{
    while(m_size > 0)
        popFront();
    assert(m_pBack == nullptr);
    assert(m_pFront == nullptr);
    assert(m_size == 0);

}

void LQue::pushBack(float value)
{
    Link *pNewElment = new Link;
    pNewElment->m_value = value;
    pNewElment->m_pNext = nullptr;
    if (m_pFront == nullptr)
        m_pFront = m_pBack = pNewElment;
    else
    {
      m_pBack->m_pNext = pNewElment;
      m_pBack = pNewElment;
    }
    m_size += 1;

}

float &LQue::back()
{
    assert( m_size>0 );
    return m_pBack->m_value;

}

void LQue::popFront()
{
    assert( m_size>0 );
    Link *oldFront = m_pFront;
    m_pFront = m_pFront->m_pNext;
    m_size -= 1;
    if (m_pFront == nullptr)
        m_pBack = nullptr;
    delete oldFront;


}

float &LQue::front()
{
    assert( m_size> 0);
    return m_pFront->m_value;
}

int LQue::size() const
{
    return m_size;
}

