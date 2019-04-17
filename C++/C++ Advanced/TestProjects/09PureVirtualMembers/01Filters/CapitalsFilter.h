#ifndef CAPITALS_FILTER_H

#include "CharSequenceFilter.h"

class CapitalsFilter : public CharSequenceFilter {
public:
	CapitalsFilter() : CharSequenceFilter('A', 'Z') {}
};
#define CAPITALS_FILTER_H
#endif //!CAPITALS_FILTER_H