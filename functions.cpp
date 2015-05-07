//Functions to calculate costs
//Author: Janice Love
//Date: 4-30-2015

#include "functions.h" 

int no_samples = 12; 
int years = 8;
double price;
double depreciation = price / 8;
double per_sample = 2;

double techTime() 
{ 
 	double hour = 23.38; // $23.38 per hour 
 	double fifteen = 4;  
 	double time = hour / fifteen; 
 	return time; 
} 

double lightScope ()
{
	double price = 15568.00; //asset listing
	int weeklySamples = no_samples * 5;
	int samples_yearly = weeklySamples * 52;
	double per_sample = depreciation/ samples_yearly;
	return per_sample;
}

double dissectScope ()
{
	double price = 6019.00;//asset listing
	int weeklySamples = no_samples * 5;
	int samples_yearly = weeklySamples * 52;
	double per_sample = depreciation/ samples_yearly;
	return per_sample;
}

double centrifuge ()
{
	//Fisher scientific accuSpin micro
	//Price: BCM marketplace
	double price = 1550.75; 
	int weeklySamples = no_samples * 5;
	int samples_yearly = weeklySamples * 52;
	double per_sample = depreciation/ samples_yearly;
	return per_sample;
}

double eppendorfTubes ()
{
	//Axygen brand, 500 per box
	double price = 8.47; 
	int quantity = 500; 
	double unit = price / quantity;
	return unit;
}

double mineralOil ()
{
	double price = 51.00; 
	double quantity = 500;
	double per = price / quantity;
	return per;
}

double fecaMed_solution ()
{
	double price = 8.47;
	double quantity = 3785.41; // 1 gal = 3785.41 mL
	double per_ml = price / quantity;
	double amount = no_samples * per_sample; 
	double cost = amount * per_ml; 
	return cost; 
}

double applicators ()
{
	double price = 69.59; //per case
	double pack = 864; //amount per box
	double quantity = 864 * 12; //total per case
	double unit = price / quantity;
	double amount = no_samples * per_sample; 
	double cost = amount * unit;
	return cost;
}

double petri ()
{
	double price = 72.66;
	double box = 500; 
	double unit = price / box;
	double cost = 3 * unit; //4 samples per dish, 12/4 = 3
	return cost;
}

double unit (double price, double quantity)
{
	double cost = price / quantity;
	return cost;
}

double slides ()
{
	double price = 1082.19;
	double box = 3600;
	double unit = price / box; 
	return unit;
}

double paperTowels() 
{ 
 	double price = 65.31; 
 	int pk = 120; 
 	int box = 12; 
 	int quantity = pk * box;  
	double cost = price / quantity; 
 	return cost;  
 } 


double alcohol() 
{ 
 	double price = 88.80; 
 	int quantity = 12; 
 	double unit = price / quantity;  
 	int qPerBottle = 32; //oz 
 	double costPerOz = unit / qPerBottle; 
 	return costPerOz; 
} 

double coverslips ()
{
	double price = 103.05;
	double quantity = 10;
	double unit = price / quantity;
	double samples = 100; // 1 oz of coverslips for 100 samples
	double cost = unit / samples; 
	return cost;
}

double glovesUsed () 
{ 
	double price = 165.40; 
 	int quantity = 3000; 
 	double pricePerGlove = price / quantity; 
 	return pricePerGlove; 
} 


 
double costNONBCM (double z) 
{ 
 	double a = 0.25 * z; 
 	double b = a + z;  
 	return b;  
} 
 
double costOUTSIDE (double y) 
{ 
 	double a = 0.50 * y; 
 	double b = a + y; 
 	return b; 
} 
