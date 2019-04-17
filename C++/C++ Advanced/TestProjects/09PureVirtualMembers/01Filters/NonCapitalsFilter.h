#ifndef NON_CAPITALS_FILTER_H

#include "CharSequenceFilter.h"

class NonCapitalsFilter : public CharSequenceFilter {
public:
	NonCapitalsFilter() : CharSequenceFilter('a', 'z') {}
};
 
#define NON_CAPITALS_FILTER_H
#endif //!NON_CAPITALS_FILTER_H