#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
int main(){
	
	int umur, pendapatan;
	string kerja, sekolah;
	
	cout<<"inputkan umur anda"<<endl;
	cin>>umur;
	
	if(umur>=18){
		cout<<"status bekerja (Y/T)"<<endl;
		cin>>kerja;
		
		if(kerja=='Y'){
		cout<<"inputkan pendapatan anda"<<endl;
		cin>>pendapatan;
		 
		    if(pendapatan>=500000){
		    	cout<<"anda termasuk penduduk mampu"<<endl;
			}
			else{
				cout<<"anda termasuk penduduk kurang mampu"<<endl;
			}
		}
		else{
		cout<<"anda termasuk penduduk kurang mampu"<<endl;
		}
	}
	else{
		cout<<"status bersekolah (Y/T)"<<endl;
		cin>>sekolah;
		
		if(sekolah=='Y'){
		cout<<"anda termasuk penduduk mampu"<<endl;
		}
		else{
		cout<<"anda termasuk penduduk kurang mampu"<<endl;
		}
	}
	
	return 0;
}
