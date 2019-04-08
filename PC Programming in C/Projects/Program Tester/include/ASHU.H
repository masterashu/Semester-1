/*	Program Created By Ashutosh Chuahan
		Class- XI-C, Roll No. 8
*/

#include<conio.h>
#include<ctype.h>
#include<iostream.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef char string[60];
//-----------------------------------------------------------------//


// 1.) Function- To find the area of a Square by using its side

float ar_sqr (float s)
{
	float a = s*s;
	return(a);
}

// 2. Function- To find the area of a Rectangle using its length and breadth

float ar_rect (float l, float b)
{
	float a = l*b;
	return(a);
}

// 3.) Function- To find the area of a Triangle by using its base and height

float ar_tri (float b, float h)
{
	float a = b*h / 2;
	return(a);
}

// 4.) Function- To find area of a Circle by using its radius

float ar_circle (float r)
{
	float a = r*r*(3.141529);
	return(a);
}

// 5.) Function- To convert 'ft' to 'cm'

float ft_to_cm (float ft)
{
	float cm = ft * 12 * (2.54);
	return(cm);
}

// 6.) Function- To convert 'cm' to 'in'

float cm_to_in(long float cm)
{
	float in = cm / (2.54);
	return(in);
}

// 7.) Function- To convert 'Celsius' to 'Fahrenhiet'

float C_to_F(float c)
{
	float f = (c*(9 / 5) + 32);
	return(f);
}

// 8.) Function- To convert "Fahrenhiet' to 'Celsius'

float F_to_C(float f)
{
	float c = ((f - 32)*(5 / 9));
	return(c);
}

// 9.) Function- To convert 'UPPERCASE' character to 'lowercase' character

char up_c_to_low_c(char u)
{
	char l=u + 32;
	return(l);
}

// 10.) Function- To convert 'lowercase' character to 'UPPERCASE' character

char low_c_to_up_c(char l)
{
	char u = l - 32;
	return(u);
}

// 11.) Function- To find Profit or Loss 

float profit(float cp, float sp)
{
	float g;
	if (sp > cp)
		g = sp - cp;
	else
		return(0);
	return(g);
}

// 12.) Function- To find the Average of five numbers

float av_5(float a, float b, float c, float d, float e)
{
	float av = (a + b + c + d + e) / 5;
	return(av);
}

// 13.) Function- To find the Simple Interest by accepting Principle Amount, Rate and Time

float SI(float p, float r, float t)
{
	float si = (p*r*t) / 100;
	return(si);
}

// 14.) Function- To find Compound Interest by accepting Principal Amount, Rate of Interest, Time and Time to be compounded

float CI(float p, float r, float t, float tc = 1)
{
	float a, b, c = p, ci;
	a = t / tc;
	for (b = 1; b <= a; b++)
	{
		c = c*(100 + r) / 100;
	}
	ci = c - p;
	return(ci);
}

// 15.) Function- To find the volume of a Cube using its Side

float vol_cube(float s)
{
	float v = s*s*s;
	return(v);
}

// 16.) Function- To find the volume of a Cuboid using its Lenght, Breadth and Height 

float vol_cub(float l, float b, float h)
{
	float v = l*b*h;
	return(v);
}

// 17.) Function- To find the Volume of a Sphere using its radius

float vol_sph(float r)
{
	float v;
	v = r*r*r * 3 * (3.141529) / 4;
	return(v);
}

// 18.) Function- To find the volume of a cylinder using its base radius and height

float vol_cyl(float r, float h)
{
	float v = r*r*h*(3.141529);
	return(v);
}

// 19.) Function- To find the volume of a pyramid using its Base area and Height

float vol_pym(float ba, float h)
{
	float a = ba*h*(3.141529) / 3;
	return(a);
}

// 20.) Function- To check a number as Even(1) or Odd(0)

int iseven(int n)
{
	if (n % 2 == 0)
		return(1);
	else
		return(0);
}

// 21. Function- To Print numbers from 1 to 'n'

void list(int n)
{
	int i;
	for (i = 1; i <= n; i++)
		cout << i;
}

// 22.) Function- To Print an A.P. by Accepting 'a' , 'd' and 'n'

void ap(int a, int d, int n)
{
	int i;
	cout << a;
	for (i = 1; i < n; i++)
	{
		a+=d;
		cout << a<< '\t';
	}
}

// 23.) Function- To Print an G.P. by Accepting 'a' , 'r' and 'n'

void gp(float a, float r, float n)
{
	int i;
	cout << a;
	for (i = 1; i < n; i++)
	{
		a *= r;
		cout << a << '\t';
	}
}

// 24.) Function- To return the Factorial of a number

double fact(int n)
{
	if (n == 0)
		return(1);
	if (n < 0)
		return (0);
	int i, f = 1;
	for (i = 1; i <= n; i++)
		f = f*i;
	return (f);
}

