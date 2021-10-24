#pragma once
/*
* @return Вычисляет L
*/
void TaskOne(double a, double x, double c);

/*
* @param time Время в секундах.
* @return Вычисляет U.
*/
void TaskTwo(double time);

/*
* @param с Третий коэффицент.
* @param b Второй коэффицент.
* @param a Первый коэффицент.
* @return Вычисляет корни квадратного уравнения.
*/
void  TaskThree(double a, double b, double c);

/*
* @param CityCode Код города.
* @param Time Время в минутах.
* @return Вычисляет цену разговора.
*/
void TaskFour(int CityСode, double Time);

/*
* @return Выводит все четырехзначные числа Армстронга.
*/
void TaskFive();

/*
* @return Переводит двоичное число в виде массива в десятичное.
* @param ArrayLength Количество цифр в двоичном числе.
* @param int* arr двоичное число в виде массива.
*/
void TaskSix(int* arr, int ArrayLength);

/*
* @param i Количество столбцов.
* @param j Количество строк.
* @return Создает матрицу, заполняет ее случайными числами, увеличивает каждое в три раза и меняет их знак.
*/
void TaskSeven(int i, int j);