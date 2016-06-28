// all status h


class lmj_as
{
	double all_as_cur;
	double all_as_max;
	double all_as_min;
	int all_as_live; // 0 dead 1 live


public:
	lmj_as();
	~lmj_as();
	int get_all_as( double * value);
	int set_all_as(double value);

};
