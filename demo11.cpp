#include <iostream>
using namespace std;

int main() {
   int n, i;
   float price[100], quantity[100], amount[100], total = 0;

   cout << "Enter the number of items: ";
   cin >> n;

   for(i = 0; i < n; ++i) {
      cout << "Enter price and quantity for item " << i + 1 << ": ";
      cin >> price[i] >> quantity[i];
      amount[i] = price[i] * quantity[i];
      total += amount[i];
   }

   cout << "Bill:\n";
   for(i = 0; i < n; ++i) {
      cout << i + 1 << ". Price: " << price[i] << ", Quantity: " << quantity[i] << ", Amount: " << amount[i] << endl;
   }

   cout << "Total amount: " << total;
   return 0;
}

