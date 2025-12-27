//NAME: MUHAMMAD FAIRUZ BIN HERMAN
//MATRICS NUMBER : A25CS0267
//DATE : 19/12/2025

#include <iostream>
using namespace std;

void dispStatus(int );
void getInput(int &, int &, int &, int &);
void dispOutput(int);
double calcAverage(int, int);

int main(){
	char state[25];
	 	char r;
	 	int totalcases,newcases,totaldeath,totalrecovered,activecases;
		int states=0,totalactive=0;
		int highest=0;
		string higheststates;
		
	 do {
	 	
	 	
	 	cout<<"<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>>"<<endl;
	 	cout<<"State name	: ";
	 	cin.ignore();
	 	cin.getline(state,50);
	 	getInput(totalcases,newcases,totaldeath,totalrecovered);
	 	activecases=totalcases+newcases-totaldeath-totalrecovered;
	 	if (activecases>highest){
	 		highest=activecases;
	 		higheststates=state;
		 }
	 	dispOutput(activecases);
	 	states= states+1;
	 	totalactive=totalactive+activecases;
	 	cout<<"Press <ENTER> to continue...";
	 	cin.ignore();
	 	cin.get(r);
	 	cout<<" "<<endl;
	 	
	 	
	 }while(r=='\n');
	double average=calcAverage(states,totalactive);
	cout<<"<<<<<<<<<<<<<< ACTIVE CASES >>>>>>>>>>>>>>"<<endl;
	cout<<"Total 	: "<<totalactive<<endl;
	cout<<"Highest: "<<highest<<" ( "<< higheststates <<" )"<<endl;
	cout<<"Average for "<<states<< " states: "<<average;
	

	return 0;
}

void getInput(int &tcase, int &ncase, int &tdeath, int &trecov){
	
	cout <<"Total cases	: ";
	cin >>tcase;
	cout <<"New cases	: ";
	cin>>ncase;
	cout <<"Total death	: ";
	cin>>tdeath;
	cout <<"Total recovered	: ";
	cin>>trecov;
	cout <<" "<<endl;
	
}

void dispStatus(int acases){
	
	
	if (acases >40 ){
		cout <<"Status	: Red zone"<<endl;
	}
	else if(21<=acases && acases<=40){
		cout<<"Status	: Orange zone"<<endl;
	}
	else if(1<=acases && acases<=20){
		cout <<"Status	: Yellow zone"<<endl;
	}
	else if (acases<=0){
		cout<<"Status	: Green zone"<<endl;
	}
	cout <<" "<<endl;
}

void dispOutput(int acases){
	cout << "<<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>>>>"<<endl;
	cout << "Active cases	: "<<acases<<endl;
	dispStatus(acases);
}

double calcAverage(int states, int tcases){
	double average;
	average = tcases/states;
	return average;
	
}

