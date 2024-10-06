#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string projecttimecalculation(int hours, int days, int workers);

main(){

int hours, days, workers;
string output;

cout << "Enter the needed hours: ";
cin >> hours;

cout << endl << "Enter the days that the firm has: ";
cin >> days;

cout << endl << "Enter the number of all workers: ";
cin >> workers;

output = projecttimecalculation(hours, days, workers);
cout << output;
}


string projecttimecalculation(int hours, int days, int workers){

float trainingdays, timeavailable, totaltimeavailable, hoursneeded;
string output;
int inthoursneeded;

float days1;

days1 = days;

trainingdays = days1 * 0.1;
days1 = days1 - trainingdays;

timeavailable = days1 * 10;

totaltimeavailable = timeavailable * workers;
hoursneeded = hours - totaltimeavailable;
inthoursneeded = hoursneeded;

if(totaltimeavailable > hours){
	inthoursneeded = inthoursneeded * -1;
	output = "Yes! " + to_string(inthoursneeded) + " hours left.";
	return output;
}

if(totaltimeavailable < hours){

	output = "Not enough time! " + to_string(inthoursneeded) + " hours needed.";
	return output;
}

}