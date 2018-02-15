#include<iostream>
using namespace std;
//week 5 in-class work - call-by-reference
//side note: a += b means set a equal to a+b. Can be repeatedly called to keep incrementing a by b amount.


// Here a and c are parameters of the function.
void Func(int a, int & c) //notice the ampersand before c, this is the difference between calling by value or reference
{

}


int main() {
		int   x = 0;
		int   z = 0;

		// Here x and z are the arguments to the function call
		Func(x, z);

	/*
	Parameter x >>> a
		This is call-by-value. When you call the function the value of the argument, x in this case, is used to instantiate the parameter a.
		
		!! Any changes to a will not be made to x. (only the value is passed between them) !!


	Parameter z >>> c
		This is call-by-reference. The address of the argument z is used to make a reference, the parameter c, so that c effectively becomes another name for z within the function.
		
		!! Any changes to c will directly change z. (the value actually updates the original variable) !!
	*/


		// homework is to ask for a month, and a year. then print up a calendar for that month with the correct days of the week ( s m t w t f s )
		// find the day of the week that the year started on, then you can run a calculator (function) to find the day each month starts on





	return 0;
}