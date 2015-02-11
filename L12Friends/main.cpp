#include <iostream>

using namespace std;

class Book{
	friend class Fiction;
private:
	int price;
public:
	Book(){

	}
	Book(int price){
		this->price = price;
	}
	int getPrice(){
		return price;
	}
	void printPrice(){
		cout << "Book Price: " << this->price << endl;
	}

};

class Fiction :Book{
public:
	Fiction(int price){
		this->price = price;
	}
	void printPrice(){
		cout << "Fiction Price: " << price << endl;
	}
};

int main(){
	Fiction f(40);
	f.printPrice();

	return 0;
}