// 25.) Function- To Check the character to be a Vowel

int isvowel(char x)
{
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
		return(1);
	else
		return(0);
}

// 26.) Function- To Check the character to be a special character

int isspsc(char a)
{
	int x;
	if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z' || a >= '0' && a <= '9')
		return(0);
	else
		return(1); 
}

// 27.) Function- To Check the Character to be a Number

int isnum(char x)
{
	if (x > 47 && x < 58)
		return (1);
	else
		return (0);
}

// 28.) Function- To find length of a string

int stringlength(char x[])
{
	int i, a = 0;
	for (i = 0; x[i] != '\0'; i++)
		a++;
	return(a);
}


// 29.) Function- To Count the No. of Special Characters in a String

int spscount(char x[])
{
	int i, a = 0;
	for (i = 0; x[i] != '\0'; i++)
	{
		if (isspsc(x[i]))
			a++;
	}
	return (a);
}

// 30.) Function- To count the no. of vowels in a String

int countvowel(char x[])
{
	int i, a = 0;
	for (i = 0; x[i] != '\0'; i++)
	{
		if (isvowel(x[i]))
			a++;
	}
	return (a);
}

// 31.) Function- To Compare two Strings

int strcomp(char x[], char y[])
{
	int i, j = 1;
	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] != y[i])
			j = 0;
	}
	return (j);
}

// 32)). Function- To Reverse a String

char * strreverse(char x[])  // '*' is used to add reference to a variable that could be any array with of declared data type
{
	int a = stringlength(x);
	int s,i;
	char y[255];
	i=s=a-1;
	for (int j = 0; j <= s; j++,i--)
	{
		y[i] = x[j];
	}
	return (y);
}

// 33.) Function- To Check if String is a pallendrome or not

int ispall_str(char x[])
{
	int i,j;
	j = i = stringlength(x) - 1;
	for (int a = 0; a <= j; a++ , i--)
	{
		if (x[a] != x[i])
			return (0);
	}
	return (1);
}

// 34.) Function- To reverse a Number

int numrev(long int a)
{
	int i, s = 0;
	for (; a > 0; a /= 10)
	{
		i = a % 10;
		s = (s*10) + i;
	}
	return(s);
}

// 35.) Function- To check if Nuumber is Pallendrome

int ifpall_n(long int n)
{
	int a = n, i, s = 0;
	for (; a > 0; a /= 10)
	{
		i = a % 10;
		s = (s * 10) + i;
	}
	if (n == s)
		return(1);
	else
		return(0);
}

//36.) Function- To Check if Number is Armstrong

int isarmstrong(int n)
{
	int  a, i, s = 0;
	for (a = n; a > 0; a /= 10)
	{
		i = a % 10;
		s = s + (i*i*i);
	}
	if (n == s)
		return (1);
	else
		return(0);
}

// 37.) Function- To Print a Square Pattern of Custom Side and Charcter

void csqr_pattern(int n, char x = '*')
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << x;
		cout << endl;
	}
}

// 38.) Function- To Print a Square Pattern With a String

void ssqr_pattern(char x[], char k = 'h')
{
	int i = stringlength(x) - 1;
	if (k=='h')
	{
		for (int a =1 ; a <= i; a++)
		{
			for (int b = 0; b <= i; b++)
				cout << x[b];
			cout << endl;
		}
	
	}
	else
		if (k == 'v')
		{
		for (int a =1 ; a <= i; a++)
		{
			for (int b = 0; b <= i; b++)
				cout << x[a];
			cout << endl;
		}

	}
}

// 39.) Function- To Print a Triangular Pattern with size and a Character

void ctri_pattern(int n, char x='*')
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << x;
		cout << endl;
	}
}

//40.) Function- To Print a Triangular Pattern with a String

void stri_pattern(char x[], char k = 'h')
{
	int a = stringlength(x) - 1;
	if (k=='h')
	{
		for (int i = 0; i <= a; i++)
		{
			for (int j = 0; j <= i; j++)
				cout << x[j];
			cout << endl;
		}
	}
	else 
		if (k == 'v')
		{
		for (int i = 0; i <= a; i++)
		{
			for (int j = 0; j <= i; j++)
				cout << x[i];
			cout<< endl;
		}
	}
}

// 41.) Function- To Print a Downwards Triangular Pattern with size and a Character

void cdtri_pattern(int n, char x = '*')
{
	for (int i = n; i >= 1; i--)
	{
		for (int j = n; j <= i; j++)
			cout << x;
		cout << endl;
	}
}

// 42.) Function- To Print a Downwards Triangle Pattern With a String

