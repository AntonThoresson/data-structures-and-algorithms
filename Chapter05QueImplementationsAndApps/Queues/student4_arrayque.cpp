#include "student4_arrayque.h"
#include "assert.h"

const char* nameOfStudentAQue(){
    return "Anton Thoresson";
}



AQue::AQue()
{

    m_size = 0;
    m_capacity = 10;
    m_pArr = new float[m_capacity];
    m_indexOfFront = 0;


}

AQue::~AQue()
{
    delete [] m_pArr;

}


void AQue::pushBack(float value)
{
    m_pArr[(m_indexOfFront + m_size) % m_capacity] = value;
    m_size += 1;
}

float &AQue::back()
{
    assert(m_size > 0);
    return m_pArr[(m_indexOfFront + m_size-1) % m_capacity];
}

void AQue::popFront()
{
    assert(m_size > 0);
    if (m_size == 1)
        m_indexOfFront = 0;
    else if (m_indexOfFront == m_capacity-1)
        m_indexOfFront = 0;
    else m_indexOfFront += 1;
    m_size -= 1;



}

float &AQue::front()
{
    assert(m_size > 0);
    return m_pArr[m_indexOfFront];
}


int AQue::size() const
{
    return m_size;

}

