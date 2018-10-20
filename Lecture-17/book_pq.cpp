#include<iostream>
#include<queue>
#include<functional>
#include<vector>
#include<cstring>
using namespace std;

class Book{
    public:
    int price;
    char name[20];

    Book(int p,char *n){
        price = p;
        strcpy(name,n);
    }
};

class BookComparison{
public:
    bool operator()(Book a,Book b){
        return a.price>b.price;
    }

};


int main(){
    //priority_queue<int> pq_maxheap;
    priority_queue<Book,vector<Book>,BookComparison > pq;
    Book b1(100,"C++");
    Book b2(200,"Java");
    Book b3(150,"Python");

    pq.push(b1);
    pq.push(b2);
    pq.push(b3);


    while(!pq.empty()){
        Book b = pq.top();
        cout<<"Name : "<< b.name<<endl;
        cout<<"Price : "<<b.price<<endl;

        pq.pop();
    }
return 0;
}

