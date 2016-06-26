//input model h
lmj_input::lmj_input(void)
{
	water_input=50;
	food_input=50;
	tempature_input=37;
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
