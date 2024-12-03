//******************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     You are to create an Inventory Tracker System
//              In data/runresults.txt you will see how the tracker is to
//              work. You will need to write the definition for each function
//              prototype in the order as they appear below.
// Hours:       
//******************************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const char MENU_QUIT = 'Q';
const char MENU_PRINT = 'P';
const char MENU_BUY = 'B';
const char MENU_TOTAL = 'T';

struct Item {
  string mProductName;
  string mID;
  double mPrice;
  double mQuantity;
};

char getMenuSelection ();
void getItem (Item& item);
int getItems (Item items[], string fileName);
void printItem (const Item& item);
void printItems (const Item items[], int size);
double getInventoryValue (const Item items[], int size);
void buyItem (Item items[], int &size, string id, double quantity);

int main () {
  const int MAX_ITEMS = 100;
  const string ITEM_FILE_NAME = "data/inventory.txt";
  Item items[MAX_ITEMS];
  int size;
  char menuSelection;

  cout << fixed << setprecision (2);

  // Write the code to call getItems which will load the struct array
  // with the inventory items from the file in ITEM_FILE_NAME



  // Write the code to get a menu selection. Then using a switch, call
  // the correct function to perform the user's selection.
  // NOTE: When you get to the last choice which is MENU_BUY in the switch,
  //       you will need to ask the user for the item id and quantity
  //       before calling the buyItem function
  

  return EXIT_SUCCESS;
}
