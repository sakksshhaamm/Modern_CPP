
#ifndef FINDRESULT_H
#define FINDRESULT_H

#include "Example.h"

template <typename T, typename C>

class FinalResult

{

private:
    /* data */

    float finalResultPercentage;

public:
    FinalResult() = delete;

    FinalResult(const FinalResult<T, C> &obj) = default;

    FinalResult(T id, C category, float percentage);
    ~FinalResult();
};

#endif // FINALRESULT_H

template <typename T, typename C>

inline FinalResult<T, C>::FinalResult(T id, C category, float percentage): Result<T, C>(id, category)

{

    this->finalResultPercentage = percentage;
}

template <typename T, typename C>

inline FinalResult<T, C>::~FinalResult()
{
    std::cout << "Child object destroyed: ";
}


#endif // FINDRESULT_H
