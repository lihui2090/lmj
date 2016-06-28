 //mem cpp
#include "lmj_mem.h"
#include <fstream>
using namespace std;

lmj_mem::lmj_mem()
{
	memfile.open("memdata",ios_base::in|ios_base::app|ios_base::binary);

}

lmj_mem::~lmj_mem()
{
	memfile.close();

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
	double tolerance_one=0;
	double tolerance_two=0;
	int cnt=0;
	memfile.seekg(0,ios::beg);
	memfile.read((char *)&remem_data_one,sizeof(remem_data_one));
	while(!memfile.eof())
	{
		cnt++;
		memfile.read((char*)&remem_data_two,sizeof(remem_data_two));

		tolerance_one=(remem_data_one.food_input-food_input)*(remem_data_one.food_input-food_input)/10000+
				(remem_data_one.water_input-water_input)*(remem_data_one.water_input-water_input/10000)+
				(remem_data_one.tempature_input-tempature_input)*(remem_data_one.tempature_input-tempature_input)/2500+
				(remem_data_one.food_bs_cur-food_bs_cur)*(remem_data_one.food_bs_cur-food_bs_cur)/22500+
				(remem_data_one.water_bs_cur-water_bs_cur)*(remem_data_one.water_bs_cur-water_bs_cur)/22500+
				(remem_data_one.tempature_cur-tempature_cur)*(remem_data_one.tempature_cur-tempature_cur)/400;




		tolerance_two=(remem_data_two.food_input-food_input)*(remem_data_two.food_input-food_input)/10000+
				(remem_data_two.water_input-water_input)*(remem_data_two.water_input-water_input)/10000+
				(remem_data_two.tempature_input-tempature_input)*(remem_data_two.tempature_input-tempature_input)/2500+
				(remem_data_two.food_bs_cur-food_bs_cur)*(remem_data_two.food_bs_cur-food_bs_cur)/22500+
				(remem_data_two.water_bs_cur-water_bs_cur)*(remem_data_two.water_bs_cur-water_bs_cur)/22500+
				(remem_data_two.tempature_cur-tempature_cur)*(remem_data_two.tempature_cur-tempature_cur)/400;

		if((tolerance_one>tolerance_two)&&(remem_data_two.time_value!=time_value))
		{
			remem_data_one.time_value=remem_data_two.time_value;
			remem_data_one.food_input=remem_data_two.food_input;
			remem_data_one.water_input=remem_data_two.water_input;
			remem_data_one.tempature_input=remem_data_two.tempature_input;
			remem_data_one.food_ctr=remem_data_two.food_ctr;
			remem_data_one.water_ctr=remem_data_two.water_ctr;
			remem_data_one.tempature_ctr=remem_data_two.tempature_ctr;
			remem_data_one.food_bs_cur=remem_data_two.food_bs_cur;
			remem_data_one.water_bs_cur=remem_data_two.water_bs_cur;
			remem_data_one.tempature_cur=remem_data_two.tempature_cur;
			remem_data_one.all_as=remem_data_two.all_as;
		}


	}


	// begin and end



	return 0;
}
int lmj_mem::mem_delete(int time_value)
{
	return 0;

}
