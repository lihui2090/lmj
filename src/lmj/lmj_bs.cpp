// body status cpp
lmj_bs::lmj_bs()
{
	 food_bs_cur=100;
	 food_bs_max=150;
	 food_bs_min=0;

	 water_bs_cur=100;
	 water_bs_max=150;
	 water_bs_min=0;

	 tempature_bs_cur=37;
	 tempature_bs_max=40;
	 tempature_bs_min=20;

}


int lmj_bs::get_food_bs(double * value)
{
	*value=food_bs_cur;
	return 0;
}
int lmj_bs::set_food_bs(double value)
{
	food_bs_cur=value;
	return 0;
}
int lmj_bs::get_water_bs(double * value)
{
	*value=water_bs_cur;
	return 0;
}
int lmj_bs::set_water_bs(double value)
{
	water_bs_cur=value;
	return 0;
}
int lmj_bs::get_tempature_bs(double * value)
{
	*value=tempature_bs_cur;
	return 0;
}
int lmj_bs::set_tempature_bs(double  value)
{
	tempature_bs_cur=value;
	return 0;
}



