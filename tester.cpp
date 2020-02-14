#include <cstdio>
#include <errno.h>

#include "algo.h"

const int NUM_TESTS = 5;
const int MAX_TEST_NAME_SIZE = 32;

int parse_input(const char* input_file, std::vector<int>& input) {

	int N, rc;
	
	FILE* fp = fopen(input_file, "r");
	if (fp == NULL) {
		goto bad_exit;
	}

	/* Parse input */
	rc = fscanf(fp, "%d", &N);
	if (rc != 1) {
		goto cleanup;
	}

	input.resize(N);

	for (int i = 0; i < N; ++i) {
		rc = fscanf(fp, "%d", &input[i]);
		if (rc != 1) {
			goto cleanup;
		}
	}

	fclose(fp);
	return 0;

cleanup:
	fclose(fp);
bad_exit:
	fprintf(stderr, "Invalid input file\n");
	return -1;
}

int parse_output(const char* reference_file, std::vector<int>& expected) {

	FILE* fp = fopen(reference_file, "r");
	if (fp == NULL) {
		goto bad_exit;
	}

	int rc;
	for (int i = 0, sz = expected.size(), elem; i < sz; ++i) {
		rc = fscanf(fp, "%d", &elem);
		if (rc != 1) {
			goto cleanup;
		}

		expected[i] = elem;
	}

	fclose(fp);
	return 0;

cleanup:
	fclose(fp);
bad_exit:
	fprintf(stderr, "Invalid reference file\n");
	return -1;
}

int run_test(const char* input_file, const char* reference_file) {

	int rc; /* return code */
	std::vector<int> input, expected;

	/* Parse test data */
	rc = parse_input(input_file, input);
	if (rc) {
		return -1;
	}

	/* Call algorithm */
	// Fiecare apel trebuie facut separat
	// Celelalte apeluri trebuie comentate
    
	//**********apelul QuickSort**********//
	
	// Quicksort(input);

	//**********apelul MergeSort*********//
    
    //int size = input.size();
	//float test[size];
	//int i;
	//for(i = 0; i < size; i++){
	//	test[i] = input[i];
	//}
	//float sorted[size];
	//mergesort(test, test + size, sorted);

	//***********apelul HeapSort**********//

	int size = input.size();
    heapSort(input, size);


	expected.resize(input.size());

	/* Parse reference data */
	rc = parse_output(reference_file, expected);
	if (rc) {
		return -1;
	}

	/* Check answer */
	if (input == expected) {
		printf("Test PASSED!\n");
	} else {
		printf("Test FAILED!\n");
	}

	return 0;

}


int main () {
	
	char input_test[MAX_TEST_NAME_SIZE], 
		 reference_file[MAX_TEST_NAME_SIZE];

	for (int i = 0; i < NUM_TESTS; ++i) {

		sprintf(input_test, "./in/test%d.in", i);
		sprintf(reference_file, "./out/test%d.out", i);

		printf("Running test %d\n", i);

		if (run_test(input_test, reference_file)) {
			fprintf(stderr, "Failed to run test %d\n", i);
			return -1;
		}
	}

	return 0;
}