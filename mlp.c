#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

/* class 1, desire output = 0 */
float X1[250] = {-12.4623,-11.1655,-15.2563,-12.1321,-12.6710,-14.2918,-13.4107,-12.6262,-9.3809,-10.1790,-14.2863,-9.8882,-12.1831,-12.9557,-12.1608,-13.0621,-12.9617,-11.3270,-11.3855,-11.3540,-12.0752,-13.9283,-11.9766,-11.0353,-12.1471,-11.5706,-11.8465,-12.8437,-12.2121,-13.2577,-11.5453,-13.5429,-13.4257,-13.1260,-15.2194,-10.7942,-11.8637,-12.8989,-10.7277,-13.7624,-12.1049,-12.1947,-11.5836,-11.5384,-12.6635,-11.7749,-11.8549,-11.0065,-10.4840,-10.4100,-12.3239,-11.3228,-12.5533,-12.3906,-11.2208,-9.6173,-11.8546,-10.6475,-11.1775,-9.7666,-11.9042,-10.7128,-10.1221,-9.5025,-8.9864,-10.3713,-11.8746,-11.0502,-11.2935,-7.8047,-10.6932,-9.2511,-10.1124,-8.9514,-10.5241,-11.0800,-11.0179,-9.0243,-9.6062,-9.5405,-7.8400,-8.8819,-8.8893,-7.4123,-9.7167,-8.1273,-7.8999,-8.8891,-8.3396,-9.6304,-9.5213,-8.1767,-7.4670,-5.5109,-8.6700,-7.7220,-7.8975,-9.6534,-8.0642,-9.3243,-6.5933,-8.2254,-7.1406,-7.6881,-6.7426,-7.5488,-6.3604,-6.0127,-4.9415,-6.7487,-8.5938,-7.1956,-4.9019,-7.2288,-5.0958,-5.8325,-4.4196,-7.7168,-5.8530,-6.7625,-2.5460,-4.5279,-3.8733,-6.2096,-5.5191,-5.2220,-3.7502,-5.0256,-3.9453,-6.5979,-4.7992,-5.1682,-5.8212,-3.6357,-3.7614,-3.9098,-5.1770,-2.6160,-3.2938,-3.8437,-3.4226,-3.6086,-4.9982,-3.4353,-3.8829,-3.9330,-4.0128,-3.2929,-4.6653,-1.6021,-1.9503,-2.3948,-2.3144,-2.9831,-1.0720,-2.1301,-2.6181,-0.4594,-1.9432,-2.2157,-1.8292,-2.2927,-2.4747,1.2610,0.4794,-0.7802,-2.2571,-1.7784,-1.0030,0.0507,-1.9876,-2.9011,-1.9366,-0.0710,0.0691,0.2109,-0.2903,0.1037,-0.4770,0.9396,-1.2065,0.6870,-0.5408,0.0481,1.0100,1.5697,-0.5146,1.9353,1.4055,0.7473,0.6888,0.7343,0.7158,1.1079,1.2012,2.0401,2.8040,1.8061,1.1905,2.0854,1.7025,0.5475,2.5834,1.9971,1.8800,2.3139,2.1127,0.9613,1.7910,1.8566,1.5189,3.7801,1.2683,1.7051,1.5206,1.1009,2.1243,2.0827,3.9259,2.1847,1.4062,4.1094,3.7750,2.3438,1.0992,2.1914,2.5096,2.9699,2.4597,3.1901,3.1631,1.5439,1.8687,2.0964,2.3493,2.5549,2.9051,-0.1207,2.4661,4.1789,1.8818,3.8930,3.3191,2.9481,3.1665,1.4248,2.9097,4.6014,3.0977,3.0414};
float Y1[250] = {-0.7342,0.0701,0.4342,0.7291,0.0308,0.2679,2.6287,-1.5527,3.0356,1.2440,2.0067,-0.5574,0.6166,1.0282,1.8285,-0.1652,2.0756,0.4899,1.8674,2.5518,2.3244,3.1775,3.1982,1.6381,2.6426,1.5374,1.2557,3.5977,2.7678,2.8073,3.8674,3.6444,3.4931,4.4857,4.2573,3.6588,2.8196,2.9489,4.8824,2.1677,3.8437,2.0074,5.0641,4.9921,4.2177,4.2311,1.9004,5.0519,2.3617,2.3174,4.7985,3.8512,5.2916,5.6367,5.8962,4.4253,5.6430,5.3707,6.1716,5.9564,6.3919,5.4350,5.4918,6.7179,3.6567,5.3451,4.6475,5.6029,6.7007,6.9433,5.1671,5.7746,6.4453,6.0779,6.7322,6.8898,5.6184,6.4290,4.5302,7.8630,6.1428,5.6212,6.6232,5.4996,6.9573,6.4663,9.2524,8.2596,4.6697,7.6522,5.8559,7.0409,7.5012,8.1242,7.1419,9.0285,7.0074,7.8508,8.2217,7.6747,8.5018,7.9741,6.8957,5.9021,9.5925,7.1546,7.8864,8.3690,7.9409,6.9428,7.3988,7.7593,9.3797,7.0551,8.7146,8.2512,7.7202,6.9072,7.6890,7.8941,6.5177,8.1844,7.1737,7.9043,8.3361,7.0952,7.7103,8.3461,6.1563,9.0231,10.4052,8.9325,7.6484,8.3827,6.9066,9.8078,8.8566,8.6881,7.0084,8.1864,7.2892,7.5158,7.2358,6.7573,6.8504,7.5240,6.0086,8.2874,7.5331,8.3200,7.8592,8.0513,6.0402,6.4681,7.0053,7.5246,8.5052,7.0469,8.5575,7.7294,8.3850,7.2935,6.4643,5.5932,7.1824,7.7967,6.6356,6.3364,6.5164,5.6753,6.2246,6.4815,6.6517,6.4846,7.1012,6.5397,8.1838,6.6203,8.0501,5.4590,6.6441,5.7918,6.5857,6.5120,3.6637,4.4533,4.2691,6.0408,7.0371,5.1672,6.2325,5.8911,4.2184,5.5911,4.3646,6.5548,4.9271,6.5161,4.3747,5.3080,4.5739,2.5321,3.4886,4.9992,4.2471,3.0978,3.5040,4.2931,2.9632,4.8431,3.1388,5.4991,2.5205,3.7092,1.8980,2.6039,2.6422,3.5442,3.9919,3.2567,2.4892,3.5832,3.4717,2.6977,3.0530,2.7984,1.3021,2.9517,1.4377,1.3934,2.0764,1.4937,1.5709,2.1994,2.5518,1.2078,1.6340,0.9683,1.3363,1.4467,0.2896,1.0809,1.3067,0.6973,2.2342,-0.2050,-0.4343,-1.5480,1.0114,0.8671};

