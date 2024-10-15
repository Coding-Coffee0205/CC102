#include <iostream>
using namespace std;

int main() {
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	float totalCostPhp, sugarCostPhp, riceCostPhp, sardinesCostPhp, coffeeCostPhp, milkCostPhp;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float usdToPhp, poundToPhp;
	cout << "============SEVENPM Sari-Sari Store Point of Scale System============\n";
	cout << "Price of Sugar: "; 
	cin >> sugarPriceUSD;
	cout << "Price of Rice: "; 
	cin >> ricePricePound;
	cout << "Price of Sardines: "; 
	cin >> sardinesPricePound;
	cout << "Price of Coffee: "; cin >> coffeePriceUSD;
	cout << "Price of Milk: "; cin >> milkPriceUSD;
	cout << "**********************************************************\n";
	cout << "Quantity of Sugar: "; cin >> sugarQty;
	cout << "Quantity of Rice: "; cin >> riceQty;
	cout << "Quantity of Sardines: "; cin >> sardinesQty;
	cout << "Quantity of Coffee: "; cin >> coffeeQty;
	cout << "Quantity of Milk: "; cin >> milkQty;
	cout << "**********************************************************\n";
	cout << "The cost of one dollar in peso: "; cin >> usdToPhp;
	cout << "The cost of one dollar in peso: "; cin >> poundToPhp;
	// declare formula for cost of items
	sugarCostPhp = (sugarPriceUSD * sugarQty);
	riceCostPhp = (ricePricePound * riceQty);
	sardinesCostPhp = (sardinesPricePound * sardinesQty);
	coffeeCostPhp = (coffeePriceUSD * coffeeQty);
	milkCostPhp = (milkPriceUSD * milkQty);
	totalCostPhp = sugarCostPhp + riceCostPhp + sardinesCostPhp + coffeeCostPhp + milkCostPhp;
	usdToPhp = 
	cout << "You need to pay: " << totalCostPhp << endl;
	return 0;
}