#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

/* class 1, desire output = 0 */
float X1[97] = { 0, 1.2559, 2.4396, 3.5070, 4.4194, 5.1447, 5.6588, 5.9460, 6.0000, 5.8234, 5.4278, 4.8329, 4.0659, 3.1598, 2.1526, 1.0852, 0.0000,-1.0608,-2.0569,-2.9515,-3.7123,-4.3132,-4.7349,-4.9652,-5.0000,-4.8426,-4.5039,-4.0014,-3.3588,-2.6042,-1.7699,-0.8901,0.0000, 0.8657, 1.6742, 2.3959, 3.0052, 3.4818, 3.8110, 3.9844, 4.0000, 3.8618, 3.5800, 3.1700, 2.6517, 2.0487, 1.3872, 0.6950, 0.0000,-0.6706,-1.2916,-1.8403,-2.2981,-2.6503,-2.8871,-3.0037,-3.0000,-2.8811,-2.6562,-2.3385,-1.9445,-1.4931,-1.0045,-0.4999,0.0000, 0.4755, 0.9089, 1.2848, 1.5910, 1.8188, 1.9632, 2.0229, 2.0000, 1.9003, 1.7323, 1.5070, 1.2374, 0.9375, 0.6219, 0.3048, 0.0000,-0.2804,-0.5262,-0.7292,-0.8839,-0.9874,-1.0394,-1.0421,-1.0000,-0.9195,-0.8084,-0.6756,-0.5303,-0.3820,-0.2392,-0.1097,0.0000};
float Y1[97] = { 6.5000, 6.3138, 5.8897, 5.2487, 4.4194, 3.4376, 2.3439, 1.1827, 0.0000,-1.1583,-2.2483,-3.2293,-4.0659,-4.7290,-5.1968,-5.4556,-5.5000,-5.3330,-4.9659,-4.4172,-3.7123,-2.8820,-1.9613,-0.9876,0.0000, 0.9633, 1.8656, 2.6737, 3.3588, 3.8975, 4.2729, 4.4748, 4.5000, 4.3522, 4.0420, 3.5857, 3.0052, 2.3265, 1.5786, 0.7926, 0.0000,-0.7682,-1.4829,-2.1181,-2.6517,-3.0660,-3.3491,-3.4940,-3.5000,-3.3714,-3.1181,-2.7542,-2.2981,-1.7709,-1.1959,-0.5975,0.0000, 0.5731, 1.1002, 1.5625, 1.9445, 2.2346, 2.4252, 2.5133, 2.5000, 2.3907, 2.1942, 1.9228, 1.5910, 1.2153, 0.8132, 0.4024, 0.0000,-0.3780,-0.7175,-1.0070,-1.2374,-1.4031,-1.5013,-1.5325,-1.5000,-1.4099,-1.2703,-1.0913,-0.8839,-0.6597,-0.4305,-0.2073,0.0000, 0.1829, 0.3348, 0.4514, 0.5303, 0.5716, 0.5774, 0.5517, 0.5000};

