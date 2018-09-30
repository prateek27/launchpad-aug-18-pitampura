#include<iostream>
#include<cstring>
using namespace std;

class Car{

public:
	char *model;
	int price;

	Car(int p,char m[]){
		int len = strlen(m);
		model = new char(len+1);
		strcpy(model,m);
		price = p;
	}
	Car(Car &X){
		//Deep Copy
		model = new char[strlen(X.model)+1];
		strcpy(model,X.model);
		price = X.price;
	}

	void print(){
		cout<<model<<" Price "<<price<<endl;
	}
	~Car(){
		cout<<"Deleting .."<<model<<endl;
		if(model!=NULL){
			delete [] model;
		}
	}

};

int main(){

	Car A(100,"BMW");
	Car B(A);
	B.model[1] ='*';
	B.price = 200;

	A.print();
	B.print();

	Car* dyCar= new Car(300,"DC");
	(*dyCar).print();
	dyCar->print();

	delete dyCar;

	return 0;

}