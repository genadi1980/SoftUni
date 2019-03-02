#ifndef VECTORCOMPARISONS_H

#include "Vector.h"


struct VectorLengthComparer {
	bool isSmaller(const Vector & nqkvoIme, const Vector & drugoIme) {
		
		return nqkvoIme.getLengthSq() > drugoIme.getLengthSq();
	}

};

template<typename Container, typename Comparer>
struct ReverseComparer {
	bool operator()(const Container & a, const Container & b) {
		return comparer.isSmaller(a,b);
	}

	Comparer comparer;
};

#define VECTORCOMPARISONS_H
#endif // !VECTORCOMPARISONS_H
