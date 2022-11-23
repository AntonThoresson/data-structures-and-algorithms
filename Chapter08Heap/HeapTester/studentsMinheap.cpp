#include "studentsMinheap.h"
#include "assert.h"



const char* nameOfStudent(){
    return "Anton Thoresson";
}

MinHeap::MinHeap(int sizeOfArray)
    :m_sizeOfArray(sizeOfArray)
{    
    n_theArray = new int[m_sizeOfArray];
    m_size = 0;
}

MinHeap::~MinHeap(){
    delete [] n_theArray;
}

void MinHeap::insert(int data){
    assert(!isFull());
    m_size += 1;
    int ixHole = m_size;
    while (ixHole > 1 && n_theArray[ixHole/2] > data) //låt mamman trilla ned så länge hon > x
    {
        n_theArray[ixHole] = n_theArray[ixHole/2]; //flytta ned mamman till hålet
        ixHole /= 2; //flytta hålet till mamman
    }
    n_theArray[ixHole] = data;
}


int MinHeap::min()
{
    return n_theArray[1];
}


void MinHeap::deleteMin(){
    assert( !isEmpty() );
    n_theArray[1] = n_theArray[m_size--];
    percolateDown(1);

}


void MinHeap::percolateDown(int ix){
    int value = n_theArray[ix];
    while (ix*2 <= m_size) //sålänge value är större än minsta barnet: flytta upp minstingen till hålet
    {
        int ixChild = ix*2; //vänstra barnet
        if (ixChild != m_size && n_theArray[ixChild+1] < n_theArray[ixChild])
            ixChild += 1; //child är nu det minsta barnet
        if (n_theArray[ixChild] >= value)
            break;
        n_theArray[ix] = n_theArray[ixChild]; //flytta upp
        ix = ixChild; //flytta ned hålet
    }
    n_theArray[ix] = value;
}

int MinHeap::size()
{
    return m_size;
}


// Fyller heapens array med data utan att organisera det i en heap-struktur.
// (detta gör man istället interaktiv)
void MinHeap::fillArrayWithData(int *newData, int size)
{
    assert( size<m_sizeOfArray);

    for (int i=1; i<=size ; i+=1)
        n_theArray[i] = newData[i];
    m_size = size;
}
