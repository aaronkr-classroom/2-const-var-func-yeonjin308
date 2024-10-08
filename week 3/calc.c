//clac.c
#include <stdio.h>
#include <math.h> //M_PI는 여기 있어야 하지만 없으면 
#include "calc.h"//우리 만든 .h 파일이 include할때 큰 따옴표를 사용해야 됨.


int main(void) {
	double x = 2, 
		   y = 0 ;

	
	printf("x: %.1f + y: %.1f = %.1f\n", x, y, sum(x, y));
	printf("x: %.1f - y: %.1f = %.1f\n", x, y, sub(x, y));
	printf("x: %.1f * y: %.1f = %.1f\n", x, y, mul(x, y));
	printf("x: %.1f / y: %.1f = %.6f\n", x, y, div(x, y));
	printf("x: %d %% y: %d = %d\n", (int)x, (int)y, rem((int)x, (int)y));

	//추가부분
	printf("x: %.1f ^ y: %.1f = %.1f\n", x, y, power(x,y));
	printf("sqrt of x: %.1f = %.1f\n", x, squareRoot(x));
	printf("area of y: %.1f = %.1f\n", y, areaOfCircle(y));
	printf("circ of y: %.1f = %.1f\n", y, circumferenceOfCircle(y));


	return 0;
}

//더하기 (sum())
double sum(double value1, double value2) {
	return value1 + value2;
}


//빼기 (sub())
double sub(double value1, double value2) {
	return value1 - value2;
}

//곱하기(mul())
double mul(double value1, double value2) {
	return value1 * value2;
}

//나누기(div())
double div(double value1, double value2) {
	if(value2 !=0) return value1 / value2;
	else {
		printf("Error: Divide by 0!");
		return 0;
	}
}

//나머지(rem())
int rem(int value1, int value2) {
	if(value2 !=0) return value1 % value2;
	else {
		printf("Error: Divide by 0!");
		return 0;
	}
}

//제곱
double power(double base, double exponent) {
	return pow(base, exponent);//pow 함수()??
}

//제곱근
double squareRoot(double num) {
	if (num >= 0) return sqrt(num);//math.h에 있는 sqrt함수
	else {
		printf("Error: Negative number!");
			return -1;
	}
}

//넓이
double areaOfCircle(double radius) {
	return M_PI * radius * radius; //M_PI 정의해야함. 
}

//둘레
double circumferenceOfCircle(double radius) {
	return 2 * M_PI * radius;
}