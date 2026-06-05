// Week 10 - Experiment 3
// Stock Class - Pointer to Array

#include<iostream>
#include<string>
using namespace std;

class Stock {
private:
    int productId;
    char productName[30];
    int productQuantity;
    float price;
public:
    Stock() { productId=0; productQuantity=0; price=0; strcpy(productName,""); }
    ~Stock() {}

    void setProductId(int id) { productId = id; }
    void setProductName(const char* n) { strcpy(productName, n); }
    void setQuantity(int q) { productQuantity = q; }
    void setPrice(float p) { price = p; }
    int getProductId() { return productId; }
    char* getProductName() { return productName; }
    int getQuantity() { return productQuantity; }
    float getPrice() { return price; }

    void addProduct() {
        cout << "Product ID: "; cin >> productId;
        cout << "Product Name: "; cin >> productName;
        cout << "Quantity: "; cin >> productQuantity;
        cout << "Price: "; cin >> price;
    }
    void showProduct() {
        cout << "ID: " << productId << " | Name: " << productName
             << " | Qty: " << productQuantity << " | Price: $" << price << endl;
    }
    void showProducts(Stock s[], int size) {
        for(int i=0; i<size; i++) s[i].showProduct();
    }
    void searchProduct(Stock s[], int size) {
        int choice; cout << "1.By Name  2.By ID: "; cin >> choice;
        if(choice == 1) {
            char name[30]; cout << "Name: "; cin >> name;
            for(int i=0;i<size;i++) if(strcmp(s[i].productName, name)==0) { cout<<"Found: "; s[i].showProduct(); return; }
        } else {
            int id; cout << "ID: "; cin >> id;
            for(int i=0;i<size;i++) if(s[i].productId==id) { cout<<"Found: "; s[i].showProduct(); return; }
        }
        cout << "Product not found." << endl;
    }
};

int main() {
    Stock inventory[5];
    Stock *ptr = &inventory[0];

    for(int i=0; i<5; i++) { cout << "Product " << i+1 << ":\n"; (ptr+i)->addProduct(); }

    int choice;
    do {
        cout << "\n1.Show All  2.Search  3.Exit: "; cin >> choice;
        if(choice==1) for(int i=0;i<5;i++) (ptr+i)->showProduct();
        else if(choice==2) ptr->searchProduct(inventory, 5);
    } while(choice != 3);
    return 0;
}
