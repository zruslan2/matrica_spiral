#include <stdio.h>
#include <iostream>

using namespace std;

void main()
{
#define n 4
	int mas[n][n],kol=n*n,ch=1,hod=n-1,krug=0;
	while (krug<=n/2)
	{
		int j = krug;
		int i = krug;
		while (j < hod)
		{
			mas[j][i] = ch;
			j++;
			ch++;
		}
		j = n - krug-1;
		while (i < hod)
		{
			mas[j][i] = ch;
			i++;
			ch++;
		}
		int h = krug;
		while (h < hod)
		{
			mas[j][i] = ch;
			h++;
			j--;
			ch++;
		}
		h = krug;
		while (h < hod)
		{
			mas[j][i] = ch;
			h++;
			i--;
			ch++;
		}
		krug++;
		hod--;
	}
	if (n % 2 == 1)mas[n / 2][n / 2] = n*n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}

}