void sdtri_pattern(char x[], char k = 'h')
{
	int n = stringlength(x) - 1;
	if (k == 'h')
	{
		for (int i = n; i >= 0; i--)
		{
			for (int j = 0; j <= i; j++)
				cout << x[j];
			cout << endl;
		}
	}
	else
		if (k == 'v')
		{
			for (int i = n; i >= 1; i--)
			{
				for (int j = n; j >= i; j--)
					cout << x[i];
				cout << endl;
			}
		}
}

// 43.) Function- To Find Mean of 'n' Numbers

float mean(int n)
{
	float i[1000];
	float a, s = 0;
	for (a = 0; a < n; a++)
	{
		int b = a + 1;
		if(b > 10 && b < 15)
			cout << " Enter the " << b << "th Number ";
		else
		{
			switch (b%10)
			{
			case 1: cout << " Enter the " << b << "st Number ";
				break;
			case 2: cout << " Enter the " << b << "nd Number ";
				break;
			case 3: cout << " Enter the " << b << "rd Number ";
				break;
			default: cout << " Enter the " << b << "th Number ";
			}
		}
		cin >> i[a];
		s = s + i[a];
	}
	s = s / n;
	return(s);
}

// 44.) Function- To Print Roots of a Quadratic Equation

void roots(int a, int b, int c)
{
	int D = (b*b) - (4 * a*c);
	float r1, r2;
	r1 = (sqrt(D) - b) / 2 * a;
	r2 = (-sqrt(D) - b) / 2 * a;
	cout << "Roots are " << r1 << " and " << r2;
}

// 45.) Function- To Find HCF of Two Numbers

int hcf(int a, int b)
{
	for (int i = b; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
			return (i);
	}
	return (0);
}

// 46.) Function- To Find LCM of Two Numbers

int lcm(int a, int b)
{
	int m = a * b;
	for (int i = b; i <= m; i++)
	{
		if (i%a == 0 && i%b == 0)
			return(i);
	}
	return(0);
}

// 47.) Function- To Create a Rhombus Shaped Pattern with size and a Character

void crmb_pattern(int n, char x='*')
{
	for (int a = 1; a <= n; a++)
	{
		for (int b = 1; b < a; b++)
			cout << " ";
		for (int c = 1; c <= n; c++)
			cout << x;
	}
}

// 48.) Function- To Create a Rhombus Shaped Pattern With a String

void srmb_pattern(char x[])
{
	int n = stringlength(x);
	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < a; b++)
			cout << " ";
		for (int c = 1; c <= n; c++)
			cout << x[c];
	}
}

// 49.) Function- To show Prime Factorisation of Any Number

void factorize(int n)
{
	if(n<0)
	{
		int m = -n;
		cout << '\n' << "Factorisation of " << n << " = -1";
		double a;
		for (a = 1; a <= m; a++)
		{
			for (int i = 2; i <= m;)
			{
				if (m%i == 0)
				{
					cout << " * " << i;
					m = m / i;
					i = 2;				// value of 'i' is changed to two to double check any other 2's in factorisation
				}
				else
					i++;
			}
		}
	}
	else
	if(n==0)
		cout<<"Sorry No Factors of Zero other than 0.";
	else
	{
		cout << '\n' << "Factorisation of " << n << " = 1";
		double a;
		for (a = 1; a <= n; a++)
		{
			for (int i = 2; i <= n;)
			{
				if (n%i == 0)
				{
					cout << " * " << i;
					n = n / i;
					i = 2;
				}
				else
					i++;
			}
		}
	}
}

// 50.) Function- To Create a Snake Pattern using a Charcter

void snake_pattern(char x)
{
	for (int i = 1; i <= 1000; i++)
	{
		for (int a = 1; a <= 25; a++)
		{
			for (int a1 = 1; a1 <= a; a1++)
				cout << " ";
			cout << x << '\n';
		}
		for (int b = 25; b >= 1; b--)
		{
			for (int b1 = 1; b1 <= b; b1++)
				cout << " ";
			cout << x << '\n';
		}
	}

}

// 51.) Function- To Find smallest number in an Array

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

// 52.) Function- To Find largest number in an Array

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

// 53.) Function- To find Product of all the numbers in an Array

double multiply(int a[], int n)
{
	int k = 1;
	for (int i = 0; i, n; i++)
	{
		k *= a[i];
	}
	return(k);
}

// 54.) Function- To Find HCF of numbers in an Array

double HCF(int a[], int n)
{
	int i, j, k;
	for (k = (smallest(a, n)); k >=1; k--)
	{
		j = 1;
		for (i = 0; i < n; i++)
		{
			if (a[i] / k != 0)
			{
				j = 0;
				break;
			}
		}
		if (j == 1)
			break;
		else
			continue;
	}
	return(k);
}

// 55.) Function- To Find LCM of numbers in an Array

