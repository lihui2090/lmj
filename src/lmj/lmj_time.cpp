//time cpp
#include "lmj_time.h"
lmj_time::lmj_time()
{
	time=0;

}

lmj_time::~lmj_time()
{
}
int lmj_time::set_time(int value)
{

	time=value;
	return 0;
}

int lmj_time::get_time(int * value)
{
	*value=time;
	return 0;
}

