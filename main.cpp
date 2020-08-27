#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

double number;
double answer;
char optionA, optionL, optionW, optionV, optionAr, quit;

void printIntroduction();
void printGoodBye();
void lengthMenu();
void areaMenu();
void volumeMenu();
void weightMenu();
void printAnswer();
// Lengths
void inchesToCentimeters();
void yardsToMeters();
void milesToKilometers();
// Weights
void ouncesToGrams();
void poundsToKilograms();
void tonsToKilograms();
// Volumes
void pintsToLiters();
void quartsToLiters();
void gallonsToLiters();
// Areas
void sqInchesToSqMillimeters();
void sqFeetToSqMeters();
void acresToSqMeters();

double enterData();
void printAnswer(double, string, double, string);

void Triangle (int side, int sides, int sidez, int parameter, int face, int height)
{
    cout << "Enter a, b, c of triangle and height a: " << endl;
    cin >> side >> sides >> sidez >> height;
    cout << "P = a + b + c" << endl;
    cout << "S = a * height a / 2" << endl;
    parameter = side + sides + sidez;
    face = side * height / 2;
    cout << "Parameter is: " << parameter << " cm" << endl;
    cout << "Face is: " << face << " cm^" << endl;
}

void Rectangle (int rside, int rsides, int rsidez, int rsidesz, int rparameter, int rface)
{
        cout << "Enter a, b, a, b of rectangle: " << endl;
    cin >> rside >> rsides >> rsidez >> rsidesz;
    cout << "P = a  + b + a + b" << endl;
    cout << "S = a * b" << endl;
    rparameter = rside + rsides + rsidez + rsidesz;
    rface = rside * rsides;
    cout << "Parameter is: " << rparameter << " cm" << endl;
    cout << "Face is: " << rface << " cm^" << endl;
}

void Square (int sside, int sparameter, int sface)
{
        cout << "Enter a of square: " << endl;
    cin >> sside;
    cout << "P = a * 4" << endl;
    cout << "S = a * a" << endl;
    sparameter = sside * 4;
    sface = sside * sside;
    cout << "Parameter is: " << sparameter << " cm" << endl;
    cout << "Face is: " << sface << " cm^" << endl;
}

void Root (float a, float b, float c, float x1, float x2, float discriminant, float realPart, float imaginaryPart)
{
    cout << "Enter coefficients a, b and c: " << endl;
    cin >> a >> b >> c;
    cout << "Discriminant = b^ - 4*a*c" << endl;
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
}

void Diamond (int a, int f, int b, int s)
{
  a = 6;
  s = 1;
  s = a - 1;

  for (b = 1; b<=a; b++)
  {
    for (f = 1; f<=s; f++)
      cout<<" ";

    s--;

    for (f = 1; f<= 2*b-1; f++)
      cout<<"*";

    cout<<"\n";
  }

  s = 1;

  for (b = 1; b<= a - 1; b++)
  {
    for (f = 1; f<= s; f++)
      cout<<" ";

    s++;

    for (f = 1 ; f<= 2*(a-b)-1; f++)
      cout<<"*";

    cout<<"\n";
  }
}

void Calculator (int n, char op, float num1, float num2)
{
    cout << "Enter operator either + or - or * or /: " << endl;
    cin >> op;
    cout << "Enter two operands: " << endl;
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2 << endl;
            break;

        case '-':
            cout << num1-num2 << endl;
            break;

        case '*':
            cout << num1*num2 << endl;
            break;

        case '/':
            cout << num1/num2 << endl;
            break;



        default:
            cout << "Error! operator is not correct " << endl;
            break;
    }
}

void lengthMenu()
{
	cout << "Lengths" << endl;
	cout << "\tI = Inches to centimeters" << endl;
	cout << "\tY = Yards to meters" << endl;
	cout << "\tM = Miles to Kilometers" << endl;
	cout << "\t\tChoose an option: ";
	cin >> optionL;

	if (optionL == 'I'|| optionL == 'i')
	{
		inchesToCentimeters();
	}
	else if (optionL == 'Y'|| optionL == 'y')
	{
		yardsToMeters();

	}
	else if (optionL == 'M'|| optionL == 'm')

	{
		milesToKilometers();
	}

}

void weightMenu()
{
	cout << "Weights" << endl;
	cout << "\tO = Ounces to grams" << endl;
	cout << "\tP = Pounds to Kilograms" << endl;
	cout << "\tT = Tons to Kilograms" << endl;
	cout << "\t\tChoose an option: ";
	cin >> optionW;

	if (optionW == 'O' || optionW == 'o')
	{
	ouncesToGrams();
	}
	else if (optionW == 'P' || optionW == 'p')
	{
	poundsToKilograms();

	}
	else if (optionW == 'T' || optionW == 't')

	{
	tonsToKilograms();
	}
}

void volumeMenu()
{
	cout << "Volumes" << endl;
	cout << "\tP = Milliliters to liters" << endl;
	cout << "\tQ = Liters to Gallons" << endl;
	cout << "\tG = Gallons to liters" << endl;
	cout << "\t\tChoose an option: ";
	cin >> optionV;
	if (optionV == 'P' || optionV == 'p')
	{
	pintsToLiters();
	}
	else if (optionV == 'Q' || optionV == 'q')
	{
	quartsToLiters();

	}
	else if (optionV == 'G' || optionV == 'g')

	{
	gallonsToLiters();
	}
}
void areaMenu()
{
	cout << "Areas" << endl;
	cout << "\tI = Square inches to square millimeters" << endl;
	cout << "\tF = Square meters to Acres" << endl;
	cout << "\tA = Acres to square meters" << endl;
	cout << "\t\tChoose an option: ";
	cin >> optionAr;

	if (optionAr == 'I' || optionAr == 'i')
	{
		sqInchesToSqMillimeters();
	}
	else if (optionAr == 'F' || optionAr == 'f')
	{
		sqFeetToSqMeters();

	}
	else if (optionAr == 'A' || optionAr == 'a')

	{
		acresToSqMeters();
	}
}