double LCM(int a[], int n)
{
	int i, j, k;
	for (k = largest(a, n); k<= multiply(a, n); k++)
	{
		j = 1;
		for (i = 0; i < n; i++)
		{
			if (k / a[i] != 0)
			{
				j = 0;
				break;
			}
		}
		if (j == 1)
			break;
		else
			continue;
	}
	return(k);
}


//		Classes and Objects

// Class-1 ; Applicant

class Applicant
{
private:
	int ANo;
	string Name;
	float Agg;
	char Grade;
	void Grademe()
	{
		if (Agg >= 80)
			Grade = 'A';
		else if (Agg >= 65)
			Grade = 'B';
		else if(Agg>=50)
			Grade = 'C';
			else 
			Grade = 'D';
	}
public:
	void ENTER()
	{
		cout << "Enter Admission Number:";
		cin >> ANo;
		cout << "Enter Student's Name:";
		gets(Name);
		cout << "Enter Aggregate Percentage:";
		cin >> Agg;
		Grademe();
	}
	void RESULT()
	{
		cout << "/nAdmission No:" << ANo;
		cout << "/nName :" << Name;
		cout << "/nAgg Percentage:" << Agg;
		cout << "/nGrade:" << Grade;
	}
};

// Class-2 Voter

class Voter
{
	string Name;
	int Age;
	string Address;
	char RTV;
	void Check()
	{
		if (Age >= 18)
			RTV = 'Y';
		else
			RTY = 'N';
	}
public:
	void Add()
	{
		cout << "Enter Voter's Name:";
		gets(Name);
		cout << "Enter Address:";
		gets(Address);
		cout << "Enter Age:";
		cin >> Age;
		Check();
	}
	void GetInfo()
	{
		cout << "/nName:" << Name;
		cout << "/n Address:" << Address;
		cout << "/nAge:" << Age;
		cout << "/nRight to Vote" << RTY;
	}
};

//		Class-3 Clothing

class Clothing
{
	string Code;
	string Type;
	int Size;
	string Material;
	float Price;
	void Calc_Price()
	{
		if (strcmp(Material, "COTTON") == 0)
		{
			if (strcmp(Type, "TROUSER") == 0)
				Price = 1500;
			else if (strcmp(Type, "SHIRT") == 0)
				Price = 1200;
		}
		else
		{
			if (strcmp(Type, "TROUSER") == 0)
				Price = 1500 - (1500*25/100);
			else if (strcmp(Type, "SHIRT") == 0)
				Price = 1200 - (1200 * 25 / 100);
		}
	}
public:
	Clothing()
	{
		strcpy(Code, "Not Assigned");
		strcpy(Material, "Not Assigned");
		strcpy(Type, "Not Assigned");
		Price = Size = 0;
	}
	void Enter()
	{
		cout << "Enter Code:";
		gets(Code);
		cout << "Enter Material:";
		gets(Material);
		cout << "Enter Type:";
		gets(Type);
		cout << "Enter Size:";
		cin >> Size;
		Calc_Price();
	}
	void Show()
	{
		cout << "/n Code:" << Code << endl;
		cout << " Material:" << Material << endl;
		cout << " Type:" << Type << endl;
		cout << " Size:" << Size << endl;
		cout << "Price:" << Price << endl;
	}
};

// Class 4-  Bus

class Bus
{
	int Busno;
	string From;
	string To;
	char Type;
	int Distance;
	float Fare;
	void CalcFare()
	{
		switch (Type)
		{
		case 'O':	Fare = Distance * 15;
			break;
		case 'E':		Fare = Distance * 20;
			break;
		case 'L':		Fare = Distance * 24;
		}
	}
public:
	void Allocate()
	{
		cout << "Enter Bus Number:";
		cin >> Busno;
		cout << "Enter Starting Point:";
		gets(From);
		cout << "Enter Destination:";
		gets(To);
		cout << "Enter Bus Type:";
		cin >> Type;
		cout << "Enter the Distance";
		cin >> Distance;
		CalcFare();
	}
	void Show()
	{
		cout << "Bus No:" << Busno << endl;
		cout << "From:" << From << endl;
		cout << "To:" << To << endl;
		cout << "Bus Type:" << Type << endl;
		cout << "Distance:" << Distance << endl;
		cout << "Fare:" << Fare << endl;
	}
};

//		Class 5  Supply

