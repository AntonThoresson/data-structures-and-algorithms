#include "studentLabyrint1.h"

bool didIndicatePathToGoal(IMaze *pMaze, int r, int k){

    if (pMaze->isWall(r,k) || pMaze->hasStone(r,k))
        return false;
    if (pMaze->isGoal(r,k)){
        pMaze->indicateThatRKIsOnPath(r,k);
        return true;
    }
    if (pMaze->isInside(r,k)){
        pMaze->placeStone(r,k);
        if (didIndicatePathToGoal(pMaze,r+1,k)){
            pMaze->indicateThatRKIsOnPath(r,k);
            return true;
        }
        if (didIndicatePathToGoal(pMaze,r,k+1)){
            pMaze->indicateThatRKIsOnPath(r,k);
            return true;
        }
        if (didIndicatePathToGoal(pMaze,r-1,k)){
            pMaze->indicateThatRKIsOnPath(r,k);
            return true;
        }
        if (didIndicatePathToGoal(pMaze,r,k-1)){
            pMaze->indicateThatRKIsOnPath(r,k);
            return true;
        }
    }
    return false;
}



