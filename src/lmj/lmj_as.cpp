// all status cpp
#include "lmj_as.h"
lmj_as::lmj_as(void)
{
	all_as_cur=50;
	all_as_max=100;
	all_as_min=10;
	all_as_live=1;

}
lmj_as::~lmj_as(void)
{

}

int lmj_as::set_all_as(double value)
{
	all_as_cur=value;
	return 0;

}

int lmj_as::get_all_as(double * value)
{
	*value =all_as_cur;
	return 0;
}
