 
#include <iostream>
using namespace std;

int main() {

   const double TAX_RATE = 0.10;
   double mealCost=0, taxAmount=0, totalCost=0, discount=0,grandtotal=0;
   int choice = 0;
   char n[20];
   int m,q;
   
   
   
   cout<<"\nWelcome to the SQUARE SPICY CAFE" << endl;
   cout<<"\nEnter your name : ";
   cin>>n;
   cout<<"Enter your mobile no. : ";
   cin>>m;
   cout<<"\n--------------------------MENU--------------------------"<<endl;
   cout<<"1. vagitable masala_____500 \t 4. chese toast________700" << endl;
   cout<<"2. chese bombay_________600 \t 5. panir chilli_______800" << endl;
   cout<<"3. mayo chese___________800 \t 6. shezwan chese______400" << endl;
   cout<<"7. Exit" << endl;

   do {
      cout <<"\nSelect items (1 to 7): ";
      cin >> choice;

      switch (choice) {
         case 1:
            cout<<"enter quntity";
            cin>>q;
            q*=500;
            cout<<"your price is : "<<q<<endl;
             cout<<"\t\t\t\tvegitable masala\t";
            mealCost += q;
            break;
         case 2:
            
            cout<<"enter quntity";
            cin>>q;
            q*=600;
            cout<<"enter quntity : "<<q<<endl;
             cout<<"\t\t\t\tchese bombay\t\t";
             mealCost += q;
            break;
         case 3:
            cout<<"enter quntity";
            cin>>q;
            q*=400;
            cout<<"your price is : "<<q<<endl;
             cout<<"\t\t\t\tmayo chese\t\t";
            mealCost += q;
            break;
         case 4:
            cout<<"enter quntity";
            cin>>q;
            q*=700;
            cout<<"your price is : "<<q<<endl;
            cout<<"\t\t\t\tchese toast\t\t";
            mealCost += q;
            break;
         case 5:
            cout<<"enter quntity";
            cin>>q;
            q*=800;
            cout<<"your price is : "<<q<<endl;
            cout<<"  panir chilli\t\t";
            mealCost += q;
            break;
         case 6:
            cout<<"enter quntity";
            cin>>q;
            q*=400;
            cout<<"your price is : "<<q<<endl;
            cout<<"\t\t\t\tshezwan chese\t\t";
            mealCost += q;
            break;
         case 7:
            break;
         default:
            cout<<"  Invalid choice. Please try again." << endl;
            break;
      }
   } while(choice != 7);

   taxAmount = mealCost * TAX_RATE;
   totalCost = mealCost + taxAmount;
 
   cout << "\nCustomer name : "<<n<<endl;
   cout << "Customer mobile no. : "<<m<<endl;
   cout << "Cost of Meal: " << mealCost << endl;
   cout << "Tax Amount: " << taxAmount << endl;
   cout << "Total Cost: " << totalCost << endl;

   if(totalCost>3000)
      {
         cout<<"\nCongrats! You'll get 10% discount";
         discount = (totalCost*10)/100;
         grandtotal = totalCost-discount;
      }
     
     cout<<"\nDiscount is : "<<discount << endl;
     cout<<"Your total with discount is : "<<totalCost-discount << endl;

     cout<<"\n  THANK YOU FOR COMMING HERE  "<<endl;

 return 0;
}
