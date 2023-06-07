#ifndef EXAMPLE_H

#define EXAMPLE_H

template <typename T, typename C>

class Result

{

private:
    T resultId;

    resultCategory;
    // result Id and resultCategory will MOST OF THE TIMES not

        // be of the

        // same type

        public :

        Result() = delete;

    Result(const Result<T, C> &obj) = default;

    Result(T id, C category);
};

#endif // EXAMPLE_H

template <typename T, typename C>

inline Result<T, C>::Result(T id, C category)

    : resultId(id), resultCategory(category)

{
}