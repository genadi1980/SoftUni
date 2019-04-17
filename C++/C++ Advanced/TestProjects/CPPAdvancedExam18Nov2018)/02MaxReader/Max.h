#ifndef MAX_H

#include <string>
#include <sstream>
#include <vector>

class VectorMax {
public:
	VectorMax() : maxElement(INT_MIN) {}

	void setVector(std::vector<int>& vec) {
		this->vec = vec;
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] >  maxElement)
				maxElement = vec[i];
		}
	}

	int getMax() const {
		return maxElement;
	}

	private:
		int maxElement;
		std::vector<int> vec;
		friend std::ostream& operator<<(std::ostream& out, VectorMax& vecMax);
};

bool operator<(const VectorMax& v1, const VectorMax& v2) {
	return v1.getMax() < v2.getMax();
}

std::ostream& operator<<(std::ostream& out, VectorMax & vecMax) {
	for (int i : vecMax.vec) {
		out << i << " ";
	}
	return out;
}

std::vector<int> operator>>(std::vector<int>& vec, VectorMax& vecMax) {
	vecMax.setVector(vec);
	return vec;
}
#define MAX_H
#endif // !MAX_H