/* class 2, desire output = 1 */
float X2[250] = {-3.0799,-2.1009,-2.8137,-2.7035,-2.8769,-2.5441,-2.8754,-0.1815,-4.1259,-4.8028,-4.0771,-4.0164,-3.3421,-3.0611,-3.0941,-2.3158,-2.4483,-2.0655,-1.0163,-1.5482,-4.0299,-5.0498,-1.7919,-4.5012,-2.5693,-2.5698,-0.3462,-2.6095,-3.0133,-2.2346,-2.1879,-2.3258,-2.9654,-3.5391,-1.9586,-3.5755,-3.2211,-0.8128,-2.5169,-2.1912,-1.1028,-2.2534,-0.8735,-2.1963,-0.7858,-1.1155,-1.9031,-2.4999,-2.6204,-1.7893,-1.8984,-1.8089,-0.3556,-1.5748,-0.0703,-1.6815,-0.1123,-1.5411,-0.7753,0.0867,-1.2291,-1.1836,1.3287,0.3479,-0.9626,0.1917,-0.7431,0.3980,1.1839,-1.7597,0.9513,1.4588,0.1275,1.9062,0.3961,-0.9149,-1.7890,0.1541,1.2847,0.9730,1.1543,0.2494,1.0569,-0.6387,0.3276,0.3573,1.7848,1.3404,0.2892,1.5259,0.9369,1.0518,2.6749,2.0170,2.3953,2.9747,2.3652,2.8305,3.0578,3.6409,3.0422,4.0749,2.7820,2.8086,4.6552,2.5419,3.1468,4.1678,3.4964,4.8504,4.5787,3.9355,2.9658,4.4100,2.5607,4.2879,4.9521,4.4572,5.2243,6.4842,5.4700,4.9138,5.3894,5.2741,3.6348,4.6341,6.3761,5.2087,5.9356,4.4475,5.6192,6.2556,4.3944,6.2039,5.7747,5.1172,6.1191,4.3602,4.2281,5.2785,5.5640,5.4804,5.0266,7.1386,5.3542,7.1564,7.9306,7.2384,7.4305,7.0555,6.0470,7.5814,8.6812,9.5533,7.4791,6.3758,8.2627,8.5655,8.0546,7.2244,10.4889,6.1957,8.1354,7.4133,8.1878,9.2301,9.1380,8.3764,9.9505,9.8817,9.9918,9.0032,10.5611,10.2562,12.1865,10.8227,10.9969,9.9730,8.7108,9.7064,9.3974,9.6680,10.8630,9.8262,9.5621,10.1213,10.4422,11.0840,9.7927,11.1325,10.9620,12.2763,10.8057,10.9504,9.9786,9.8287,11.5876,11.0896,11.9039,10.5676,13.4278,11.6995,12.6812,11.4631,11.5824,12.4887,12.4070,10.7826,10.4206,10.9048,10.6351,12.1576,11.7328,11.8209,10.8716,13.0547,12.7560,12.2672,13.4170,11.5598,12.8852,12.8544,12.8895,11.8442,12.9322,12.1212,11.7691,11.4905,13.7587,11.9007,12.5983,11.5859,12.5196,9.6055,11.7702,11.4491,11.8782,12.6952,12.5977,14.8808,12.3767,12.7093,11.3995,12.4997,11.6461,13.0201,13.8474,13.4017,12.2987,11.3695};
float Y2[250] = {1.4600,1.9491,-0.0813,-1.2926,0.7942,-1.0970,-1.0748,0.1808,-2.1913,-2.8632,-0.5860,-0.7060,-1.1115,-0.8096,-0.3235,-0.5346,-2.1726,-0.8928,-1.6280,-2.4050,-3.1906,-1.4479,-2.5458,-2.2426,-3.1785,-4.0322,-2.4059,-2.7350,-1.5687,-2.0605,-1.9030,-3.7987,-4.0792,-4.5045,-2.8295,-0.6299,-2.7824,-4.3735,-2.8536,-4.9078,-5.2926,-3.2388,-4.8215,-3.8144,-2.8100,-3.9008,-3.4570,-6.0766,-3.8926,-2.4982,-4.1775,-6.3406,-5.0832,-5.4596,-4.6555,-4.7044,-4.7882,-5.6338,-5.9448,-6.0098,-4.6405,-7.4199,-5.8463,-5.4398,-6.4331,-5.3725,-5.9894,-6.9238,-5.8906,-6.3857,-6.5920,-6.9570,-6.2468,-8.2159,-6.8287,-7.0334,-7.4603,-5.9531,-7.3965,-6.1770,-5.7960,-6.9819,-6.5994,-6.2887,-7.0591,-6.4861,-8.3372,-6.0107,-8.1562,-9.0397,-5.8695,-7.3587,-6.8879,-7.7397,-8.4355,-10.5252,-6.8621,-7.8100,-7.7543,-7.1839,-9.0402,-8.3804,-6.5325,-7.1096,-9.0152,-9.9624,-8.3543,-7.5918,-6.8849,-7.7538,-8.9888,-7.5781,-9.0731,-8.8769,-8.5836,-9.1720,-8.2250,-8.8642,-8.2588,-8.4432,-8.3969,-8.4957,-6.7627,-7.3883,-7.9408,-9.4668,-9.6244,-9.9608,-5.3870,-7.0147,-7.7238,-8.9474,-9.1106,-7.4064,-6.3775,-9.6232,-8.3653,-7.9850,-9.8762,-7.0253,-8.2622,-5.9151,-8.1967,-7.3739,-8.9015,-8.3588,-8.8762,-7.2872,-6.3491,-8.2145,-7.1531,-8.0614,-7.4212,-6.2921,-7.3320,-8.4518,-8.2336,-7.5067,-7.4877,-8.1198,-7.0302,-5.9001,-7.3723,-7.2792,-9.2284,-7.7526,-8.3215,-7.2634,-6.2995,-5.2486,-4.9191,-6.7791,-6.9260,-5.7309,-5.9997,-5.6651,-5.5915,-7.7885,-5.7053,-6.2736,-6.8778,-6.7456,-4.7041,-6.7278,-7.0865,-5.5657,-3.6994,-5.6134,-5.2586,-6.4323,-3.7460,-5.2206,-4.7399,-6.1457,-4.2624,-4.6493,-6.1157,-4.8404,-5.2503,-4.6094,-4.8873,-4.7440,-5.5037,-4.7100,-3.5354,-2.4718,-5.2909,-1.6662,-2.4301,-3.6997,-4.0807,-4.3889,-2.7676,-4.2046,-3.8809,-2.4439,-2.7995,-2.2461,-2.5451,-3.3572,-3.3761,-1.9714,-3.3440,-1.3908,-1.6910,-2.0979,-2.2858,-1.8265,1.4318,-2.1098,-3.4560,0.1139,-1.0929,-2.2519,1.1123,-0.8548,-1.0121,-1.9844,-2.1717,-2.7751,-1.3294,-1.8592,-0.0579,-0.9227,1.2647,1.1070,-0.1387,-0.4846,1.0512,-1.1465};

