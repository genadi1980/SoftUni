#ifndef  ARRAY_H

template<typename T>
class Array {

public:
	Array(const size_t size) 
		: _size(size)
		, _data(new T[size]) {}

	Array(const Array & other) {
		const size_t SIZE = other.getSize();

			if (SIZE) {
				_data = new T[SIZE];

				for (size_t i = 0; i < SIZE; ++i) {
					_data[i] = other._data[i];
				}
				_size = SIZE;
			}
		}
	virtual ~Array() {
		delete[] _data;
		_data = nullptr;
	}

	size_t getSize() const {
		return this->_size;
	}

	Array & operator=(Array & other) {
		
		if (this != &other) {
			const size_t SIZE = other.getSize();

				if (SIZE) {
					swap(*this, other);
				}
		}

		return *this;
	}
	T & operator[](const size_t index) {
		return _data[index];
	}

	T * begin() const {
		return _data;
	}

	T * end() const {
		return _data + _size;
	}

private:
	friend void swap(Array & left, Array & right) {
		std::swap(left._size, right._size);
		std::swap(left._data, right._data);
	}
	T *    _data;
	size_t _size;

};
#define ARRAY_H
#endif // ! ARRAY_H
