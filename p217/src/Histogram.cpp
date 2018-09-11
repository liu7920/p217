#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;
#include "Histogram.h"

Histogram::Histogram() {
	// TODO Auto-generated constructor stub
	this->num = 0;
	this->str = "The Dallas cop who shot and killed her neighbor after entering his apartment tearfully said she made a mistake when she entered his home, which was a floor above her own, she said during an emergency call. Paramedics desperately tried to save 26-year-old Botham Jean after he was shot by Officer Amber Guyger, who appeared to be in distress in video taken at the scene.";
}

void Histogram::lower(){

	cout << this->str << endl;

	for(int i=0; i<this->str.length(); i++){
		if(this->str[i]>='A' && this->str[i]<='Z'){
			str[i]=tolower(str[i]);
		}
	}
	cout << this->str << endl;
}

void Histogram::print(){

	int len=0;
	char alpha;

	for(int i=0;i<this->str.length();i++){
		if(this->str[i]>='A'&&this->str[i]<='Z' || this->str[i]>='a'&&this->str[i]<='z'){
			len++;
		}
	}
	cout << "총 알파세 수 " << len << endl;

	for(int o=0; o<26; o++){
		this->num=0;
		for(int i=0; i<this->str.length(); i++){
			if('a'+o == this->str[i]){
				this->num++;
			}
		}
		alpha = 'a'+o;
		cout << '(' << alpha << ")	: ";
		for(int p=0; p<this->num; p++){
			cout << '*';
		}
		cout << endl;
	}

}
