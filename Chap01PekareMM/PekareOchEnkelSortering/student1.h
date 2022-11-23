#ifndef STUDENT1_H
#define STUDENT1_H

// pekaruppdragen går ut på att implementera nedastående funktioner i cpp-filen

const char *nameOfTheStudent1();
void mainFunctionInStudent1();


float minimumElementI(const float *pBegin, const float *pEnd);
float maximumElementI(const float *pBegin, const float *pEnd);
float averageElementI(const float *pBegin, const float *pEnd);
void fillWithRandomI(float *pBegin, float *pEnd);
void fillWithRandomSortedI(float *pBegin, float *pEnd);
bool  containedInArrayI(float value, const float *pBegin, const float *pEnd);
int numberOfValuesEqualToI(float value, const float *pBegin, const float *pEnd);


float minimumElementP(const float *pBegin, const float *pEnd);
float maximumElementP(const float *pBegin, const float *pEnd);
float averageElementP(const float *pBegin, const float *pEnd);
void fillWithRandomP(float *pBegin, float *pEnd);
void fillWithRandomSortedP(float *pBegin, float *pEnd);
bool  containedInArrayP(float value, const float *pBegin, const float *pEnd);
int numberOfValuesEqualToP(float value, const float *pBegin, const float *pEnd);





#endif // STUDENT1_H