// static float double_moon_data_set[500][3] = { 0 };
typedef struct _dmds
{
	float X;
	float Y;
	float c;
}DMDS; 

void create_double_moon_data_set_0(DMDS* data, float* X, float* Y)
{
	for (int i = 0; i < 250; ++i)
	{
		data[i].X = X[i];
		data[i].Y = Y[i];
		data[i].c = 0.0;
	}
}

void create_double_moon_data_set_1(DMDS* data, float* X, float* Y)
{
	for (int i = 0; i < 250; ++i)
	{
		data[i].X = X[i];
		data[i].Y = Y[i];
		data[i].c = 1.0;
	}
}

typedef struct _NN_PARAMETER
{
	/**
	 *	3 layer, 2 hidder layer 
	 */

	int input_size;
	int b_input_nodes;
	int b_input_nodes_1;
	int i_hi_nodes;
	int i_hi_nodes_1;
	int j_hi_nodes;
	int j_hi_nodes_1;
	int k_output_nodes;

	float lower_limit;
	int iter_max;
	float eta;
	float beta;
	int batch;
	int _iter;
	int iter_loop;
	float error_avg;
}NN_PARAMETER;

static NN_PARAMETER nn_para =
{
	500,
	2,
	3,
	20,
	21,
	10,
	11,
	1,
	0.001,
	6000,
	0.1,
	0.3,
	64,
	0,
	0,
	100
};

