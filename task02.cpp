#include<iostream>
#include<iomanip>
using namespace std;

float pyramidvolume(int length, int width, int height, string unit);

main(){

int length, width, height;
string unit;
float convertedvolume;

cout << "Enter the length of the pyramid (in meters): ";
cin >> length;

cout << endl << "Enter the width of the pyramid (in meters): ";
cin >> width;

cout << endl << "Enter the height of the pyramid (in meters): ";
cin >> height;

cout << endl << "Enter the desired output unit(millimeters, centimeters, meters, kilometers): ";
cin >> unit;

convertedvolume = pyramidvolume(length, width, height, unit);

if(unit == "millimeters"){
	cout << endl << "The volume of the pyramid is: " << fixed << setprecision(6) << convertedvolume << " cubic millimeters";
}

if(unit == "centimeters"){
	cout << endl << "The volume of the pyramid is: " << fixed << setprecision(6) << convertedvolume << " cubic centimeters";
}

if(unit == "meters"){
	cout << endl << "The volume of the pyramid is: " << fixed << setprecision(6) << convertedvolume << " cubic meters";
}

if(unit == "kilometers"){
	cout << endl << "The volume of the pyramid is: " << fixed << setprecision(6) << convertedvolume << " cubic kilometers";
}

}

float pyramidvolume(int length, int width, int height, string unit){

float basearea, volume;

basearea = length * width;
volume = (basearea * height) / 3;

if(unit == "millimeters"){
	volume = volume * 1000;
	return volume;
	}
if(unit == "centimeters"){
	volume = volume * 100;
	return volume;
	}
if(unit == "meters"){
	return volume;
	}
if(unit == "kilometers"){
	volume = volume / 1000;
	return volume;
	}
}