class Supply
{
	int Code;
	string FoodName;
	string Sticker;
	string FoodType;
	void GetType()
	{
		if (strcmp(Sticker, "Green"))
			strcpy(FoodType, "Vegetarian");
		else if (strcmp(Sticker, "Yellow"))
			strcpy(FoodType, "Contains Egg");
		else if (strcmp(Sticker, "Red"))
			strcpy(FoodType, "Non-Vegetarian");
	}
public:
	void FoodIn()
	{
		cout << "Enter Food Code:";
		cin >> Code;
		cout << "Enter Food Name:";
		gets(FoodName);
		cout << "Enter Food Sticker;";
		gets(Sticker);
		GetType();
	}
	void FoodOut()
	{
		cout << "/n Food Code:" << Code;
		cout << "/n Name:" << FoodName;
		cout << "/n Sticker:" << Sticker;
		cout << "/n FoodType:" << FoodType;
	}
};

// Class-6 Outfit

class Outfit
{
private:
	string OCode;
	string OType;
	int OSize;
	string OFabric;
	float OPrice;
	int InitPrice()
	{
		int a;
		if (strcmp(OFabric, "DENIM") == 0)
		{
			if (strcmp(OType, "TROUSER") == 0)
				a = 1500;
			else
				if (strcmp(OType, "JACKET") == 0)
					a = 2500;
		}
		else
		{
			if (strcmp(OType, "TROUSER") == 0)
				a = 1500 - (1500 / 4);
			else
				if (strcmp(OType, "JACKET") == 0)
					a = 2500 - (2500 / 4);
		}
		return(a);
	}
public:
	Outfit(string k, string l, int i, string m)
	{
		OPrice = 0;
		OSize = i;
		strcpy(OCode, k);
		strcpy(OType, l);
		strcpy(OFabric, m);
		OPrice = InitPrice();
	}
	Outfit()
	{
		OPrice = 0;
		OSize = 0;
		strcpy(OCode, "NOT INITIALISED");
		strcpy(OType, "NOT INITIALISED");
	}
	void Input()
	{
		cout << "\n\n Enter Code ";
		gets(OCode);
		cout << " Enter Type ";
		gets(OType);
		cout << " Enter size ";
		cin >> OSize;
		cout << " Enter Fabric ";
		gets(OFabric);
		OPrice = InitPrice();
	}
	void Display()
	{
		cout << "\n Code :" << OCode;
		cout << "\n Type :" << OType;
		cout << "\n size :" << OSize;
		cout << "\n Fabric :" << OFabric;
		cout << "\n PRICE :" << OPrice;
	}
};

// Class-7 Accounts

class Accounts
{	
protected:
	string Name;
	double AcNo;
	float OBal;
	float Bal;
	char type;
public:
	void Deposit()
	{
		float amt;
		cout << "Enter Deposited Amount:";
		cin >> amt;
		Bal = Bal + amt;
	}
	void Withdraw()
	{
		int take;
		cout << "Current Balance:" << Bal;
		cout << "Enter amount to Withdraw:";
		cin >> take;
		if (take > Bal)
			cout << "Sorry. Transanction failed due to insufficient Balance!";
		else
		{
			Bal = Bal - take;
			cout << "Current Balance: " << Bal;
		}
	}
	void ShowInfo()
	{
		cout << "A/C Number:" << AcNo;
		cout << "A/C Type:";
		switch (type)
		{
		case 'c': cout << " Current";
			break;
		case 's': cout << " Savings";
			break
		default: cout << "Unknown"
		}
		cout << "Name :" << Name;
		cout << "Opening Balance" << OBal;
		cout << "Current Balance :" << Bal;
	}
};

// Class 8 - Current (derived from Accounts)

class Current : public Accounts
{
	type = 'c';
	const int MinBal = 2000;
public:
	void Check()
	{
		if (Bal < MinBal)
		{
			cout << "Balance less than Minimum required balance. Applying Penalty.......";
			if (Bal > 500)
			{
				Bal = Bal - 500;
				cout << "Updated Balace: " << Bal;
			}
			else
			{
				Bal = 0;
				cout << "Account Close due to no Balance!";
			}
		}
	}
};


// Text Files 

// Text file-1 Word by Word

void TXT1()
{
	fstream xf;
	char x[12];
	xf.open("story.txt", ios::in);
	if (!xf)
	{
		cout << "file not found";
		return;
	}
	while (!xf.eof())
	{
		xf >> x;
		cout << x << ' ';
	}
	xf.close();
}
void main()
{
	TXT1();
	getch();
}

// Text File-2 Line by Line

void TXT2()
{
	fstream xf;
	char x[80];
	xf.open("story.txt", ios::in);
	if (!xf)
	{
		cout << "file not found";
		return;
	}
	while (!xf.eof())
	{
		xf.getline(x, 80);
		cout << x << '\n';
		xf.close();
	}
}

// Text File-3 No. of Spaces Count

int TXT3()
{
	fstream be;
	char x;
	int i = 0;
	be.open("story.txt", ios::in);
	if (!be)
	{
		cout << "file not found!";
		return;
	}
	while (!be.eof())
	{
		be.get(x);
		cout << x;
		if (x == '32')
			i++;
		return(i);
	}
	be.close();
	cout << "No of spaces " << i;
}

