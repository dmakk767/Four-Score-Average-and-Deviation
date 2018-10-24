// Ch3Num6.cpp : Defines the entry point for the console application.
//

//This program computes the average and standard deviation of four scores

#include "stdafx.h"
#include <iostream>
#include <cmath>


using namespace std;

double get_standardDeviation(double &s1, double &s2, double &s3, double &s4, double &avg, double &sd);
//acts as our main function and will be used to call other functions
void get_discription();
//tells user info about program
double get_input(double &s1, double &s2, double &s3, double &s4, double &avg);
//gets scores from user
double get_avg(double &s1, double &s2, double &s3, double &s4, double &avg);
//gets the avg from scores we pass it

//setup variables 
double s1 = 0, s2 = 0, s3 = 0, s4 = 0, avg = 0, sd = 0;

int main()
{
	
	char x;

	get_discription();

	do 
	{
		get_standardDeviation(s1, s2, s3, s4, avg, sd);
		cout << "Would you like to do it again (y/n)? " << endl;
		cin >> x;
		x = toupper(x);
	} while (x=='Y');

    return 0;
}

double get_standardDeviation(double &s1, double &s2, double &s3, double &s4, double &avg, double &sd)
{
	//acts as our main function and will be used to call other functions
	get_input(s1, s2, s3, s4, avg);
	get_avg(s1, s2, s3, s4, avg);
	//cout << "avg is " << avg << endl;
	sd = sqrt(((pow(s1 - avg, 2)) + (pow(s2 - avg, 2)) + (pow(s3 - avg, 2)) + (pow(s4 - avg, 2))) / 4.0);
	cout << "The standard deviation is: " << sd << endl;
	return sd;
}
void get_discription()
{
	//tells user info about program
	cout << "This program computes the average and standard deviation of four scores." << endl;
}

double get_input(double &s1, double &s2, double &s3, double &s4, double &avg)
{
	//gets scores from user
	cout << "Enter the value of score one: " << endl;
	cin >> s1;
	cout << "Enter the value of score two:" << endl;
	cin >> s2;
	cout << "Enter the value of score three:" << endl;
	cin >> s3;
	cout << "Enter the value of score four:" << endl;
	cin >> s4;

	
	return (s1, s2, s3, s4);
}
double get_avg(double &s1, double &s2, double &s3, double &s4, double &avg)
{
	//gets the avg from scores we pass it
	avg = (s1 + s2 + s3 + s4);
	avg = avg / 4.00;
	//test avg
	cout << "The average is: " << avg << endl;
	return avg;
}