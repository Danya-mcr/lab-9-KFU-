#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
// задание 1А
void nums_in(int nums[], int nums_size) {
	for (int i = 0; i < nums_size; i++) {
		cout << "Введите "<< i+1 << " элемент в массив: ";
		cin >> nums[i];
	}
}
// задание 1Б
void nums_out(int nums[], int nums_size) {
	for (int i = 0; i < nums_size; i++) {
		cout << nums[i] << "["<<i<<"]" << "\t";
	}
	cout << endl;
}
// задание 1В
void pr_vec(int nums1[], int nums2[], int size_nums){
	int pr = 0;
	for (int i = 0; i < size_nums; i++) {
		pr += nums1[i] * nums2[i];
	}
	cout << "Скалярное произведение векторов: " << pr << endl;;
}
// задание 1Г
void sum_vec(int nums1[], int nums2[], int size_nums, int& result) {
	for (int i = 0; i < size_nums; i++) {
		result += nums1[i] + nums2[i];
	}

}
// задание 1Д
int* ver_sc(int nums[],int n, int sc) {
	int *pr = new int[n];
	for (int i = 0; i < n; i++) {
		pr[i] = nums[i] * sc;
	}
	return pr;
}
// задание 1Е
int find_el(int nums[], int n, int el) {
	bool key = false;
	while (key == false){
		for (int i = 0; i < n; i++) {
			if (nums[i] == el)
				key = true;
		}
		if (key == false)
			el++;
		else
			return el;
	}
}
// задание 2А
void mult_in(int **nums, int &n, int &m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> nums[i][j];
		}
	}
}
// задание 2Б
void mult_out(int** nums, int& n, int& m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << nums[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
// задание 2В
void mult_sqrt(int** nums, int& n, int& m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << pow(nums[i][j], 2) << " ";
		}
		cout << endl;
	}

}
// задание 3А
void mult_rand(int** nums, int& n, int& m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			nums[i][j] = 1 + rand() % 101;
		}
	}
}
// задание 3Б см. 2Б
// задание 3В
void sum_in_rows(int** nums, int& n, int& m, int* result) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			*(result+i) += nums[i][j];
		}
	}
}
// задание 3Г
int* min_el_mult(int** nums, int& n, int& m) {
	int* result = new int[n] {};
	for (int i = 0; i < n; i++) {
		*(result+i) = nums[i][0];
		for (int j = 0; j < m; j++) {
			if (nums[i][j]<*(result+i))
				*(result+i) = nums[i][j];
		}
	}
	return result;
}
// задание 3Д
int** mult_pr(int** nums, int& n, int& m, int** nums2) {
	int** result = new int* [n] {};
	for (int i = 0; i < n; i++)
		result[i] = new int[m] {};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			result[i][j] += nums[i][0] * nums2[0][j] + nums[i][1] * nums2[1][j] + nums[i][2] * nums2[2][j];
		}
	}
	return result;
}
int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));	
	//задание 1А
	/*int nums[5];
	int nums_size = sizeof(nums) / sizeof(nums[0]);
	nums_in(nums, nums_size);
	for (int i = 0; i < nums_size; i++) {
		cout << nums[i] << "\t";
	}*/

	// задание 1Б
	/*int nums[5];
	int size_nums = sizeof(nums) / sizeof(nums)[0];
	nums_in(nums, size_nums);
	nums_out(nums, size_nums);*/

	// задание 1В
	/*int n;cout << "Введите размер массива 1 и 2: "; cin >> n;
	int* nums1 = new int[n] {};
	int* nums2 = new int[n] {};
	int size_nums = n;
	nums_in(nums1, size_nums); nums_in(nums2, size_nums);
	nums_out(nums1, size_nums); nums_out(nums2, size_nums);
	pr_vec(nums1, nums2, size_nums);*/

	// задание 1Г
	/*int n; cout << "Введите размер массива 1 и 2: "; cin >> n;
	int* nums1 = new int[n] {};
	int* nums2 = new int[n] {};
	int size_nums = n, result = 0;
	nums_in(nums1, size_nums); nums_in(nums2, size_nums);
	nums_out(nums1, size_nums); nums_out(nums2, size_nums);
	sum_vec(nums1, nums2, size_nums, result);
	cout << "Сумма векторов: " << result;*/

	// задание 1Д
	//int n, sc; cout << "Введите длину массива: "; cin >> n; // надо вернуться
	//cout << endl << "Введите скаляр: "; cin >> sc;
	//int* nums = new int[n] {};
	//nums_in(nums, n); nums_out(nums, n);
	//int* res = ver_sc(nums, n, sc);
	//for (int i = 0; i < n; i++) {
	//	cout << res[i] << "\t";
	//}

	// задание 1Е
	/*int n, el; cout << "Введите кол-во элементов массива: "; cin >> n;
	cout << endl << "Введите элемен, который нужно найти: "; cin >> el;
	int* nums = new int[n];
	nums_in(nums, n); nums_out(nums, n);
	cout << find_el(nums, n, el);*/

	// задание 2А, Б, В // для авт. массивов n и m вводить через cin
	/*cout << "Введите параметры матрницы n*m: ";
	int n, m; cin >> n >> m;
	int** nums = new int*[n];
	for (int i = 0; i < n; i++)
		nums[i] = new int[m];
	mult_in(nums, n, m);
	mult_out(nums, m, n);
	mult_sqrt(nums, n, m);*/
	
	// задание 3А, Б
	/*cout << "Введите параметры матрницы n*m: ";
	int n, m; cin >> n >> m;
	int** nums = new int* [n];
	for (int i = 0; i < n; i++)
		nums[i] = new int[m];
	mult_rand(nums, n, m);
	mult_out(nums, n, m);*/

	// задание 3В
	/*cout << "Введите параметры матрницы n*m: ";
	int n, m; cin >> n >> m;
	int* result = new int[n] {};
	int** nums = new int* [n];
	for (int i = 0; i < n; i++)
		nums[i] = new int[m];
	mult_in(nums, n, m);
	mult_out(nums, n, m);
	sum_in_rows(nums, n, m, result);
	for (int i = 0; i < n; i++) {
		cout << *(result+i) << " ";
	}*/

	// задание 3Г
	/*cout << "Введите параметры матрницы n*m: ";
	int n, m; cin >> n >> m;
	int** nums = new int* [n];
	for (int i = 0; i < n; i++)
		nums[i] = new int[m];
	mult_in(nums, n, m);
	mult_out(nums, n, m);
	int* res = min_el_mult(nums, n, m);
	for (int i = 0; i < n; i++)
		cout << res[i] << "\t";*/

	// задание 3Д
	cout << "Введите параметры 1 матрицы n*m: ";
	int n, m; cin >> n >> m;
	int** nums = new int* [n];
	for (int i = 0; i < n; i++)
		nums[i] = new int[m];
	int** nums2 = new int* [n];
	for (int i = 0; i < n; i++)
		nums2[i] = new int[m];
	mult_in(nums, n, m); mult_in(nums2, n, m);
	mult_out(nums, n, m); mult_out(nums2, n, m);
	int** res = mult_pr(nums, n, m, nums2);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << *(res[i]+j) << " ";
		}
		cout << endl;
	}
	delete res, nums, nums2;
	return 0;
}