// Text File-4 No. Of Words

void TXT4()
{
	fstream sp;
	char x[15];
	int i;
	sp.open("story.txt", ios::in);
	if (!sp)
	{
		cout << "file not found";
		return;
	}
	while (!sp.eof())
	{
		sp >> x;
		i++;
	}
	sp.close();
}

// Text File-5 Character by Character

void TXT5()
{
	fstream xf;
	char x;
	xf.open("story.txt", ios::in);
	if (!xf)
	{
		cout << "file not found";
		return;
	}
	while (xf.get(x))
	{
		cout << x;
	}
	xf.close();
}

// Text File-6 

void TXT6()
{
	fstream file;
	char x;
	file.open("abcd.txt", ios::in | ios::app);
	if (!xf)
	{
		cout << "file not found";
		return;
	}
	while (file.get(x))
	{
		x = toupper(x);
	}
	file.close();
}

// Binary File Function

class flight
{
	int fno;
	char from[20];
	char to[20];
	float amount;
public:
	void enter()int retfno()
	{
		cout << "Enter flight no.=";
		cin >> fno;
		cout << "Enter starting point=";
		gets(from);
		cout << "Enter destination";
		gets(to);
		cout << "Enter amount=";
		cin >> amount;
	}
	void display()
	{
		cout << "\n Flight no=" << fno;
		cout << "\n Starting point=" << from;
		cout << "\n Destination=" << to;
		cout << "\n Amount=" << amount;
	}

	{
		return(fno);
	}
};
//1. Adding
void add()
{
	fstream xf;
	flight f;
	char x;
	xf.open("flight.dat", ios::out | ios::binary);
	do {
		f.enter();
		xf.write((char *)&f, sizeof(f));
		cout << "add more records y/n";
		cin >> x;
	} while (x == 'y');
	xf.close();
}
//2.Displaying
void show()
{
	fstream xf;
	flight f;
	char w;
	xf.open("flight.dat", ios::in | ios::binary);
	if (!xf)
	{
		cout << "File not found";
		return;
	}
	while (xf.read((char *)&f, sizeof(f)))
		f.display();
	xf.close();
	getch();
}
//3. Searching
void search()
{
	fstream xf;
	flight f;
	int n;
	int k = 0;
	xf.open("flight.dat", ios::in | ios::binary);
	if (!xf)
	{
		cout << "File not found";
		return;
	}
	cout << "Enter the flight no. to be searched=";
	cin >> n;
	while (xf.read((char *)&f, sizeof(f)))
	{
		if (f.retfno() == n)
		{
			f.display();
			k = 1;
		}
	}
	if (k == 0)
		cout << "No such records";
	xf.close();
	getch();
}
//4.Deleting records
void del()
{
	fstream xf, yf;
	flight f;
	int x;
	xf.open("flight.dat", ios::in | ios::binary);
	yf.open("temp.dat", ios::out | ios::binary);
	if (!xf)
	{
		cout << "File not found";
		return;
	}
	cout << "Enter flight no. to be deleted=";
	cin >> x;
	while (xf.read((char *)&f, sizeof(f)))
	{
		if (f.retfno() != x)
			yf.write((char *)&f, sizeof(f));
	}
	xf.close();
	yf.close();
	remove("flight.dat");
	rename("temp.dat", "flight.dat");
	getch();
}
//5.Modify
void mod()
{
	fstream xf;
	flight f;
	int x, r
		= 0;
	xf.open("flight.dat", ios::in | ios::out | ios::binary);
	if (!xf)
	{
		cout << "file not foumd";
		return;
	}
	cout << "enter flight no. to be modified";
	cin >> x;
	while (xf.read((char *)&f, sizeof(f)))
	{
		r++;
		if (f.retfno() == x)
		{
			cout << "enter new values";
			f.enter();
			xf.seekg((r - 1) * sizeof(f), ios::beg);
			xf.write((char *)&f, sizeof(f));
			getch();
		}
	}
	xf.close();
}
void main()
{
	int ch;
	while (1)
	{
		clrscr();
		for (int z = 1; z <= 13; z++)
		{
			gotoxy(12, z);
			cout << "*";
		}
		gotoxy(12, 1);
		cout << "* * * * * * * * * * * * * * * * * *  * * *";
		gotoxy(20, 2);

		cout << "Airline information";
		gotoxy(20, 3);
		cout << "~~~~~~~~~~~~~~~~~~~";
		gotoxy(22, 4);
		cout << "Flight details";
		gotoxy(22, 5);
		cout << "~~~~~~~~~~~~~~";
		gotoxy(15, 7);
		cout << "1.>Add a new flight";
		gotoxy(15, 8);
		cout << "2.>See a flight";
		gotoxy(15, 9);
		cout << "3.>Search a flight information";
		gotoxy(15, 10);
		cout << "4.>Remove flight";
		gotoxy(15, 11);
		cout << "5.>Modify flight information";
		gotoxy(15, 12);
		cout << "6.>Exit";
		gotoxy(12, 13);
		cout << "* * * * * * * * * * * * * * * * * * * * *";
		for (int m = 1; m <= 12; m++)
		{
			gotoxy(53, m);
			cout << "*";
		}
		gotoxy(15, 16);
		cout << "Enter your choise(1-6)";
		cin >> ch;
		switch (ch)
		{
		case 1:add();
			break;
		case 2:show();
			break;
		case 3:search();
			break;
		case 4:del();
			break;
		case 5:mod();
			break;
		case 6:cout << "End of menu driven program";
			exit(0);
			getch();
		}
	}
}

