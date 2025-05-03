const double Increase = 0.076;
double CurrenSalary, PredidctedSalary,AddedOnValue;

int Years;
string name,answer;

cout << "Please enter your name for the new QPS systen : ";
cin >> name;

cout << "\nHey " << name << " Welcome to the new Qps system";

cout << "\nPlease enter your anual salary R";
cin >> CurrenSalary;
cout << "\nWe have been notified that you got a 7.6 percent increase, \nwould you like to see your new salary (yes/no)";
AddedOnValue = CurrenSalary * Increase;
PredidctedSalary = CurrenSalary + AddedOnValue;
cin >> answer;
if (answer == "yes") {
	cout << "Please take note your new salary will be R" << PredidctedSalary;
}
else if (answer == "no") {
	exit;
}
else
{
	exit;
}

cout << "\n\nWell Done on this massive achievement, \nwould you like to see the prediction over the course of x-amount of years : ";
cin >> Years;

for (int I = 0; I < Years; I++)
{

	AddedOnValue = PredidctedSalary * Increase;
	PredidctedSalary = PredidctedSalary + AddedOnValue;
	cout << "\nPlease note for years " << I << "it will be : R" << PredidctedSalary << "\n";

}

			
