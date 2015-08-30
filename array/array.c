#include <stdio.h>
#include <stdlib.h>

#define N 100

void 
gen_random(int *p_a, int upper_bound)
{
	for (int i = 0; i < N; i++) {
		p_a[i] = random() % upper_bound;
	}
}

void 
display(int *p_a, int length)
{
	int		i = 0;

	while (i < length) {
		//printf("The %inth element is %i\n", i, p_a[i]);

		for (int x = 1; x < p_a[i]; x++) {
			printf("*");
		}

		printf("  Total: %i\n", p_a[i]);

		i++;
	}
}

int 
how_many(int element, int *target_arr, int arr_length)
{
	int		count = 0;

	for (int i = 0; i < arr_length; i++) {
		if (element == target_arr[i]) {
			count++;
		}
	}

	return count;
}

void 
reset_arr(int *arr, int len)
{
	for (int i = 0; i < len; i++) {
		arr[i] = 0;
	}
}

void 
statisic(int *p_source_arr, int *p_target_arr, int source_arr_len, int target_arr_len, int upper_bound)
{
	reset_arr(p_target_arr, target_arr_len);

	if (upper_bound >= target_arr_len) {
		printf("Upper bound must be less than target array length!\n");

		return;
	}
	for (int i = 0; i < source_arr_len; i++) {
		int		target = p_source_arr[i];

		int		target_count = how_many(target, p_source_arr, source_arr_len);

		p_target_arr[target] = target_count;
	}

}

int 
sum_total(int *arr, int len)
{
	int		total = 0;

	for (int i = 0; i < len; i++) {
		total += arr[i];
	}

	return total;
}

int 
main(void)
{
	int		arr        [N] = {};

	int		target_arr [N] = {};

	int		total = 0;

	gen_random(arr, 10);

	statisic(arr, target_arr, N, N, 10);

	//display(&arr, N);

	printf("===================THIS IS STARING PARTING LINE================\n");

	display(target_arr, 10);

	printf("===================THIS IS ENDING PARTING LINE=================\n");

	total = sum_total(target_arr, N);

	printf("The sum total is %i\n", total);

	return 1;
}