void arrfn1()
{
	int *a, n, i, j, k;
	cout << "Enter legth of the array : ";
	cin >> n;
	a = new int[n];
	
}


// Array Based Functions

// 1. Search ( Linear )

int Lsearch(int AR[], int size, int item)
{
	for (int i = 0; i < size; i++)
	{
		if (AR[i] == item)
			return i;
	}
	return -1;

}

// 2. Search ( Binary )

int Bsearch(int AR[], int size, int item)
{
	int beg, last, mid;
	beg = 0;
	last = size - 1;
	while (beg <= last)
	{
		mid = (beg + last) / 2;
		if (item == AR[mid])
			return mid;
		else if (item > AR[mid])
			beg = mid + 1;
		else
			last = mid - 1;

	}
	return -1;
}

// 3. Sorting ( Bubble Sort )

void Bubblesort(int A[], int size)
{
	int temp, ctr = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}

	}
	cout << "Sorted Array-\n";
	for(i=0;i<size;i++)
	{
		cout << A[i] << ":";
	}
}

// 4. Sorting ( Selection Sort )

void Selectionsort(int A[], int size)
{
	int small, pos, tmp;
	for (int i = 0; i < size; i++)
	{
		small = A[i];
		pos = i;
		for (int j = i + 1; j < size; j++)
		{
			if (A[j] < small)
			{
				small = A[j];
				pos = j;
			}
		}
		tmp = A[i];
		A[i] = A[i + 1];
		A[i + 1] = tmp;
	}
	cout << "Sorted Array-\n";
	for (i = 0; i<size; i++)
	{
		cout << A[i] << ":";
	}
}

// 5. Sorting ( Insertion Sort )

void Inssort(int A[], int size)
{
	A[0] = INT_MIN;
	int tmp, j;
	for (int i = 1; i <= size; i++)
	{
		tmp = A[i];
		j = i - 1;
		while (tmp < A[j])
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = tmp;
	}
	cout << "Sorted Array-\n";
	for (i = 0; i<size; i++)
	{
		cout << A[i] << ":";
	}
}

void main() {
	int n, *a, x;
	cout << "Enter no. of Elements- ";
	cin >> n;
	a = new int[n];
	cout << "Enter the Elements-\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Enter no. to be Searched- ";
	cin >> x;
	int k = Lsearch(a, n, x);
	cout << "Element " << x << " is at position " << k + 1;
}

// Functions Based on 2-D Arrays-

// Function 1- Sum of Two Matrices

int * matixsum()
{
	int a[10][10], b[10][10];
	int i, j, m, n, p, q;
	cout << "Enter First Matrix size and elements:-";
	cin >> m >> n;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cout << "Enter Second Matrix size and elements:-";
	cin >> p >> q;
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
			cin >> b[i][j];
	}
	if (!(m == p) && (n == q))
	{
		cout << "Matrices can't be added!";
		return;
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			a[i][j] += b[i][j];
	}
	cout << "Added Matrix is: \n";
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout >> a[i][j];
	}
	return a;
}

// Function-2 Diffrence of two Matrices

int * matixsum()
{
	int a[10][10], b[10][10];
	int i, j, m, n, p, q;
	cout << "Enter First Matrix size and elements:-";
	cin >> m >> n;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	}
	cout << "Enter Second Matrix size and elements:-";
	cin >> p >> q;
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
			cin >> b[i][j];
	}
	if (!(m == p) && (n == q))
	{
		cout << "Matrices can't be subtracted!";
		return;
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			a[i][j] -= b[i][j];
	}
	cout << "Subtracted Matrix is: \n";
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout >> a[i][j];
	}
	return a;
}

// Function-3 Multiplication of two Matrices

