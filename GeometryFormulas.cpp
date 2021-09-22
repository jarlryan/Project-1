/* Geometry Formulas By Ryan Jarl
   Created On: Jan 10, 2021
   This program was made to calculate geometric formulas given one
   constant value for length by utilizing simple input and output methods 
   using floating variables and declaration/initialization statements.*/

#include <iostream>
#include <cmath>
#include <iomanip>

	using namespace std;
//Lines 8+9 are necessary for specifying decimal places, and rounding values correctly.
	const float PI = 3.14159;

int main()
{
	float lengthcenti = 0, lengthmeter = 0;
	float square = 0;
	float circle = 0;
	float difference = 0;
	float down = 0, cube1 = 0;
	float up = 0, cube2 = 0;

	cout << fixed << showpoint;
//Line 24 helps "setprecision()" to function properly.
	cout << "Geometry Formulas By Ryan Jarl" << endl;
	cout << "Enter One Floating Point Number For Length: ";
	cin >> lengthcenti;
//"cin" function is for user input.
	lengthmeter = lengthcenti / 100.0;
	square = lengthmeter * lengthmeter;
	circle = PI * (lengthmeter / 2.0) * (lengthmeter / 2.0);
	difference = abs(square - circle);
//"abs()" function takes the absolute value of contents.
	down = floor(lengthmeter);
	cube1 = pow(down, 3.0);
//"floor()" and "ceil()" used to round numbers down and up.
	up = ceil(lengthmeter);
	cube2 = pow(up, 3.0);
//"pow()" function used to give numbers a specific exponent.
	cout << endl << "The Number You Entered Is: "
	<< setprecision(1) << lengthcenti << " cm" << " Or ";
	cout << setprecision(4) << lengthmeter << " m" << endl;
	cout << "The Area Of The Square: " << setprecision(7) << square << " sq. m" << endl;
	cout << "The Area Of The Circle: " << setprecision(7) << circle << " sq. m" << endl;
	cout << "The Area Of The Square Is Larger Than The Area Of The Circle By: "
	<< setprecision(8) << difference << " sq. m" << endl << endl;
//"setprecision()" is used to print desired decimal place quantity correctly.
	cout << "The Volume Of The Cube With Length Rounded Down: "
	<< setprecision(8) << cube1 << " cu. m" << endl;
	cout << "The Volume Of The Cube With Length Rounded Up: "
	<< setprecision(8) << cube2 << " cu. m" << endl;
	return 0;
}
