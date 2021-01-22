#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void marks(string id,int count=0){
	
        cout <<"\t\t #"<<"STUDENT ID : "<<id;
        
 
	
}

int main(int argc, char** argv) {
	int max = 3;
	char ans[max] ={0};
	char stdans[max]={0};
	int count=0;
	int a = 0;
	string id;
	//header
	cout<<"\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 TRUE-FALSE TEST CHECKER \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n";
	//end header
	//taking ID as inputs
	cout<<"\t # ENTER STUENT ID : ";
	cin>>id;
	//receiving answers as inputs
	cout << "\t # INPUT ANSWERS (30 inputs) AND PRESS THE [ENTER KEY]: ";
	cout<<"\n";
	//saving users inputs in array
	for(int i = 0; i <= max ; i++){
		cout<<"\t"<<i<<".";cin>>ans[i];
	}
     system("cls");
     	//header
	cout<<"\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 TRUE-FALSE TEST CHECKER \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n";
	//end header
	//receiving students answers as inputs
	cout << "\t # INPUT STUDENT'S ANSWERS(30 inputs) AND PRESS THE [ENTER KEY]: ";
	cout<<"\n";
//saving student answers to array
	for(int a= 0; a <= max ; a++){
		
		cout<<"\t"<<a<<".";cin>>stdans[a];
	}
	
	system("cls");
//header
	cout<<"\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 TRUE-FALSE TEST CHECKER \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n";
	//end header
//list members of  the first array
	cout << "\t\t CORRECT ANSWERS : ";
	for(int i = 0;i<=max;i++){
		cout<< ans[i] << ",";
	}
	
	cout<<"\n";
	//list elements of the second array
	cout <<"\t\t YOUR INPUTS : ";
	for(int a = 0;a<=max;a++){
		cout <<stdans[a]<< ",";
	}
	cout<<"\n";
	
	//compare  indexeses of the two arrays
for(int i=0;i<=max;++i)
{

        if (ans[i] == stdans[a])
        {
         count = count + 1;
         
        }

}
 	
//print marks
 marks(id,count);cout<<" | "<<count <<"[Marks]" ;
 cout<<"\n";
	system("pause");
	return 0;
}     
