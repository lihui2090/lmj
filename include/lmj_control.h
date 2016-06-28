// ctonol model h



class lmj_control
{
	double food_ctr;
	double food_input_rate;
	double water_ctr;
	double water_input_rate;
	double tempature_ctr;
	double tempature_input_rate;

public:
	lmj_control();
	~lmj_control();

	int set_food_ctr(double value );
	int get_food_ctr(double * value);
	int calculate_food_ctr(double food_input, double bs_food_st, double * value);
	int set_water_ctr(double value);
	int get_water_ctr(double * value);
	int calculate_water_ctr(double water_input ,double bs_water_st,double * value);
	int set_tempature_ctr(double value);
	int get_tempature_ctr(double * value);
	int calculate_tempature_ctr(double tempature_input, double bs_tempature_st, double *value);


};
