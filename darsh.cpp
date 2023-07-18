#include <iostream>
using namespace std;

int main() {

   const double TAX_RATE = 0.06; 
   double mealCost = 0, taxAmount = 0, totalCost = 0;
   int choice = 0;
   char n[20];
   int m;

   cout<<"Welcome to the SASTA SANDWICH cafe" << endl;
   cout<<"enter your name : "<< endl;
   cin>>n;
   cout<<"enter your mobile no. : "<< endl;
   cin>>m;

   cout<<"1. vagitable masala- 500" << endl;
   cout<<"2. chese bombay - 600" << endl;
   cout<<"3. mayo chese - 800" << endl;
   cout<<"4. chese toast - 700" << endl;
   cout<<"5. panir chilli - 800" << endl;
   cout<<"6. shezwan chese - 400" << endl;
   cout<<"7. Exit" << endl;

   do {
      cout << "Enter your choice (1-7): ";
      cin >> choice;

      switch (choice) {
         case 1:
            mealCost += 500;
            break;
         case 2:
            mealCost += 600;
            break;
         case 3:
            mealCost += 400;
            break;
         case 4:
            mealCost += 700;
            break;
         case 5:
            mealCost += 800;
            break;
         case 6:
            mealCost += 400;
            break;
         case 7:
            break;
         default:
            cout<<"Invalid choice. Please try again." << endl;
            break;
      }
   } while(choice != 7);

   taxAmount = mealCost * TAX_RATE;
   totalCost = mealCost + taxAmount;
 
   cout << "\nCustomer name : "<<n<<endl;
   cout << "Customer mobile no. : "<<m<<endl;
   cout << fixed << setprecision(2);
   cout << "Cost of Meal: " << mealCost << endl;
   cout << "Tax Amount: " << taxAmount << endl;
   cout << "Total Cost: " << totalCost << endl;

   return 0;
}

