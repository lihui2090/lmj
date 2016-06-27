// control model cpp

void lmj_control::lmj_control()
{

	 food_ctr=0;
	 water_ctr=0;
	 tempature_ctr=1;

}

int lmj_control::set_food_ctr(double value )
{
	food_ctr=value;
	return 0;

}
int lmj_control::get_food_ctr(double * value)
{
	*value=food_ctr;
	return 0;

}

int lmj_control::calculate_food_ctr(double food_input, double bs_food_st, double * value)
{
	if(food_input==0)
	{
		* value=0;
	}
	else
	{
		*value = food_input_rate*(1-bs_food_st);
	}
	return 0;
}


int lmj_control::set_water_ctr(double value)
{
	water_ctr=value;
	return 0;


}
int lmj_control::get_water_ctr(double * value)
{
	*value=water_ctr;
	return 0;
}


int lmj_control::calculate_water_ctr(double water_input, double bs_water_st, double * value)
{
	if(water_input==0)
	{
		* value=0;
	}
	else
	{
		*value = water_input_rate*(1-bs_water_st);
	}
	return 0;
}

int lmj_control::set_tempature_ctr(double value)
{
	tempature_ctr=value;
	return 0;

}
int lmj_control::get_tempature_ctr(double * value)
{
	*value=tempature_ctr;
	return 0;
}


int lmj_control::calculate_tempature_ctr(double tempature_input, double bs_tempature_st, double * value)
{

	return 0;
}
