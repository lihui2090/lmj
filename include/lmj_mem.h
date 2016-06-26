// mem h

class lmj_mem
{

public:
	lmj_mem();
	~lmj_mem();
	int mem_save(int time_value,
			double food_input, double water_input , double tempature_input,
			double food_ctr, double water_ctr, double tempature_ctr,
			double food_bs_cur, double water_bs_cur, double tempature_cur,
			double all_as);
	int mem_remember(int time_value,
			double food_input, double water_input , double tempature_input,
			double food_ctr, double water_ctr, double tempature_ctr,
			double food_bs_cur, double water_bs_cur, double tempature_cur,
			double all_as);
	int mem_delete(int time_value);




}







