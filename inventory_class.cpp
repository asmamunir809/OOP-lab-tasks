// Week 4 - Experiment 3
// Inventory Class

#include<iostream>
using namespace std;

class Inventory {
private:
    int itemNumber, quantity;
    double cost, totalCost;
public:
    Inventory() { itemNumber = 0; quantity = 0; cost = 0; totalCost = 0; }
    Inventory(int item, double c, int qty) {
        if(item < 0 || qty < 0 || c < 0) { cout << "Invalid input!" << endl; return; }
        itemNumber = item; cost = c; quantity = qty; setTotalCost();
    }

    void setItemNumber(int i) { if(i >= 0) itemNumber = i; }
    void setQuantity(int q) { if(q >= 0) quantity = q; }
    void setCost(double c) { if(c >= 0) cost = c; }
    void setTotalCost() { totalCost = quantity * cost; }

    int getItemNumber() { return itemNumber; }
    int getQuantity() { return quantity; }
    double getCost() { return cost; }
    double getTotalCost() { return totalCost; }

    void display() {
        cout << "Item#: " << itemNumber << " | Qty: " << quantity
             << " | Cost: $" << cost << " | Total: $" << totalCost << endl;
    }
};

int main() {
    Inventory inv(1001, 25.50, 10);
    inv.display();
    return 0;
}
