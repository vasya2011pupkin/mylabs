// 1w.cpp: определ€ет точку входа дл€ консольного приложени€.
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

   printf_s ("%s", "¬ведите не отрицательное целое число (-1 дл€ выхода): ");
   scanf_s ("%d", &a);
   if (a != -1) {
	   printf_s ("%s", "¬ведите степень \"E\": ");
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
			   printf_s ("%s", "¬ведите коректное число\n");
		   --j;
	   }
	   printf_s ("e = %f\n\n", e);

	   printf_s ("%s", "¬ведите не отрицательное целое число (-1 дл€ выхода): ");
	   scanf_s ("%d", &a);
	   if (a != -1) {
		   printf_s ("%s", "¬ведите степень \"E\": ");
		   scanf_s ("%f", &x);
		}
	   
   }

   _getch ();
} 

