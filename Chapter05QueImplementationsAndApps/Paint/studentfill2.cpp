// OBS OBS OBS OBS OBS OBS
// Denna fil tillhör INTE rekursionslabbarna, utan en senare laboration!!!!





#include "studentfill2.h"
#include <QDebug>
#include <deque>   // double-ended-que, har du tillåtelse att använda här!

using namespace std;


const char* nameOfStudent2(){
    return "Anton Thoresson";
}

// Nedanstående struct kan användas för att lagra koordinater
struct RK {
    RK(int r, int k): _r(r),_k(k) {}
    int _r;
    int _k;
};


// Denna metod visar bara hur man använder en sk deque
void exempelkodDemonstrerarDeque(){

    deque<RK> minQueue;


    qDebug() <<"Demo: vi använder minQueue som en STACK";
    qDebug() <<"      med push_back back och pop_back";

    minQueue.push_back( RK(0,0) );
    minQueue.push_back( RK(1,10) );
    minQueue.push_back( RK(2,20) );

    while (!minQueue.empty()) {
        RK rk = minQueue.back();
        minQueue.pop_back();
        qDebug() << "vi poppar: (" << rk._r << ", " << rk._k << ")";
    }

    qDebug() <<"Demo: vi använder nu minQueue som en FIFO";
    qDebug() <<"      med push_back front och pop_front";

    minQueue.push_back( RK(0,0) );
    minQueue.push_back( RK(1,10) );
    minQueue.push_back( RK(2,20) );

    while (!minQueue.empty()) {
        RK rk = minQueue.front();
        minQueue.pop_front();
        qDebug() << "vi pop_frontar: (" << rk._r << ", " << rk._k << ")";
    }

}



void nonRecursiveFillStack(int r, int k, IDrawingParent *im, QColor colorOld, QColor colorNew)
{
    deque<RK> stack;
    stack.push_back(RK(r,k));

    while (!stack.empty())
    {
        RK rk = stack.back();
        stack.pop_back();
        if (im->isInside(rk._r, rk._k) && im->pixel(rk._r,rk._k) == colorOld)
        {
            im->setPixel(rk._r,rk._k, colorNew);
            stack.push_back(RK(rk._r,rk._k+1));
            stack.push_back(RK(rk._r+1,rk._k));
            stack.push_back(RK(rk._r,rk._k-1));
            stack.push_back(RK(rk._r-1,rk._k));
        }
    }
}


void nonRecursiveFillFifo(int r, int k, IDrawingParent *im, QColor colorOld, QColor colorNew){
    deque<RK> fifo;
    fifo.push_back(RK(r,k));
    while (!fifo.empty())
    {
        RK rk = fifo.front();
        fifo.pop_front();
        if (im->isInside(rk._r, rk._k) && im->pixel(rk._r, rk._k) == colorOld)
        {
            im->setPixel(rk._r, rk._k, colorNew);
            fifo.push_back(RK(rk._r,rk._k+1));
            fifo.push_back(RK(rk._r+1,rk._k));
            fifo.push_back(RK(rk._r,rk._k-1));
            fifo.push_back(RK(rk._r-1,rk._k));
        }
    }
}
