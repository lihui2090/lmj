//input model h
#include "lmj_input.h"
lmj_input::lmj_input(void)
{
	water_input=50;
	water_input_min=0;
	water_input_max=100;
	food_input=50;
	food_input_min=0;
	food_input_max=100;
	tempature_input=37;
	tempature_input_min=-10;
	tempature_input_max=40;
}

int lmj_input::get_food(double * value)
{
	*value =food_input;
	return 0;

}

int lmj_input::get_water(double * value)
{
	*value =water_input;
	return 0;

}

int lmj_input::get_tempature(double * value)
{
	*value = tempature_input;
	return 0;

}
