// 1w.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   setlocale(LC_ALL, "Russian");

   int a, i, j;
   double e, sum, x, ix, powx = 1;

   printf_s ("%s", "������� �� ������������� ����� ����� (-1 ��� ������): ");
   scanf_s ("%d", &a);
   if (a != -1) {
	   printf_s ("%s", "������� ������� \"E\": ");
	   scanf_s ("%f", &x);
   }


   while (a != -1) {
	   e = 1;
	   j = a;

	   while (j >= 1) {
		   i = j;
		   ix = j;
		   sum = 1;
		   powx = 1;
		   if (i >= 0) {
			   while (i >= 1 ) {
				   sum = sum * i;
				   --i;
			   }

			   while (ix >= 1) {
				   powx = powx * x;
				   --ix;
			   }

			   printf_s ("%d! = %f\n", j, sum);
			   e = e + powx / (double) sum;
		   }
		   else 
			   printf_s ("%s", "������� ��������� �����\n");
		   --j;
	   }
	   printf_s ("e = %f\n\n", e);

	   printf_s ("%s", "������� �� ������������� ����� ����� (-1 ��� ������): ");
	   scanf_s ("%d", &a);
	   if (a != -1) {
		   printf_s ("%s", "������� ������� \"E\": ");
		   scanf_s ("%f", &x);
		}
	   
   }

   _getch ();
} 