typedef struct _ll_node
{
	float data;
	struct _ll_node* next;
}LL_NODE;

void print_LL(LL_NODE* head)
{
	LL_NODE* cur = head;
	printf("[ll] ");
	while (cur != NULL)
	{
		printf("%.08f ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

int early_error_stop_LL(LL_NODE* head)
{
	float last_data = 0.0;
	int cnt = 0;
	LL_NODE* cur = head;
	while (cur != NULL)
	{
		if (last_data == cur->data)
		{
			++cnt;
			if (cnt >= 5)
				return -1;
		}
		last_data = cur->data;
		cur = cur->next;
	}
	return 1;
}

void insert_LL(LL_NODE* head, float val)
{
	LL_NODE* cur = head;
	while (cur->next != NULL)
		cur = cur->next;
	
	cur->next = (LL_NODE*)malloc(sizeof(LL_NODE));
	cur->next->data = val;
	cur->next->next = NULL;
}

void free_LL(LL_NODE** head)
{
	LL_NODE* cur_next = NULL;
	while (*head != NULL)
	{
		cur_next = (*head)->next;
		free(*head);
		*head = cur_next;
	}
}

void normalDistributionGenerator(float* x);
void init_input_weight(float* _w, int fl, int sl); // fl: first layer, sl: second layer

float dot(float* a, float* b, int n);
float sigmoidal(float data){ return 1 / (1 + exp(-data)); }

int main() {

/* test pattern */
	// int i, j;
	// for(i=0 ; i <250 ; i++)
	// 	printf("[class 1] idx:%d pattern:( %f , %f )\r\n", i, X1[i], Y1[i]);

	// for(i=0 ; i <250 ; i++)
	// 	printf("[class 2] idx:%d pattern:( %f , %f )\r\n", i, X2[i], Y2[i]);
	
	DMDS c[500] = { 0 };
	create_double_moon_data_set_0(c, X1, Y1);
	create_double_moon_data_set_1(&c[250], X2, Y2);

	for (int i = 0; i < 500; ++i)
	{
		printf("[debug] idx:%d pattern:( %f , %f, %f )\r\n", i, c[i].X, c[i].Y, c[i].c);
	}

/* initialize */

	nn_para.b_input_nodes_1 = nn_para.b_input_nodes + 1;
	nn_para.i_hi_nodes_1 = nn_para.i_hi_nodes + 1;
	nn_para.j_hi_nodes_1 = nn_para.j_hi_nodes + 1;
	// printf("[debg] input_size:%d, error_avg:%.02f\n", nn_para.input_size ,nn_para.error_avg);

/* initialize arrays */
	float* wkj = (float*)malloc(nn_para.k_output_nodes * nn_para.j_hi_nodes_1 * sizeof(float));
	init_input_weight(wkj, nn_para.k_output_nodes, nn_para.j_hi_nodes_1);
	float* wkj_temp = (float*)malloc(nn_para.k_output_nodes * nn_para.j_hi_nodes_1 * sizeof(float));
	float* wji = (float*)malloc(nn_para.j_hi_nodes * nn_para.i_hi_nodes_1 * sizeof(float));
	init_input_weight(wji, nn_para.j_hi_nodes, nn_para.i_hi_nodes_1);
	float* wji_temp = (float*)malloc(nn_para.j_hi_nodes * nn_para.i_hi_nodes_1 * sizeof(float));
	float* wib = (float*)malloc(nn_para.i_hi_nodes * nn_para.b_input_nodes_1 * sizeof(float));
	init_input_weight(wib, nn_para.i_hi_nodes, nn_para.b_input_nodes_1);

	float* old_delwkj = (float*)malloc(nn_para.k_output_nodes * nn_para.j_hi_nodes_1 * sizeof(float));
	float* old_delwji = (float*)malloc(nn_para.j_hi_nodes * nn_para.i_hi_nodes_1 * sizeof(float));
	float* old_delwib = (float*)malloc(nn_para.i_hi_nodes * nn_para.b_input_nodes_1 * sizeof(float));

	float* ob = (float*)malloc(nn_para.b_input_nodes_1 * sizeof(float));
	ob[nn_para.b_input_nodes_1 - 1] = 1;
	// for (int b = 0; b < nn_para.b_input_nodes_1; ++b)
	// 	printf("[ob] %.02f\n", ob[b]);
	float* si = (float*)malloc(nn_para.i_hi_nodes * sizeof(float));
	float* oi = (float*)malloc(nn_para.i_hi_nodes_1 * sizeof(float));
	oi[nn_para.i_hi_nodes_1 - 1] = 1;
	float* sj = (float*)malloc(nn_para.j_hi_nodes * sizeof(float));
	float* oj = (float*)malloc(nn_para.j_hi_nodes_1 * sizeof(float));
	oj[nn_para.j_hi_nodes_1 - 1] = 1;
	float* sk = (float*)malloc(nn_para.k_output_nodes * sizeof(float));
	float* ok = (float*)malloc(nn_para.k_output_nodes * sizeof(float));
	float* dk = (float*)malloc(nn_para.k_output_nodes * sizeof(float));

	float* delta_k = (float*)malloc(nn_para.k_output_nodes * sizeof(float));
	float* sum_back_kj = (float*)malloc(nn_para.j_hi_nodes * sizeof(float));
	float* delta_j = (float*)malloc(nn_para.j_hi_nodes * sizeof(float));
	float* sum_back_ji = (float*)malloc(nn_para.i_hi_nodes * sizeof(float));
	float* delta_i = (float*)malloc(nn_para.i_hi_nodes * sizeof(float));

	LL_NODE* ite = (LL_NODE*)malloc(sizeof(LL_NODE));
	LL_NODE* error_r = (LL_NODE*)malloc(sizeof(LL_NODE));
	float error = 0.0;
	int bi = 0;
	int tot_it = (int)nn_para.input_size / nn_para.batch;
	float error_sum = 0.0;
	while (nn_para.error_avg > nn_para.lower_limit && nn_para._iter < nn_para.iter_max)
	{
		++nn_para._iter;
		error = 0.0;
		bi = 0;

		for (int it = 0; it < tot_it; ++it)
		{
			for (int ivector = bi * nn_para.batch; ivector < nn_para.batch * (it + 1); ++ivector)
			{
				ob[0] = c[ivector].X;	
				ob[1] = c[ivector].Y;	
				ob[2] = 1;
				dk[0] = c[ivector].c;
				// printf("[debug] it:%d, ivector:%d, %f, %f, %f\n", it, ivector, ob[0], ob[1], dk[0]);

				/* Forward Computation */
				/* wib, si, oi */
				for (int i = 0; i < nn_para.i_hi_nodes; ++i)
				{
					si[i] = dot(&wib[i], ob, nn_para.b_input_nodes_1);
					// printf("[debug] si[%d]:%.02f\n", i, si[i]);
				}

				for (int i = 0; i < nn_para.i_hi_nodes; ++i)
				{
					oi[i] = sigmoidal(si[i]);
					// printf("[debug] oi[%d]:%.02f\n", i, oi[i]);
				}
				oi[nn_para.i_hi_nodes_1 - 1] = 1.0;

				/* wji, sj, oj */
				for (int j = 0; j < nn_para.j_hi_nodes; ++j)
				{
					sj[j] = dot(&wji[j], oi, nn_para.i_hi_nodes_1);
					// printf("[debug] sj[%d]:%.02f\n", j, sj[j]);
				}

				for (int j = 0; j < nn_para.j_hi_nodes; ++j)
				{
					oj[j] = sigmoidal(sj[j]);
					// printf("[debug] oj[%d]:%.02f\n", j, oj[j]);
				}
				oj[nn_para.j_hi_nodes_1 - 1] = 1.0;

				/* wki, sk, ok */
				for (int k = 0; k < nn_para.k_output_nodes; ++k)
				{
					sk[k] = dot(&wkj[k], oj, nn_para.j_hi_nodes_1);
					// printf("[debug] sk[%d]:%.02f\n", k, sk[k]);
				}
				for (int k = 0; k < nn_para.k_output_nodes; ++k)
				{
					ok[k] = sigmoidal(sk[k]);
					// printf("[debug] ok[%d]:%.02f\n", k, ok[k]);
				}

				error_sum = 0;
				for (int d = 0; d < nn_para.k_output_nodes; ++d)
				{
					error_sum += fabs(dk[d] - ok[d]);
					// printf("[debud] error_sum:%.02f\n", error_sum);
				}
				error += error_sum;
				// printf("[debud] error:%.02f\n", error);

				/* Backward learning */
				/* ok -> oj */
				for (int d = 0; d < nn_para.k_output_nodes; ++d)
				{
					delta_k[d] = (dk[d] - ok[d]) * ok[d] * (1.0 - ok[d]); 
					// printf("[debug] delta_k[%d]:%.02f\n", d, delta_k[d]);
				}
				
				for (int j = 0; j < nn_para.j_hi_nodes_1; ++j)
				{
					for (int k = 0; k < nn_para.k_output_nodes; ++k)
					{
						wkj_temp[(k * j) + j] = wkj[(k * j) + j] + \
												(nn_para.eta * delta_k[k] * oj[j]) + \
												(nn_para.beta * old_delwkj[(k * j) + j]);
						old_delwkj[(k * j) + j] = (nn_para.eta * delta_k[k] * oj[j]) + \
													(nn_para.beta * old_delwkj[(k * j) + j]);
						// printf("[debug] wkj_temp[%d][%d]:%.02f, old_delwkj[%d][%d]:%.02f\n", 
						// 		k, j, wkj_temp[(k * j) + j], k, j, old_delwkj[(k * j) + j]);
					}
				}

				for (int j = 0; j < nn_para.j_hi_nodes; ++j)
				{
					sum_back_kj[j] = 0.0;
					for (int k = 0; k < nn_para.k_output_nodes; ++k)
					{
						sum_back_kj[j] = sum_back_kj[j] + (delta_k[k] * wkj[(k * j) + j]);
						// printf("[debug] sum_back_kj[%d]:%.02f\n", j, sum_back_kj[j]);
					}
				}

				/* oj -> oi */
				for (int j = 0; j < nn_para.j_hi_nodes; ++j)
				{
					/* sig */
					delta_j[j] = oj[j] * (1.0 - oj[j]) * sum_back_kj[j];
					// printf("[debug] delta_j[%d]:%.02f\n", j, delta_j[j]);
				}

				for (int i = 0; i < nn_para.i_hi_nodes_1; ++i)
				{
					for (int j = 0; j < nn_para.j_hi_nodes; ++j)
					{
						wji_temp[(j * i) + i] = wji[(j * i) + i] + \
												(nn_para.eta * delta_j[j] * oi[i]) + \
												(nn_para.beta * old_delwji[(j * i) + i]);
						old_delwji[(j * i) + i] = (nn_para.eta * delta_j[j] * oi[i]) + \
													(nn_para.beta * old_delwji[(j * i) + i]);
						// printf("[debug] wji_temp[%d][%d]:%.02f, old_delwji[%d][%d]:%.02f\n", 
						// 		j, i, wji_temp[(j * i) + i], j, i, old_delwji[(j * i) + i]);
					}
				}

				for (int i = 0; i < nn_para.i_hi_nodes; ++i)
				{
					sum_back_ji[i] = 0.0;
					for (int j = 0; j < nn_para.j_hi_nodes; ++j)
					{
						sum_back_ji[i] = sum_back_ji[i] + (delta_j[j] * wji[(j * i) + i]);
						// printf("[debug] sum_back_ji[%d]:%.02f\n", i, sum_back_ji[i]);
					}
				}

				/* oi -> ob */
				for (int i = 0; i < nn_para.i_hi_nodes; ++i)
				{
					/* sig */
					delta_i[i] = oi[i] * (1.0 - oi[i]) * sum_back_ji[i];
					// printf("[debug] delta_i[%d]:%.02f\n", i, delta_i[i]);
				}

				for (int b = 0; b < nn_para.b_input_nodes_1; ++b)
				{
					for (int i = 0; i < nn_para.i_hi_nodes; ++i)
					{
						wib[(i * b) + b] = wib[(i * b) + b] + \
												(nn_para.eta * delta_i[i] * ob[b]) + \
												(nn_para.beta * old_delwib[(i * b) + b]);
						old_delwib[(i * b) + b] = (nn_para.eta * delta_i[i] * ob[b]) + \
													(nn_para.beta * old_delwib[(i * b) + b]);
						// printf("[debug] wib[%d][%d]:%.02f, old_delwib[%d][%d]:%.02f\n", 
						// 		b, i, wib[(i * b) + b], b, i, old_delwib[(i * b) + b]);
					}
				}

				memcpy(wkj, wkj_temp, nn_para.k_output_nodes * nn_para.j_hi_nodes_1 * sizeof(float));
				memcpy(wji, wji_temp, nn_para.j_hi_nodes * nn_para.i_hi_nodes_1 * sizeof(float));
			}
			++bi;
		} 
		nn_para.error_avg = (float)error / (float)nn_para.input_size;
		insert_LL(ite, nn_para._iter);
		insert_LL(error_r, nn_para.error_avg);
		printf("[iter] %.d, [error_avg] %.06f\n", nn_para._iter, nn_para.error_avg);
		if (nn_para._iter < 10 && early_error_stop_LL(error_r) == -1)
		{
			printf("Eraly error stop!\n");
			break;
		}
	}

	int fail_cnt = 0;
	for (int ivector = 0; ivector < nn_para.input_size; ++ivector)
	{
		error = 0.0;
		ob[0] = c[ivector].X;	
		ob[1] = c[ivector].Y;	
		ob[2] = 1;
		dk[0] = c[ivector].c;
		// printf("[debug] it:%d, ivector:%d, %f, %f, %f\n", it, ivector, ob[0], ob[1], dk[0]);

		/* Forward Computation */
		/* wib, si, oi */
		for (int i = 0; i < nn_para.i_hi_nodes; ++i)
		{
			si[i] = dot(&wib[i], ob, nn_para.b_input_nodes_1);
			// printf("[debug] si[%d]:%.02f\n", i, si[i]);
		}
		for (int i = 0; i < nn_para.i_hi_nodes; ++i)
		{
			oi[i] = sigmoidal(si[i]);
			// printf("[debug] oi[%d]:%.02f\n", i, oi[i]);
		}
		oi[nn_para.i_hi_nodes_1 - 1] = 1.0;

		/* wji, sj, oj */
		for (int j = 0; j < nn_para.j_hi_nodes; ++j)
		{
			sj[j] = dot(&wji[j], oi, nn_para.i_hi_nodes_1);
			// printf("[debug] sj[%d]:%.02f\n", j, sj[j]);
		}
		for (int j = 0; j < nn_para.j_hi_nodes; ++j)
		{
			oj[j] = sigmoidal(sj[j]);
			// printf("[debug] oj[%d]:%.02f\n", j, oj[j]);
		}
		oj[nn_para.j_hi_nodes_1 - 1] = 1.0;

		/* wki, sk, ok */
		for (int k = 0; k < nn_para.k_output_nodes; ++k)
		{
			sk[k] = dot(&wkj[k], oj, nn_para.j_hi_nodes_1);
			// printf("[debug] sk[%d]:%.02f\n", k, sk[k]);
		}
		for (int k = 0; k < nn_para.k_output_nodes; ++k)
		{
			ok[k] = sigmoidal(sk[k]);
			// printf("[debug] ok[%d]:%.02f\n", k, ok[k]);
		}

		error_sum = 0;
		for (int d = 0; d < nn_para.k_output_nodes; ++d)
		{
			error_sum += fabs(dk[d] - ok[d]);
			// printf("[debud] error_sum:%.02f\n", error_sum);
		}
		error += error_sum;
		if (error > 0.5)
			++fail_cnt; 
		// printf("[debud_inference] error:%.02f, fail rate:%.02f, %s\n", error, (float)fail_cnt/nn_para.input_size, error < 0.5 ? "hit" : "fail");
	}
	printf("[inference_result] pass rate:%.02f, fail rate:%.02f\n", (float)(nn_para.input_size - fail_cnt)/nn_para.input_size, (float)fail_cnt/nn_para.input_size);

	// print_LL(error_r);
	free_LL(&ite);
	free_LL(&error_r);

	free(wkj);
	free(wkj_temp);
	free(wji);
	free(wji_temp);
	free(wib);
	free(old_delwkj);
	free(old_delwji);
	free(old_delwib);
	free(ob);
	free(si);
	free(oi);
	free(sj);
	free(oj);
	free(sk);
	free(ok);
	free(dk);
	free(delta_k);
	free(sum_back_kj);
	free(delta_j);
	free(sum_back_ji);
	free(delta_i);

	return 0;
}


void normalDistributionGenerator(float* x){

	int i;
	static unsigned int seed = 11;
	float mean = 0;//期望值
	float std = 1;//標準差
	float u, v;//uniform distribution

	u = (float)((float)rand_r(&seed) / (float)RAND_MAX);//RAND_MAX=32767
	v = (float)((float)rand_r(&seed) / (float)RAND_MAX);

	*x = (float)(sqrt(-2 * log(u)) * cos(2 * M_PI * v) * std + mean);//M_PI=3.14159

	seed++;

	return;
}

void init_input_weight(float* _w, int fl, int sl) // fl: first layer, sl: second layer
{
	for (int x = 0; x < fl; ++x)
	{
		for (int y = 0; y < sl; ++y)
		{
			normalDistributionGenerator(&_w[(x * y) + y]);
			printf("[init_input_weight][%d][%d] %.02f\n", x, y, _w[(x * y) + y]);
		}
	}
	return;
}

float dot(float* a, float* b, int n)
{
	float sum = 0;
	for (int i = 0; i < n; ++i)
		sum += a[i] * b[i];

	return sum;
}