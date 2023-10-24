#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int i,n,j;
	cout<<"donner la valeur de n : ";
	cin>>n; 
	cout<< "   "<<"I"<<setw(n);
	for(i=1;i<=10;i++){
		cout<<i<<setw(n);
	}
	cout<<endl;
	for(i=0;i<n*2.75;i++){
	   cout<<"----";
	}
	cout<<endl;
	for(i=1;i<=10;i++){
		if(i==10)
		cout<<i<<setw(n-2)<<"I";
		else
		cout<<i<<setw(n-1)<<"I";
		
     	for(j=1;j<11;j++){
		cout<<setw(n)<<i*j;
}
    cout<<endl;
}
	return 0 ;
}
