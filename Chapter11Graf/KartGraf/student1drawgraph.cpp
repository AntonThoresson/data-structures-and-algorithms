#include "student1drawgraph.h"
#include <QPoint>


const char* nameOfStudent1(){
    return  "Anton Thoresson";
}


void studentsDrawGraph(QPainter& painter,  const std::vector<Node>& graph){
    for (Ixnode i = 0; i < graph.size(); ++i){
        const Node node = graph[i];
        painter.fillRect(node._point.x(), node._point.y(),1,1,Qt::black);
        for (Ixnode j = 0; j < node._outputs.size(); ++j){
            const Node dest = graph[graph[i]._outputs[j].m_ixDestination];
            if (node._outputs[j].m_isVisible)
                painter.drawLine(node._point,dest._point);
        }
    }
}

// endast bågar då m_isVisible är true
// ixDestination = index till destations noden