/* class 2, desire output = 1 */
float X2[97] = { 0 ,-1.2559 ,-2.4396 ,-3.5070 ,-4.4194 ,-5.1447 ,-5.6588 ,-5.9460 ,-6.0000 ,-5.8234 ,-5.4278 ,-4.8329 ,-4.0659 ,-3.1598 ,-2.1526 ,-1.0852 ,0.0000 , 1.0608 , 2.0569 , 2.9515 , 3.7123 , 4.3132 , 4.7349 , 4.9652 , 5.0000 , 4.8426 , 4.5039 , 4.0014 , 3.3588 , 2.6042 , 1.7699 , 0.8901 , 0.0000 ,-0.8657 ,-1.6742 ,-2.3959 ,-3.0052 ,-3.4818 ,-3.8110 ,-3.9844 ,-4.0000 ,-3.8618 ,-3.5800 ,-3.1700 ,-2.6517 ,-2.0487 ,-1.3872 ,-0.6950 ,0.0000 , 0.6706 , 1.2916 , 1.8403 , 2.2981 , 2.6503 , 2.8871 , 3.0037 , 3.0000 , 2.8811 , 2.6562 , 2.3385 , 1.9445 , 1.4931 , 1.0045 , 0.4999 , 0.0000 ,-0.4755 ,-0.9089 ,-1.2848 ,-1.5910 ,-1.8188 ,-1.9632 ,-2.0229 ,-2.0000 ,-1.9003 ,-1.7323 ,-1.5070 ,-1.2374 ,-0.9375 ,-0.6219 ,-0.3048 ,0.0000 , 0.2804 , 0.5262 , 0.7292 , 0.8839 , 0.9874 , 1.0394 , 1.0421 , 1.0000 , 0.9195 , 0.8084 , 0.6756 , 0.5303 , 0.3820 , 0.2392 , 0.1097 , 0.0000 };
float Y2[97] = { -6.5000 ,-6.3138 ,-5.8897 ,-5.2487 ,-4.4194 ,-3.4376 ,-2.3439 ,-1.1827 ,0.0000 , 1.1583 , 2.2483 , 3.2293 , 4.0659 , 4.7290 , 5.1968 , 5.4556 , 5.5000 , 5.3330 , 4.9659 , 4.4172 , 3.7123 , 2.8820 , 1.9613 , 0.9876 , 0.0000 ,-0.9633 ,-1.8656 ,-2.6737 ,-3.3588 ,-3.8975 ,-4.2729 ,-4.4748 ,-4.5000 ,-4.3522 ,-4.0420 ,-3.5857 ,-3.0052 ,-2.3265 ,-1.5786 ,-0.7926 ,0.0000 , 0.7682 , 1.4829 , 2.1181 , 2.6517 , 3.0660 , 3.3491 , 3.4940 , 3.5000 , 3.3714 , 3.1181 , 2.7542 , 2.2981 , 1.7709 , 1.1959 , 0.5975 , 0.0000 ,-0.5731 ,-1.1002 ,-1.5625 ,-1.9445 ,-2.2346 ,-2.4252 ,-2.5133 ,-2.5000 ,-2.3907 ,-2.1942 ,-1.9228 ,-1.5910 ,-1.2153 ,-0.8132 ,-0.4024 ,0.0000 , 0.3780 , 0.7175 , 1.0070 , 1.2374 , 1.4031 , 1.5013 , 1.5325 , 1.5000 , 1.4099 , 1.2703 , 1.0913 , 0.8839 , 0.6597 , 0.4305 , 0.2073 , 0.0000 ,-0.1829 ,-0.3348 ,-0.4514 ,-0.5303 ,-0.5716 ,-0.5774 ,-0.5517 ,-0.5000};

// static float 2_spirals_data_set[500][3] = { 0 };
typedef struct _dmds
{
	float X;
	float Y;
	float c;
}DMDS; 

void create_2_spirals_data_set_0(DMDS* data, float* X, float* Y)
{
	for (int i = 0; i < 97; ++i)
	{
		data[i].X = X[i];
		data[i].Y = Y[i];
		data[i].c = 0.0;
	}
}

void create_2_spirals_data_set_1(DMDS* data, float* X, float* Y)
{
	for (int i = 0; i < 97; ++i)
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
	194,
	2,
	3,
	80,
	81,
	40,
	41,
	1,
	0.02,
	5000000,
	0.0032,
	0.0038,
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
	
	DMDS c[194] = { 0 };
	create_2_spirals_data_set_0(c, X1, Y1);
	create_2_spirals_data_set_1(&c[97], X2, Y2);

	for (int i = 0; i < 194; ++i)
	{
		printf("[debug] idx:%d pattern:( %f , %f, %f )\r\n", i, c[i].X, c[i].Y, c[i].c);
	}
	system("pause");

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
	printf("[inference_result] pass rate:%.02f, fail rate:%.02f", (float)(nn_para.input_size - fail_cnt)/nn_para.input_size, (float)fail_cnt/nn_para.input_size);

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
