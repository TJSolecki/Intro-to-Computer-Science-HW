#include <iostream>
#include <string>
using namespace std;

struct Date
{
  int month;
  int day;
  int year;
};

struct Item
{
  string itemName;
  string creator;
  double price;
  int size;
  string chaptersOrList[100];
  Date releaseDate;
};

double fillCart(Item a[], int size);
void printItem(Item it);
void initializeItems(Item& it);

int main()
{
  Item item1 = {"Movie Title", " Bob Smith ", 15.50, 2,{"Chapter 1", "Chapter 2"},{5,3,2004}};
  Item item2 = {"Book Title", " Ryan Smick ", 100.0, 2,{"Chapter 1", "Chapter 2"},{5,4,2004}};
  Item item3 = {"Album Title", " Artist Name ", 5.50, 2,{"Track 1", "Track 2"},{6,11,2015}};
  Item a[3] = {item1, item2, item3};

  double cost = fillCart(a, 3);
  cout<<"Total cost: "<<cost;
  return 0;
}

double fillCart(Item a[], int size){
  double totalPrice = 0.0;
  string user;
  for(int i = 0; i < size; i++)
  {
    cout<<"Item: "<<a[i].itemName<<", by "<<a[i].creator<< " for $"<<a[i].price<<endl;
    cout << "Would you like to \"purchase\", see more \"details\", or \"pass\"?" << endl;
    cin >> user;

    if(user == "details")
    {
      printItem(a[i]);
      cout<<"Would you like to \"purchase\" or \"pass\"?" << endl;
      cin >> user;
    }
    if(user == "purchase")
    {
      totalPrice += a[i].price;
    }
  }

  return totalPrice;
}
void printItem(Item it)
{
  cout<<"Item name = "<<it.itemName<<", creator = "<<it.creator<<", price = $"<<it.price<<endl;
  cout<<"Tracklist / Chapter list = "<<endl;
  for(int i = 0; i < it.size; i++)
  {
    cout<<it.chaptersOrList[i]<<endl;
  }
  cout<<"Release date = "<<it.releaseDate.month<<"/"<<it.releaseDate.day<<"/"<<it.releaseDate.year<<endl;
}

void initializeItems(Item& it){
  string dummy;
  cout << "Enter item name: ";
  getline(cin, it.itemName);

  cout << "Enter author/artist name: ";
  getline(cin, it.creator);

  cout << "Enter price in $: ";
  cin >> it.price;

  cout << "Enter the number of chapter/tracks: ";
  cin >> it.size;
  getline(cin, dummy); //clean up \n
  cout << "Enter name(s) of the tracks or chapters: ";
  for(int i = 0; i < it.size; i++){
    cout << "Enter the next name of the track or chapter: ";
     getline(cin, it.chaptersOrList[i]);
  }

  cout << "Enter release date starting with the month, then the day, then the year: ";
  cin >> it.releaseDate.month;
  cin >> it.releaseDate.day;
  cin >> it.releaseDate.year;

}
