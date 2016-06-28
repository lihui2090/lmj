// body status h


class lmj_bs
{
	double food_bs_cur;
	double food_bs_max;
	double food_bs_min;
	double food_bs_consume_rate;


	double water_bs_cur;
	double water_bs_max;
	double water_bs_min;
	double water_bs_consume_rate;

	double tempature_bs_cur;
	double tempature_bs_max;
	double tempature_bs_min;
	double tempature_bs_rate;
	double tempature_bs_food_consume_rate;
	double tempature_bs_water_consume_rate;

public:
	lmj_bs();
	~lmj_bs();
	int get_food_bs(double * value);
	int set_food_bs(double food_input_rate);
	int get_food_bs_ctr(double * value);
	int get_water_bs(double * value);
	int set_water_bs(double water_input_rate);
	int get_water_bs_ctr(double * value);
	int get_tempature_bs(double * value);
	int set_tempature_bs(double tempature_input_rate);
	int get_tempature_bs_ctr(double * value);


};
