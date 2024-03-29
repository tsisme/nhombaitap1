#include <stdio.h>
#include <math.h>

void inPut(double& a, double& b, double& c) {
	printf("Nhap gia tri a: "); scanf_s("%lf", &a);
	printf("Nhap gia tri b: "); scanf_s("%lf", &b);
	printf("Nhap gia tri c: "); scanf_s("%lf", &c);
}

double denta(double a, double b, double c) {
	return  (b * b - 4 * a * c);
}

void solvingQuadraticEquations(double a, double b, double c) {     // Hàm giải phương trình bậc 2
	if (a == 0) {
		if (b == 0) {
			if (c == 0)
				printf("Phuong trinh co vo so nghiem...."); // Trường hợp a = b = c = 0 -> Vo so nghiem
			else
				printf("Phuong trinh vo nghiem...."); // Trường hợp a = b = 0, c !=0 -> Vo nghiem
		}
		else
			printf("Phuong trinh co nghiem duy nhat x = %.3lf", -c / b); 
		// Trường hợp a = 0, b != 0, c != 0 -> Chuyển bài toán sang phương trình bậc nhất
	}
	else {
		if (denta(a, b, c) < 0) printf("Phuong trinh vo nghiem....");
		else if (denta(a, b, c) == 0) printf("Phuong trinh co nghiem kep x1 = x2 = %.3lf", -b / (2 * a));
		else printf("Phuong trinh co hai nghiem phan biet x1 =%.3lf, x2 = %.3lf", (-b + sqrt(denta(a,b,c))) / (2 * a), (-b - sqrt(denta(a,b,c))) / (2 * a));
	}
}
		
int main() {
	double a, b, c;
	inPut(a, b, c);
	process1(a, b, c);
}