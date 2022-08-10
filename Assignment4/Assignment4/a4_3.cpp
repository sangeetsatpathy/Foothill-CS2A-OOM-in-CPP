/*
Sangeet Satpathy
CS2A - Late Spring 2022
Assignment 4, Part 3
5/29/22

This program accounts for the ages of several attendees to an event. Each attendee's age and
food preference (choices being popcorn, soda, or both) are recorded. The program then counts and prints the number
of attendees in each age group, the average age (rounded to the tenth place), the oldest person, the youngest
person, and the number of attendees who prefer each food preference.
 */


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int ELDER = 60;
	const int MIDDLE_AGE = 41;
	const int ADULT = 31;
	const int YOUNG_ADULT = 19;

	int count0_18=0;
	int count19_30=0;
	int count31_40=0;
	int count41_60=0;
	int count60up=0;

	int maxAge;
	int minAge;

	int ageAttendee;

	int sumAges = 0;
	int numAttendees = 0;

	double averageAge;

	int sodaCount=0;
	int popcornCount=0;
	int bothCount=0;

	char foodPreference;

	bool noAttendees = true;

	cout << "Enter age of attendee (negative number to quit): ";
	cin >> ageAttendee;

	if (ageAttendee >= 0)
	{
		maxAge = ageAttendee;
		minAge = ageAttendee;
		noAttendees = false;
	}
	while (ageAttendee >= 0)
	{
		sumAges += ageAttendee;
		numAttendees += 1;

		cout << "Enter food preference ('p' for popcorn, 's' for soda, 'b' for both): ";
		cin >> foodPreference;

		if (ageAttendee < minAge)
		{
			minAge = ageAttendee;
		}
		if (ageAttendee > maxAge)
		{
			maxAge = ageAttendee;
		}


		if (foodPreference == 'p')
		{
			popcornCount += 1;
		}
		else if (foodPreference == 's')
		{
			sodaCount += 1;
		}
		else {
			bothCount += 1;
		}


		if (ageAttendee > ELDER)
		{
			count60up += 1;
		}
		else if (ageAttendee >= MIDDLE_AGE)
		{
			count41_60 += 1;
		}
		else if (ageAttendee >= ADULT)
		{
			count31_40 += 1;
		}
		else if (ageAttendee >= YOUNG_ADULT)
		{
			count19_30 += 1;
		}
		else {
			count0_18 += 1;
		}
		cout << "Enter age of attendee (negative number to quit): ";
		cin >> ageAttendee;
	}

	if (noAttendees == true)
	{
		cout << "You did not enter any attendees, so there is nothing to display." << endl;
	}
	else {
		cout << endl << "age 0 to 18: " << count0_18 << endl;
		cout << "age 19 to 30: " << count19_30 << endl;
		cout << "age 31 to 40: " << count31_40 << endl;
		cout << "age 41 to 60: " << count41_60 << endl;
		cout << "over 60: " << count60up << endl;

		cout << endl << "food preference popcorn: " << popcornCount << endl;
		cout << "food preference soda: " << sodaCount << endl;
		cout << "food preference both: " << bothCount << endl;

		averageAge = sumAges / (double)numAttendees; //returns an accurate result of the age.
		cout << "The average age was " << fixed << setprecision(1) << averageAge << endl;
		cout << "The youngest person in attendance was " << minAge << endl;
		cout << "The oldest person in attendance was " << maxAge << endl;
	}

}

/*
Output:
Enter age of attendee (negative number to quit): 34
Enter food preference ('p' for popcorn, 's' for soda, 'b' for both): s
Enter age of attendee (negative number to quit): 16
Enter food preference ('p' for popcorn, 's' for soda, 'b' for both): b
Enter age of attendee (negative number to quit): 68
Enter food preference ('p' for popcorn, 's' for soda, 'b' for both): b
Enter age of attendee (negative number to quit): 53
Enter food preference ('p' for popcorn, 's' for soda, 'b' for both): s
Enter age of attendee (negative number to quit): 39
Enter food preference ('p' for popcorn, 's' for soda, 'b' for both): p
Enter age of attendee (negative number to quit): 23
Enter food preference ('p' for popcorn, 's' for soda, 'b' for both): s
Enter age of attendee (negative number to quit): 21
Enter food preference ('p' for popcorn, 's' for soda, 'b' for both): s
Enter age of attendee (negative number to quit): -1

age 0 to 18: 1
age 19 to 30: 2
age 31 to 40: 2
age 41 to 60: 1
over 60: 1

food preference popcorn: 1
food preference soda: 4
food preference both: 2
The average age was 36.3
The youngest person in attendance was 16
The oldest person in attendance was 68

*/