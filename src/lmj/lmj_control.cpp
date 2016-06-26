// control model cpp

lmj_control::lmj_control(void)
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
