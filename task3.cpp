#include<iostream>
#include<iomanip>
using namespace std;

float taxcalculator(char type, float price);

main(){

char type;
float price, posttax;

cout << "Enter the vehicle type code(M, E, S, V, T): ";
cin >> type;

cout << endl << "Enter the price of the vehicle: $";
cin >> price;

posttax = taxcalculator(type, price);

cout << endl << "The final price of a vehicle of type " << fixed << setprecision(2) << type << " after adding the tax is $" << posttax;

}

float taxcalculator(char type, float price){

float tax, newprice;

if( type == 'M'){
	tax = price * 0.06;
	newprice = price + tax;
	return newprice;
}

if( type == 'S'){
	tax = price * 0.1;
	newprice = price + tax;
	return newprice;
}

if( type == 'V'){
	tax = price * 0.12;
	newprice = price + tax;
	return newprice;
}

if( type == 'E'){
	tax = price * 0.08;
	newprice = price + tax;
	return newprice;
}

if( type == 'T'){
	tax = price * 0.15;
	newprice = price + tax;
	return newprice;
}


}