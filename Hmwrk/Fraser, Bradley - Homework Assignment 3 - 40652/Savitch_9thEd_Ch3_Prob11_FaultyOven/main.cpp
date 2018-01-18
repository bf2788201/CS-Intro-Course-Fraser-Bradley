/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on January 2, 2018, 1:20 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
using namespace std;


int main(){
 cout << "Input 3 digits" << endl;
 int a,b,c;
 cout << "1st" << endl;
 cin >> a;
cout << "2nd" << endl;
 cin >> b;
 cout << "3rd" << endl;
 cin >> c;
 //create duplicates of each
 int a_1=a;
 a_1*=100;
 int a_2=a_1;
	int b_1=b;
	b_1*=10;
	int b_2=b_1;
	int c_1=c;
	int c_2=c;
	//c is left alone;
	int temp = a_1+b_1+c_1;
	
	if(temp>999 || temp<0) {//etc
		cout << "input valid temp" << endl;
		cout << "Input 3 digits" << endl;
  int a,b,c;
  cout << "1st" << endl;
  cin >> a;
  cout << "2nd" << endl;
  cin >> b;
  cout << "3rd" << endl;
  cin >> c;
  int temp = a_1+b_1+c_1;
	}
	//do three inputs for each variable
while(true){	
	if( ((a_1>=100 && a_1<200) || (a_1>=400 && a_1<500) || (a_1>=700 && a_1<800)) ||
	  ((a_2>=100 && a_2<200) || (a_2>=400 && a_2<500) || (a_2>=700 && a_2<800))){ //etc
		a_1++;
		a_2--;
		b_1=0;
		c_1=0;
		b_2=99;
		c_2=0;
	}
	else if(((b_1>=10 && b_1<20) || (b_1>=40 && b_1<50) || (b_1>=70 && b_1<80)) || 
	     ((b_2>=10 && b_2<20) || (b_2>=40 && b_2<50) || (b_2>=70 && b_2<80))){ //etc
		b_1++;
		b_2--;
	}
	else if(c_1==1 || c_1==4 || c_1==7 ){ //etc
		c_1++;
		c_2--;
	}
 else {
  break;
  }
}
int temp2 = a_1+b_1+c_1;
if(temp ==temp2) {
 cout << "Inputting " << temp << " degrees " <<endl;
 }
else { 
	cout<< " Max Degrees " << (a_1+b_1+c_1) << " Min Degrees " <<(a_2+b_2+c_2) << endl;
	}
	return 0;
}
