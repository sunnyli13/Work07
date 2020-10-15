#include <stdio.h>
#include <string.h>

void print_array(int *arr, int size) {
	int i;

	for(int i = 0; i < size; i++) {
		printf("%d ", *(arr+i));
	}

	printf("\n");
}

double average_array(int *arr, int size) {
	int sum = 0;
	int i;

	for(int i = 0; i < size; i++) {
		sum += *(arr+i);
	}

	return (double) sum / size;
}

void copy_array(int *arr, int *ray, int size) {
	int i;

	for(int i = 0; i < size; i++) {
		*(ray+i) = *(arr+i);
	}
}

int length_string(char *string) {
	int i = 0;
	int sum = 0;

	while(*(string+i)) {
		i++;
		sum++;
	}

	return sum;
}

int main() {
	// print arr
	int arr[5] = {0, 1, 2, 3, 4};
	printf("arr: ");
	print_array(arr, 5);

	// print arr average
	printf("Average of arr: %f\n", average_array(arr, 5));

	// print ray
	int ray[5] = {-1, -1, -1, -1, -1};
	printf("\nray: ");
	print_array(ray, 5);

	// print copied ray
	copy_array(arr, ray, 5);
	printf("ray: ");
	print_array(ray, 5);

	// print length of hello
	printf("\nLength of \"hello\": %d\n", length_string("hello"));

	// test string functions
	char string[10] = "hello";

	// print unaltered string
	printf("\nString: %s\n", string);

	//strcpy
	printf("\n-strcpy-\n");
	printf("Original: %s\n", string);
	strcpy(string, "Systems");
	printf("Copied: %s\n", string);
	
	//strcat
	printf("\n-strcat-\n");
	printf("Combine: %s\n", strcat(string, "hello"));
	
	//strcmp
	printf("\n-strcmp-\n");
	printf("Compare: %d\n", strcmp (string, "hello"));
	printf("Compare: %d\n", strcmp (string, "Systems"));
	
	//strchr
	printf("\n-strchr-\n");
	printf("%s\n", strchr(string, 's'));

	return 0;
}