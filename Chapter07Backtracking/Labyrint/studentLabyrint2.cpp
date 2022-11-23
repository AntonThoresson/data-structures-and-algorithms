#include "studentLabyrint2.h"
#include "rk.h"
#include "assert.h"
#include <vector>
#include <deque>

using namespace std;

// ANROP:  RK granne0 = rkOfNeighbor(rk, 0);
// Funktionen returnerar koorninaten till angivenm granne.
// (En koordinat har 4 grannar (höger, vänster, ner, upp)
// som nummreras från 0 till 3.)
RK rkOfNeighbor(RK rk, int ixOfneighbor){
    if (ixOfneighbor==0) return RK( rk.m_r,    rk.m_k +1);
    if (ixOfneighbor==1) return RK( rk.m_r,    rk.m_k -1);
    if (ixOfneighbor==2) return RK( rk.m_r +1, rk.m_k);
    if (ixOfneighbor==3) return RK( rk.m_r -1, rk.m_k);
    assert( false );
    return RK();
}


bool foundShortestPathToGoalFIFO(IMaze *pMaze, int r, int k){

    // Nedanstående deklarationer låter jag ligga kvar (radera om du vill).
    // rkPrevious blir en 2D-matris som du kan accessa med
    // hakparantesnotation (dvs rkPrevious[r][k]).
    // På varje plats i rkPrevious lagras ett RK-objekt.
    //
    // rkTodo blir som en fifo-kö på vilken man kan anropa push_back, front, och pop_front.
    // Även denna kö lagrar RK-objekt.

    vector<vector<RK>> rkPrevious( pMaze->sizeR(), vector<RK>(pMaze->sizeK(), RK()));
    deque<RK> rkTodo;
    rkTodo.push_back(RK(r,k));

    while (!rkTodo.empty()){
        RK cord = rkTodo.front();
        rkTodo.pop_front();

        pMaze->placeStone(cord.m_r,cord.m_k);
        if (pMaze->isGoal(cord.m_r, cord.m_k))
        {
            RK prevCord = cord;
            pMaze->indicateThatRKIsOnPath(prevCord.m_r, prevCord.m_k);
            while (prevCord.m_r >= r && prevCord.m_k >= k)
            {
                prevCord = rkPrevious[prevCord.m_r][prevCord.m_k];
                pMaze->indicateThatRKIsOnPath(prevCord.m_r, prevCord.m_k);
            }
            return true;
        }

        if (pMaze->isInside(cord.m_r,cord.m_k+1) && !pMaze->hasStone(cord.m_r,cord.m_k+1) && !pMaze->isWall(cord.m_r,cord.m_k+1))
        {
            rkPrevious[cord.m_r][cord.m_k+1] = cord;
            rkTodo.push_back(rkOfNeighbor(cord,0));
        }
        if (pMaze->isInside(cord.m_r,cord.m_k-1) && !pMaze->hasStone(cord.m_r,cord.m_k-1) && !pMaze->isWall(cord.m_r,cord.m_k-1))
        {
            rkTodo.push_back(rkOfNeighbor(cord,1));
            rkPrevious[cord.m_r][cord.m_k-1] = cord;
        }

        if (pMaze->isInside(cord.m_r+1,cord.m_k) && !pMaze->hasStone(cord.m_r+1,cord.m_k) && !pMaze->isWall(cord.m_r+1,cord.m_k))
        {
            rkTodo.push_back(rkOfNeighbor(cord,2));
            rkPrevious[cord.m_r+1][cord.m_k] = cord;
        }
        if (pMaze->isInside(cord.m_r-1,cord.m_k) && !pMaze->hasStone(cord.m_r-1,cord.m_k) && !pMaze->isWall(cord.m_r-1,cord.m_k))
        {
            rkPrevious[cord.m_r-1][cord.m_k] = cord;
            rkTodo.push_back(rkOfNeighbor(cord,3));
        }
    }
    return false;
}


