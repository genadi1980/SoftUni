#ifndef DIGITS_FILTER_H

#include "CharSequenceFilter.h"

class DigitsFilter : public CharSequenceFilter {
public:
	DigitsFilter() : CharSequenceFilter('0', '9') {}
};

#define DIGITS_FILTER_H
#endif // !DIGITS_FILTER_H
