
#include <iostream>
using namespace std;


int main() {

// Tax rates
double price;
double VAT = 0.21;
double importTAX = 0.05;

// Pricing for packages

double shipCost5 = 5;
double shipCost10 = 10;
double shipCost15 = 15;
double shipCost20 = 20;
double shipCost25 = 25;
double shipCost25Plus = 30;
// Additional variables

double weight;
double shipPrice;
// Calculating price 

cout << "Enter your package price: ";
cin >> price;

cout << "Enter your package weight ";
cin >> weight;

if(weight <= 5){
    shipPrice = shipCost5; // price for packages <= 5kg
} else if(weight <=10){
    shipPrice = shipCost10; // price for packages <= 10kg
} else if(weight <= 15){
    shipPrice = shipCost15; // price for packages <= 15kg
} else if(weight <= 20){
    shipPrice = shipCost20; // price for packages <= 20kg
} else if(weight <= 25){
    shipPrice = shipCost25; // price for packages <=25kg
} else {
    shipPrice = shipCost25Plus; // price of packages 25>
};

double shipping = shipPrice;
double overall = price + shipping + (price * VAT) + (price * importTAX);
cout << "Your package price includign shipping and taxes is: " << overall << " $";


};