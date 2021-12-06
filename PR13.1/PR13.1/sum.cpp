#include <math.h>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace nsVar;
using namespace nsDod;

void nsSum::sum() {
	n = 0;
	a = -1 / x;
	s = a;
	do {
		n++;
		dod();
		s += a;
	} while (fabs(a) >= eps);
}