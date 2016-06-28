//input model h


class lmj_input
{

	double food_input ;
	double food_input_min;
	double food_input_max;

	double water_input;
	double water_input_min;
	double water_input_max;

	double tempature_input;
	double tempature_input_min;
	double tempature_input_max;



public:
	lmj_input();
	~lmj_input();
	int get_food(double * value);
	int get_water(double * value);
	int get_tempature(double * value);


};
