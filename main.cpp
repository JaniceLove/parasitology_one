/*Program to calculate costs for processing
parasitology samples. 
Author: Janice Love
Date: 5-1-2015 
Update: 5-7-2015
*/

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

#include "functions.h"

using namespace std;


int main ()
{
	ofstream myFile;
	myFile.open("parasitology.txt");

	myFile << fixed << setprecision(2);

	double scope = lightScope ();
	double dScope = dissectScope ();
	double c = centrifuge ();
	double tubes = eppendorfTubes ();
	double oil = mineralOil ();
	double fecasol = fecaMed_solution ();
	double apps = applicators ();
	double p = petri ();
	double microSS = slides ();
	double t = paperTowels ();
	double al = alcohol ();
	double slips = coverslips ();
	double labor = techTime (); //per 15 minutes
	double gloves = glovesUsed ();

	//pinworm slides
	double pinwormBCM = dScope + labor + al + t + gloves; 
	double pinworm_nonBCM = costNONBCM (pinwormBCM);
	double pinworm_OUT = costOUTSIDE (pinwormBCM);

	//fur pluck
	double furBCM = labor + dScope + tubes + (oil * 2) 
		+ apps + (0.25 * p) + (t* 3) + al + gloves; 
	double fur_nonBCM = costNONBCM (furBCM);
	double fur_OUT = costOUTSIDE (furBCM);

	//fecal float
	double ffloatBCM = (labor * 2) + scope + tubes + 
		fecasol + (apps * 2) + microSS + (t * 6) + 
		(gloves * 3);
	double ffloat_nonBCM = costNONBCM (ffloatBCM);
	double ffloat_OUT = costOUTSIDE (ffloatBCM); 

	myFile << "PARASITOLOGY PRICES " << endl;
	myFile << endl;
	myFile << "Fur Pluck (BCM): $ " << furBCM << endl;
	myFile << "Fur pluck (non-BCM): $ " << fur_nonBCM << endl;
	myFile << "Fur Pluck (non-academic): $ " << fur_OUT << endl;
	myFile << endl;
	myFile << "Pinworm test (BCM): $ " << pinwormBCM << endl;
	myFile << "Pinworm test (non-BCM): $ " << pinworm_nonBCM << endl;
	myFile << "Pinworm test (non-academic): $ " << pinworm_OUT << endl;
	myFile << endl;
	myFile << "Fecal float and parasite exam (BCM): $ " << ffloatBCM << endl;
	myFile << "Fecal float and parasite exam (non-BCM): $ " << ffloat_nonBCM << endl;
	myFile << "Fecal float and parasite exam (non-academic): $ " << ffloat_OUT << endl;
	myFile << endl;

	myFile.close();


	return 0;
}

