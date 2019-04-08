#pragma once
int largest(int a[], int n)
{
	int i, k = a[0];
	for (i = 0; i < n; i++)
	{
		if (a[i] > k)
			k = a[i];
	}
	return(k);
}
int smallest(int a[], int n)
{
	int i, k = a[0];
	for (i = 0; i < n; i++)
	{
		if (a[i] < k)
			k = a[i];
	}
	return(k);
}
void orderascending(int a[], int b[], int n)
{
	int k;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			k = a[0];
			if (a[j] < k)
				if (a[j]>0)
				{
					k = a[j];
					a[j] = 0;
				}	
		}
		b[i] = k;
	}
}
int calculate(int n)
{
	const int num=n;
	int arr[num];
	int b[num];
	orderascending(arr, b, num);
	int ans[num];
	for (int i = 1; i <largest(arr,num); i++)
	{
		int j = 1;
		int s = smallest(arr, num);
		for (int p = 1, p <= num;p++)
		{
			if (s + i = b[p])
				j++;

		}
		ans[i] = j;
	}
	return largest(ans, largest(arr, num));
}
void main()
{
	cout << :"enter n:";
	int n;
	cin >> n;
	const int k = n;
	int a[k];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cout << "ans is" << calxulate(a, n);
	getch();
}