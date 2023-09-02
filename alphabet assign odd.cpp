#include<iostream>
using namespace std;
 int main(){
 	int happ[26]={-1};
 	int i=0;
 	int j=1;
 	while(i<=26){
 		happ[i]=j;
 		j=j+2;
 		i++;
	 }
	 for(int i=0;i<26;i++){
	 	cout<<happ[i]<<endl;
	 }
	// string str="FANCY";
	 
 }
