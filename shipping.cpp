
#include <iostream>
using namespace std;


int main() {

// Tax rates
double price;
double VAT = 0.21;
double importTAX = 0.05;

// Pricing for packages

double kg5 = 5;
double kg10 = 10;
double kg15 = 15;
double kg20 = 20;
double kg25 = 25;
double kg25Plus = 30;
// Additional variables

double weight;
double shipPrice;
// Calculating price 

cout << "Enter your package price: ";
cin >> price;

cout << "Enter your package weight ";
cin >> weight;

if(weight <= kg5){
    shipPrice = kg5;
} else if(weight <=10){
    shipPrice = kg10;
} else if(weight <= 15){
    shipPrice = kg15;
} else if(weight <= 20){
    shipPrice = kg20;
} else if(weight <= 25){
    shipPrice = kg25;
}else if(weight > 25){
    shipPrice = kg25Plus;
};

cout << shipPrice;


};