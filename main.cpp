#include <iostream>
#include <vector>
// I <Nguyen Duc Minh Luong> have read the instructions and agree to the rules of the exam

using namespace std;

class Item{
  public:
    string name;
    double cost;
    void Print(){
      cout << "Item " << name << "Costs " << cost << endl;
    }
};

void compute_item_cost (Item item, int n){
  cout << n << " " << item.name << " costs " << (item.cost * n) << endl;
}

void display_cart_total (vector<Item> cart){
  double total = 0;
  for (int i = 0; i < cart.size(); i++){
    total += cart.at(i).cost;
  }
  total = total + total * 10/100;
  cout << "Your cart costs: $" << total << " for 3 items (10% tax included)";
}


int main()
{
    srand(time(NULL));
    vector<Item> cart;
    string name;
    double cost;

    cout << "Enter an item name and cost: ";
    cin >> name >> cost;

    Item i1{name, cost};
    Item i2{"mouse", 13.5};
    Item i3{"toothbrush", 0.43};

    i1.Print();

    int rand_amt = (rand() % 10);
    compute_item_cost(i1, rand_amt);
    compute_item_cost(i2, rand_amt);

    cout << "Making a cart" << endl;
    cart.push_back(i1);
    cart.push_back(i2);
    cart.push_back(i3);
    display_cart_total(cart);
    return 0;

}