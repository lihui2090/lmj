 //mem cpp
#include "lmj_mem.h"
#include <fstream>
using namespace std;

lmj_mem::lmj_mem()
{
	memfile.open("memdata",ios_base::in|ios_base::app|ios_base::binary);

}

int lmj_mem::mem_save(int time_value,
			double food_input, double water_input , double tempature_input,
			double food_ctr, double water_ctr, double tempature_ctr,
			double food_bs_cur, double water_bs_cur, double tempature_cur,
			double all_as)
{
	mem_data.time_value=time_value;
	mem_data.food_input=food_input;
	mem_data.water_input=water_input;
	mem_data.tempature_input=tempature_input;

	mem_data.food_ctr=food_ctr;
	mem_data.water_ctr=water_ctr;
	mem_data.tempature_ctr=tempature_ctr;

	mem_data.food_bs_cur=food_bs_cur;
	mem_data.water_bs_cur=water_bs_cur;
	mem_data.tempature_cur=tempature_cur;

	mem_data.all_as=all_as;

	memfile.write((char*)&mem_data,sizeof(mem_data));

	return 0;
}
int lmj_mem::mem_remember(int time_value,
			double food_input, double water_input , double tempature_input,
			double food_ctr, double water_ctr, double tempature_ctr,
			double food_bs_cur, double water_bs_cur, double tempature_cur,
			double all_as)
{
	return 0;
}
int lmj_mem::mem_delete(int time_value)
{
	return 0;

}
