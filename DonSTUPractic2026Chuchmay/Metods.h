#ifndef METHODS_H
#define METHODS_H

#include <vector>
#include <string>
using namespace std;

struct Result  //структура для реализации методов Зейделя и Гаусса
{
	double* x; //массив для матрицы
	bool reshenie; //проверка true-значит решено
	string message; //пояснение
	double time_sec; //время работы
};


//Метод Гаусса

Result gauss(double** A, double* b, int n);


//Метод Зейделя

Result seidel(double** A, double* b, int n, double eps = 1e-6, int max_iter = 10000);

//Очистка памяти результата

void free_result(Result& r);

#endif