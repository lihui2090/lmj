// body status cpp
#include "lmj_bs.h"
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

lmj_bs::~lmj_bs()
{
}
int lmj_bs::get_food_bs(double * value)
{
	*value=food_bs_cur;
	return 0;
}
int lmj_bs::set_food_bs(double food_input_rate)
{
	food_bs_cur=food_bs_cur-food_bs_consume_rate-tempature_bs_food_consume_rate+food_input_rate;
	return 0;
}

int lmj_bs::get_food_bs_ctr(double * value)
{

	*value= (food_bs_cur-food_bs_min)/(food_bs_max-food_bs_min);
	return 0;


}
int lmj_bs::get_water_bs(double * value)
{
	*value=water_bs_cur;
	return 0;
}
int lmj_bs::set_water_bs(double water_input_rate)
{
	water_bs_cur=water_bs_cur-water_bs_consume_rate-tempature_bs_water_consume_rate+water_input_rate;
	return 0;
}

int lmj_bs::get_water_bs_ctr(double * value)
{
	*value= (water_bs_cur-water_bs_min)/(water_bs_max-water_bs_min);
	return 0;


}
int lmj_bs::get_tempature_bs(double * value)
{
	*value=tempature_bs_cur;
	return 0;
}
int lmj_bs::set_tempature_bs(double  tempature_input_rate)
{
	tempature_bs_cur=tempature_bs_cur+tempature_bs_rate+tempature_input_rate;
	return 0;
}
int lmj_bs::get_tempature_bs_ctr(double * value)
{
	*value= (tempature_bs_cur-tempature_bs_min)/(tempature_bs_max-tempature_bs_min);
	return 0;


}