int * matrixmutiply()
{
	int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

	cout << "Enter rows and columns for first matrix: ";
	cin >> r1 >> c1;
	cout << "Enter rows and columns for second matrix: ";
	cin >> r2 >> c2;
	if(c1!=r2)
		cout << "Error! column of first matrix not equal to row of second.";
	cout << endl << "Enter elements of first matrix :" << endl;
	for (i = 0; i < r1; i++)
		for (j = 0; j < c1; j++)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
	cout << endl << "Enter elements of second matrix :" << endl;
	for (i = 0; i < r2; i++)
		for (j = 0; j < c2; j++)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	for (i = 0; i < r1; i++)
		for (j = 0; j < c2; j++)
			mult[i][j] = 0;
			for (k = 0; k < c1; ++k)
			{
				mult[i][j] += a[i][k] * b[k][j];
			}
	cout << endl << "Output Matrix: " << endl;
	for (i = 0; i < r1; i++)
		for (j = 0; j < c2; j++)
		{
			cout << " " << mult[i][j];
		}
	cout << endl;
	return mult;
}

// Function-4 Show alternate elements of a matrix

void showdiagonal(int A[][], int m, int n)
{
	int disp = 1;
	for (int i == ; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << A[i][j];
		disp *= -1;

	}
}

// Function-5 Find Determinant of a Square Matrix

double caldet(int A[], int n)
{
	double d;
	int c, subi, i, j, subj;
	double submat = new[n][n];
	if (n == 2)
	{
		return((mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			subi = 0;
			for (i = 1; i < n; i++)
			{
				subj = 0;
				for (j = 0; j < n; j++)
				{
					if (j == c)
					{
						continue;
					}
					submat[subi][subj] = mat[i][j];
					subj++;
				}
				subi++;
			}
			d = d + (pow(-1, c) * mat[0][c] * det(n - 1, submat));
		}
	}
	return d;
}

// Stacks and Queues

// Stacks using Array

class querearr 
{
	int front, rear;
	int *a;
	int n;
public:
	querearr()
	{
		front = rear = -1;
		a = new int[20];
		n = 20;
	}
	querearr(int k) {
		n = k;
		front = rear = -1;
		a = new int[k];
	}
	void Add(int x)
	{
		if (rear >= n - 1)
		{
			cerr << "Queue Overflow!";
			return;
		}
		if (rear == -1)
			front++;
		rear++;
		a[rear] = x;
	}
	void Delete()
	{
		if (front == rear) {
			cerr << "Queue Underflow!";
			return;
		}
		front++;
	}
	void Delete(int x)
	{
		if (front == rear) {
			cerr << "Queue Underflow!";
			return;
		}
		if (a[front] == x)
			front++;
	}
	void View()
	{
		cout << "Queue is ";
		for (int i = front; i <= rear; i++)
		{
			cout << " : " << a[front];
		}
		cout << ".";
	}
};

// Stack Using Arrays

class stackarr {
	int *a;
	int top;
	int n;
public:
	stackarr()
	{
		n = 20;
		top = -1;
		a = new int[20];
	}
	stackarr(int k)
	{
		n = k;
		top = -1;
		a = new int[k];
	}
	void Add(int x)
	{
		if (top >= n - 1)
		{
			cerr << "Stack is Full!";
			return;
		}
	}
	void Delete()
	{
		if (top == -1)
		{
			cerr << "Stack is Empty!";
		}
		top--;
	}
	void Delete(int x)
	{
		if (top == -1)
		{
			cerr << "Stack is Empty!";
		}
		if (a[top] == x)
			top--;
	}

};

// Stacks Using Pinters ( Linked lists )

struct Node {
	int a;
	int b; 
	Node *link;
};

class Stacksp {
	Node *top;
public:
	Stacksp() {
		top = NULL;
	}
	void Push()
	{
		Node *obj;
		obj = new Node;
		cout << "Enter Values- ";
		cin >> obj->a >> obj->b;
		if (top == NULL)
		{
			top = obj;
			obj->link = NULL;
			return;
		}
		obj->link = top;
		top = obj;
	}
	void Pop() {
		Node *obj;
		obj = top;
		if (top == NULL) {
			cerr << "Stack is Empty!";
			return;
		}
		top = obj->link;
		delete obj;
	}
};

// Queues using Pointers ( Linked Lists )

class Queuesp {
	Node *front, *rear;
publlic:
	Queuesp() {
		front = NULL; Rear = NULL;
	}
	void Add()
	{
		Node *obj;
		obj = new Node;
		cout << "Enter Values- ";
		cin >> obj->a >> obj->b;
		if (rear == NULL)
		{
			front = obj; rear = obj;
			onj->link = NULL;
			return;
		}
		obj->link = rear;
		rear = obj;
	}
	void Delete() {
		Node *obj;
		obj = front;
		if (front == NULL)
		{
			cerr << "Queue is Empty";
			return;
		}
		front = obj->link;
		delete obj;
	}
};

