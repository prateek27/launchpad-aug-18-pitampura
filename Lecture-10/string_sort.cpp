#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string tolowerCase(string s){
	transform(s.begin(), s.end(), s.begin(),::tolower);
	return s;
}

bool compare(string a,string b){
	return tolowerCase(a)<tolowerCase(b);
}
bool lenCompare(string a,string b){
		

		if(a.length()!=b.length()){
			return a.length() < b.length();
		}
		else{
			//Equal
			return compare(a,b);
		}

}

int main(){

string s[] = {"abc","Zz","Apple","mango","Guava","banana"};

sort(s,s+6,lenCompare);

for(int i=0;i<6;i++){
	cout<<s[i]<<endl;
}

return 0;
}