void inchesToCentimeters()
{
	number = enterData();
	answer = (number * 2.54);
	printAnswer(number, " Inches ", answer, " Centimeters ");
}

void yardsToMeters()
{
	number = enterData();
	answer = (number * 0.9144);
	printAnswer(number, " Yards ", answer, " Meters ");
}

void milesToKilometers()
{
	number = enterData();
	answer = (number * 1.609344);
	printAnswer(number, " Miles ", answer, " Kilometers ");
}

//
void ouncesToGrams()
{
	number = enterData();
	answer = (number * 28.349523);
	printAnswer(number, " Ounces ", answer, " Grams ");
}

void poundsToKilograms()
{
	number = enterData();
	answer = (number * 0.453592);
	printAnswer(number, " Pounds ", answer, " Kilograms ");
}

void tonsToKilograms()
{
	number = enterData();
	answer = (number * 907.18474);
	printAnswer(number, " Tons ", answer, " Kilograms ");
}

void pintsToLiters()
{
	number = enterData();
	answer = (number / 1000);
	printAnswer(number, " Milliliters ", answer, " Liters ");
}

void quartsToLiters()
{
	number = enterData();
	answer = (number / 3.785306);
	printAnswer(number, " Liters ", answer, " Gallons ");
}

void gallonsToLiters()
{
	number = enterData();
	answer = (number * 3.785306);
	printAnswer(number, " Gallons ", answer, " Liters ");
}

void sqInchesToSqMillimeters()
{
	number = enterData();
	answer = (number * 645.16);
	printAnswer(number, " Square Inches ", answer, " Square Millimeters ");
}

void sqFeetToSqMeters()
{
	number = enterData();
	answer = (number /(4.04688 * pow(10,3)));
	printAnswer(number, " Square Meters ", answer, " Acres ");
}

void acresToSqMeters()
{
	number = enterData();
	answer = (number * (4.04688 * pow(10,3)));
	printAnswer(number, " Acres ", answer, " Square Meters ");
}

double enterData()
{
	number;
	cout << "\tEnter your value: ";
	cin >> number;
	return number;
}

void printAnswer(double cTemp, string sTemp, double dTemp, string rTemp)
{
	cout << endl;
	cout << cTemp << sTemp << "= " << dTemp << rTemp << endl;
	cout << endl;
}

int main()
{
    string l;
    string d, f, k;
    system("color 0a");
    cout << endl;
    Diamond(1, 1, 1, 1);
    cout << endl << "Hello! THis is our calculating C++ project, here you can solute every math task to 9 class. Enjoy!" << endl << endl;
    Diamond(1, 1, 1, 1);
    cout << "Do you want to calculate measuring units? yes - y no - n: " << endl;
    cin >> d;
    if (d == "y"){
     cout << "Main Menu" << endl;
	cout << "\tL = Length" << endl;
	cout << "\tW = Weight" << endl;
	cout << "\tV = Volume" << endl;
	cout << "\tA = Area" << endl;
	cout << "\t\tChoose an option: ";

	cin >> optionA;
	if (optionA == 'L'|| optionA == 'l')
	{
	lengthMenu();
	}
	else if (optionA == 'W'|| optionA == 'w')
	{
	weightMenu();
	}
	else if (optionA == 'V'|| optionA == 'v')
	{
	volumeMenu();
	}
	else if (optionA == 'A'|| optionA == 'a')
	{
	areaMenu();
	}
	cout << "Would you like to continue? yes - y no - n : " << endl << endl;
	cin >> quit;
	if (quit == 'y')
	{
	void printGoodBye();
	}
	else {
        void mainMenu();
	}
    }
    else if (d == "n"){
        cout << "OK go ahead to the next part of the program." << endl;
    }
    cout << "Do you want to go to the calculator? yes - y no - n: " << endl;
    cin >> f;
    if (f == "y") {
        Calculator(1, 1, 1, 1);
    }
    else if (f == "n"){
        cout << "OK go ahead to the next part of the program." << endl;
    }

    cout << "Do you want to go to find solution of Rectangle, Square, Quadric Equation(QE) or Triangle? yes - y no - n: " << endl;
    cin >> k;

    if (k == "y"){
        string solution;
    cout << "Select what you want to find solution: Rectangle, Square, Quadric Equation(QE) or Triangle " << endl;
    cin >> solution;

    if (solution == "Triangle")
    {
        Triangle(1, 1, 1, 1, 1, 1);
    }

    if (solution == "Rectangle")
    {
        Rectangle(1, 1, 1, 1, 1, 1);
    }
    if (solution == "Square")
    {
        Square(1, 1, 1);
    }
    if (solution == "(QE)")
    {
        Root(1.1, 1.1, 1.1, 1.1, 1.1 ,1.1, 1.1, 1.1);
    }
    }
    if (k == "n"){
        cout << "OK that was the program. " << endl;
    }

    if (k == "n" && f == "n" && d == "n"){
        cout << "Why you did not use nothing from the program? :( " << endl;
    }

    cout << "Do you want to use the program again? yes - y no - n " << endl;
    cin >> l;
    if (l == "y"){
        main();
    }
    if (l == "n"){
        cout << "OK goodbye! See you next time. " << endl;
    }

    cout << "Thanks for choosing our calculating program!" << endl;

}
