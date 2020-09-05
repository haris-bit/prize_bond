#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	string filename = "prize.txt";
	ifstream ifile;
	ifile.open(filename.c_str());
	int num = 0;
	int prize = 0;
	
	cout<<"What is your prize bond number?"<<endl;
	cin>>prize;
	
	while(ifile.good())
	{
		ifile>>num;  
		if(prize==num)
		{
			cout<<"Congrats, Your bond matches!"<<endl;
			cout<<"Bond Number is "<<num;
			break;
		}
	
	num++;
	
	}
	if(prize!=num)
	{
	cout<<"Sorry! Your Number does not match."<<endl;
	}
	
	ifile.close();
	
	
	return 0;
}
