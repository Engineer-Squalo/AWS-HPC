#include<iostream>
#include <omp.h>

int main()
{
    omp_set_num_threads(4);
#pragma omp parallel for
	for(int i =0; i < 9; i++){
		std::cout<<omp_get_num_threads()<<i<<" hi\n";
	}
}
