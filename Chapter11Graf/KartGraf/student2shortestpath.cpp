#include "student2shortestpath.h"

#include <queue>
#include <assert.h>
#include <QDebug>

using namespace std;



const char* nameOfStudent2(){
    return "Anton Thoresson";
}


vector<Ixnode> shortestPathBetweenNodes(const std::vector<Node>& graph,
                                        Ixnode ixStart, Ixnode ixStop, IVisualFeedback* pFeedback){


    struct Nodeinfo{
        Ixnode m_ixPrevious;
        bool   m_hasKnownDistance;
        Nodeinfo(Ixnode ixPrevious=-1, bool hasKnownDistance = false)
            : m_ixPrevious(ixPrevious),m_hasKnownDistance(hasKnownDistance) {}
    };

    struct Input{
        Ixnode m_ixFrom;
        Ixnode m_ixTo;
        float  m_accumulatedCost;

        Input(Ixnode ixFrom=-1,Ixnode ixTo=-1,  float accumulatedCost=2e20) : m_ixFrom(ixFrom), m_ixTo(ixTo),  m_accumulatedCost(accumulatedCost) {}

        bool operator()(const Input& a, const Input& b ) const {
            return a.m_accumulatedCost > b.m_accumulatedCost;
        }
    };

    qDebug() << "isStart = " << ixStart << ", ixStop " << ixStop;

    vector<Nodeinfo>  infoAboutNode(graph.size(), Nodeinfo());

    priority_queue<Input, vector<Input>, Input> inputsToBeExamined;


    inputsToBeExamined.push( Input(-1, ixStart, 0.0) );


    while (!inputsToBeExamined.empty()){
        const Input input = inputsToBeExamined.top();
        inputsToBeExamined.pop();

        if (infoAboutNode[input.m_ixTo].m_hasKnownDistance)
            continue;
        if (input.m_ixTo == ixStop){
        }


        infoAboutNode[input.m_ixTo].m_hasKnownDistance = true;
        infoAboutNode[input.m_ixTo].m_ixPrevious = input.m_ixFrom;
        pFeedback->knownDistanceToNode(input.m_ixTo, input.m_accumulatedCost);

        inputsToBeExamined.push(Input(input.m_ixFrom, input.m_ixTo, input.m_accumulatedCost));

    }

}





vector<Ixnode> shortestPathBetweenNodes2(const std::vector<Node>& graph,
                                         Ixnode ixStart, Ixnode ixStop, IVisualFeedback* pFeedback){


    // Denna funktion är inget uppdrag.
    // (Den kommer att anropas om A* är aktiverad)
    vector<Ixnode> bajs;
    return bajs;

}
