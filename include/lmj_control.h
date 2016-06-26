// ctonol model h



class lmj_control
{
	double food_ctr;
	double water_ctr;
	double tempature_ctr;

public:
	lmj_control();
	~lmj_control();
	int set_food_ctr(double value );
	int get_food_ctr(double * value);
	int set_water_ctr(double value);
	int get_water_ctr(double * value);
	int set_tempature_ctr(double value);
	int get_tempature_ctr(double * value);


}
