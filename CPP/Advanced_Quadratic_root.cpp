#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d = 1, x = 0, y = 0, root1, root2;
	cout << "coefficient of x2 : ";
	cin >> a;
	cout << "coefficient of x  : ";
	cin >> b;
	cout << "constant          : ";
	cin >> c;
	cout << "Roots : ";
	int xnum, xden;
	int factors_atemp[30];
	int sizeatemp = 0;
	int tempa, tempb;
	if (a < 0)
		tempa = -a;
	else
		tempa = a;
	if (b < 0)
		tempb = -b;
	else
		tempb = b;
	int f = 2;
	int D = (b * b) - 4 * a * c;
	int imagenary = 0;
	int factors_D[30];
	int sizeD = 0;
	int rootD = 1;
	int ynum = 1, yden = 1;
	int factors_d[30];
	int sized = 0;
	int factors_a[30];
	int sizea = 0;
	int factors_b[30];
	int sizeb = 0;
	if (D < 0)
	{
		D = -D;
		imagenary = 1;
	}
	if (D == 0)
	{
		if (((-b) % (2 * a)) == 0)
			cout << ((-b) / (2 * a)) << " , " << ((-b) / (2 * a));
		else
			cout << (-b) << " / " << (2 * a) << "  ,  " << (-b) << " / " << (2 * a);
	}
	else
	{
		while (f <= D) // calculating square root
		{
			if (D % f == 0)
			{
				factors_D[sizeD++] = f;
				D = D / f;
			}
			else
			{
				f++;
			}
		}
		for (int i = 0; i < sizeD; i++)
		{
			for (int j = i + 1; j < sizeD; j++)
			{
				if (factors_D[i] == factors_D[j])
				{
					factors_d[sized++] = factors_D[i];
					for (int k = j; k < sizeD; k++)
					{
						if ((k + 1) == sizeD)
						{
							factors_D[k + 1] = 0;
						}
						else
						{
							factors_D[k] = factors_D[k + 1];
						}
					}
					sizeD--;
					for (int l = i; l < sizeD; l++)
					{
						if ((l + 1) == sizeD)
							factors_D[l] = 0;
						else
							factors_D[l] = factors_D[l + 1];
					}
					sizeD--;
					i--;
					break;
				}
			}
		} // calculation of square root done
		for (int i = 0; i < sized; i++)
		{
			d = d * factors_d[i];
		}

		if (sizeD == 0 && ((((-b) + d) % (2 * a))) == 0 && ((((-b) - d) % (2 * a))) == 0)
		{
			root1 = ((((-b) + d) / (2 * a)));
			root2 = ((((-b) - d) / (2 * a)));
			cout << root1 << " , " << root2;
		}
		else
		{
			if (sizeD == 0)
			{
				int fbpd[30];
				int fbsd[30];
				int sizebpd = 0, sizebsd = 0;
				int bpd, bsd;
				if (((-b) + d) < 0)
					bpd = -(((-b) + d));
				else
					bpd = ((-b) + d);
				if (((-b) - d) < 0)
					bsd = -(((-b) - d));
				else
					bsd = ((-b) - d);
				f = 2; // calculating factors of a
				while (f <= tempa)
				{
					if (tempa % f == 0)
					{
						factors_a[sizea++] = f;
						tempa = tempa / f;
					}
					else
					{
						f++;
					}
				}
				factors_a[sizea++] = 2;
				f = 2;
				while (f <= bpd) // calculating factors of bpd
				{
					if (bpd % f == 0)
					{
						fbpd[sizebpd++] = f;
						bpd = bpd / f;
					}
					else
					{
						f++;
					}
				}
				f = 2;
				while (f <= bsd) // calculating factors of bsd
				{
					if (bsd % f == 0)
					{
						fbsd[sizebsd++] = f;
						bsd = bsd / f;
					}
					else
					{
						f++;
					}
				}
				{ // coping factors of a
					sizeatemp = sizea;

					for (int i = 0; i < sizea; i++)
					{
						factors_atemp[i] = factors_a[i];
					}
				}

				{ // removing common factors of a and bpd
					for (int i = 0; i < sizea; i++)
					{
						for (int j = 0; j < sizebpd; j++)
						{
							if (factors_a[i] == fbpd[j])
							{
								for (int k = i; k < sizea; k++)
								{
									if ((k + 1) == sizea)
										factors_a[k] = 0;
									else
										factors_a[k] = factors_a[k + 1];
								}
								for (int k = j; k < sizebpd; k++)
								{
									if ((k + 1) == sizebpd)
										fbpd[k] = 0;
									else
										fbpd[k] = fbpd[k + 1];
								}
								sizea--;
								sizebpd--;
								i--;
								break;
							}
						}
					}
				}
				{ // removing common factors of atemp and bsd
					for (int i = 0; i < sizeatemp; i++)
					{
						for (int j = 0; j < sizebsd; j++)
						{
							if (factors_atemp[i] == fbsd[j])
							{
								for (int k = i; k < sizeatemp; k++)
								{
									if ((k + 1) == sizeatemp)
										factors_atemp[k] = 0;
									else
										factors_atemp[k] = factors_atemp[k + 1];
								}
								for (int k = j; k < sizebsd; k++)
								{
									if ((k + 1) == sizebsd)
										fbsd[k] = 0;
									else
										fbsd[k] = fbsd[k + 1];
								}
								sizeatemp--;
								sizebsd--;
								i--;
								break;
							}
						}
					}
				}

				int r1den = 1, r1num = 1, r2den = 1, r2num = 1;
				{ // initializing r1den and r1num and r2den and r2num
					for (int i = 0; i < sizea; i++)
					{
						r1den = r1den * factors_a[i];
					}
					for (int i = 0; i < sizebpd; i++)
					{
						r1num = r1num * fbpd[i];
					}
					if ((((-b) + d) < 0 && a > 0) || ((((-b) + d)) > 0 && a < 0))
						r1num = -r1num;
					for (int i = 0; i < sizebsd; i++)
					{
						r2num = r2num * fbsd[i];
					}
					for (int i = 0; i < sizeatemp; i++)
					{
						r2den = r2den * factors_atemp[i];
					}
					if ((((-b) - d) < 0 && a > 0) || ((((-b) - d)) > 0 && a < 0))
						r2num = -r2num;

					cout << r1num << " / " << r1den << "  ,  " << r2num << " / " << r2den;
				}
			}
			else
			{

				f = 2; // calculating factors of a
				while (f <= tempa)
				{
					if (tempa % f == 0)
					{
						factors_a[sizea++] = f;
						tempa = tempa / f;
					}
					else
					{
						f++;
					}
				}
				factors_a[sizea++] = 2;
				f = 2; // calculating factors of b
				while (f <= tempb)
				{
					if (tempb % f == 0)
					{
						factors_b[sizeb++] = f;
						tempb = tempb / f;
					}
					else
					{
						f++;
					}
				}
				{ // coping factors of a
					sizeatemp = sizea;

					for (int i = 0; i < sizea; i++)
					{
						factors_atemp[i] = factors_a[i];
					}
				}
				{ // removing common factors of a and b
					for (int i = 0; i < sizea; i++)
					{
						for (int j = 0; j < sizeb; j++)
						{
							if (factors_a[i] == factors_b[j])
							{
								for (int k = i; k < sizea; k++)
								{
									if ((k + 1) == sizea)
										factors_a[k] = 0;
									else
										factors_a[k] = factors_a[k + 1];
								}
								for (int k = j; k < sizeb; k++)
								{
									if ((k + 1) == sizeb)
										factors_b[k] = 0;
									else
										factors_b[k] = factors_b[k + 1];
								}
								sizea--;
								sizeb--;
								i--;
								break;
							}
						}
					}
				}
				{ // removing common factors of atemp and d
					for (int i = 0; i < sizeatemp; i++)
					{
						for (int j = 0; j < sized; j++)
						{
							if (factors_atemp[i] == factors_d[j])
							{
								for (int k = i; k < sizeatemp; k++)
								{
									if ((k + 1) == sizeatemp)
										factors_atemp[k] = 0;
									else
										factors_atemp[k] = factors_atemp[k + 1];
								}
								for (int k = j; k < sized; k++)
								{
									if ((k + 1) == sized)
										factors_d[k] = 0;
									else
										factors_d[k] = factors_d[k + 1];
								}
								sizeatemp--;
								sized--;
								i--;
								break;
							}
						}
					}
				}
				int root = 1;
				for (int i = 0; i < sizeD; i++)
				{
					root = root * factors_D[i];
				}
				int xnum = 1, ynum = 1, xden = 1, yden = 1;
				for (int i = 0; i < sizea; i++)
				{
					xden = xden * factors_a[i];
				}
				for (int i = 0; i < sizeb; i++)
				{
					xnum = xnum * factors_b[i];
				}
				if ((b > 0 && a > 0) || (b < 0 && a < 0))
					xnum = -xnum;
				for (int i = 0; i < sizeatemp; i++)
				{
					yden = yden * factors_atemp[i];
				}
				for (int i = 0; i < sized; i++)
				{
					ynum = ynum * factors_d[i];
				}
				if (imagenary == 1)
				{
					cout << xnum << " / " << xden << " + " << ynum << " "
						 << "root(" << root << ")i"
						 << " / " << yden;
					cout << "   ,   ";
					cout << xnum << " / " << xden << " - " << ynum << " "
						 << "root(" << root << ")i"
						 << " / " << yden;
				}
				else
				{
					cout << xnum << " / " << xden << " + " << ynum << " "
						 << "root(" << root << ")"
						 << " / " << yden;
					cout << "   ,   ";
					cout << xnum << " / " << xden << " - " << ynum << " "
						 << "root(" << root << ")"
						 << " / " << yden;
				}
			}
		}
	}
	return 0;
}
