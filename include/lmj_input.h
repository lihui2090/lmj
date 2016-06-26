//input model h


class lmj_input
{

	double food_input ;
	double water_input;
	double tempature_input;

public:
	lmj_input();
	~lmj_input();
	int get_food(double * value);
	int get_water(double * value);
	int get_tempature(double * value);


}
