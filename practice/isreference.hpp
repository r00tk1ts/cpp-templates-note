#include "islvaluereference.hpp"
#include "isrvaluereference.hpp"
#include "ifthenelse.hpp"

template<typename T>
class IsReferenceT : public IfThenElseT<IsLValueReference<T>::value, 
                                        IsLvalueReference<T>, IsRValueReference<T>>::Type 
{};
