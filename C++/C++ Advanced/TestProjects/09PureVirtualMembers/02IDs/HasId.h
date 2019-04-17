#ifndef HAS_ID_H

class HasId {
public:
	virtual int getId() const = 0;

	virtual ~HasId() {}
};
#define HAS_ID_H
#endif // !HAS_ID_H
