#include<iostream>
#include<cstring>
using namespace std;


//Template 
class Car{
private:
	int price;

public:
	char model[10];
	int max_speed;

	Car(){
		price = 100;
		max_speed = 50;
	}
	//Parametrised Constructor
	Car(int p,int s){
		price = p;
		max_speed = s;
	}
	Car(int p,int s,char *m){
		price = p;
		max_speed = s;
		strcpy(model,m);

	}
	//Copy Constructor
	Car(Car &X){
		cout<<"In Copy Constructor";
		price  = X.price;
		max_speed = X.max_speed;
		strcpy(model,X.model);
	}
	//Copy Assignment Operator
	void operator=(Car &X){
		cout<<"In Copy Assignment Fn";
		price  = X.price;
		max_speed = X.max_speed;
		strcpy(model,X.model);

	}
	//Member Functions(operate on data members of the class)
	void print(){
		cout<<model<<endl;
		cout<<price<<endl;
		cout<<max_speed<<endl<<endl;
	}
	//Getters and Setters
	int getPrice(){
		return price;
	}

	void operator()(string s){
		cout<<"This is "<<s<<" car";
	}
	void operator()(Car &X){
		cout<<"In () function";
		price  = X.price;
		max_speed = X.max_speed;
		strcpy(model,X.model);
	}
	void operator!(){
		cout<<model<<" isnt available";
	}
	void operator+(){
		cout<<model<<"is a + car";
	}
	void operator+(Car &X){
		int len = strlen(model);
		strcpy(model+len,X.model);

	}
	void set_price(int new_price){
		if(new_price>100){
			price = new_price;
		}
		else{
			price = 100;
		}
	}
	~Car(){
		//Destroy the memory
		cout<<"Destroying Car"<<model<<endl;
	}
};

ostream& operator<<(ostream &a, Car &x){
	x.print();
	return a;
}
istream& operator>>(istream &b,Car &x){
	cin>>x.model;
	int p;
	cin>>p;
	x.set_price(p);
	b>>x.max_speed;
	return b;

}

int main(){
	/*
	Car x(100,200);//Car
	
	cin>> x.model;

	x.print();
	x.set_price(120);
	cout<<x.getPrice();
	x.print();

	Car cars[5];
	
	for(int i=0;i<3;i++){
		cin>>cars[i].model;
		//cars[i].max_speed = 100;
		//cars[i].price = 120;
	}

	//Print
	for(int i=0;i<3;i++){
		cars[i].print();
	}
	
	char a[100] = "MyCar";
	Car y(100,200,a);
	y.set_price(250);
	y.print();

	Car z(y); //Copy Constructor
	z.model[3] = 'Z';
	z.set_price(450);
	cout<<z;

	Car z2 = z; //Copy Constructor
	cout<<z2;


	Car z3;//Default Constructor - 1
	//z3 = y; //Copy Assignment Operator
	//z3("Uber");

	z3(z);
	z3.print();
	!z3;
	+z3;
	
	cout<<endl;

	Car A(10,20,"Maruti");
	Car B(30,40,"Suzuki");
	A+B;
	cout<<A.model<<endl;
	cout<<B.model<<endl;

	*/
	Car M,N;
	cin>>M>>N; //Cascading of Operators
	cout<<M<<N;
	+M;









	return 0;
}