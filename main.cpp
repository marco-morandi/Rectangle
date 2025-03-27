#include<iostream> 
#include<cstring>

using namespace std;



#include "CRectangle.h"

void ProcessRectangle(Rectangle* r) {
	
	char msg1[1000];
	int size = strlen("scherzone");
	memcpy(msg1,"scherzone",size); 
	msg1[size]='\0';
	
	cout << endl;
	cout << "######## Process ###########" << endl;
	
	float w = r->GetWidth(); 
	float h = r->GetHeight();	
		
	r->SetWidth(h); 
	r->SetHeight(w);
	

	r->SetText(msg1);
	
	
	r->Dump(); 
	cout << "######### ######### ##########" << endl;
	
}



/* void ProcessRectangle(Rectangle r) {
	
	char msg1[1000];
	int size = strlen("scherzone");
	memcpy(msg1,"scherzone",size); 
	msg1[size]='\0';
	
	cout << endl;
	cout << "######## Process ###########" << endl;
	
	float w = r.GetWidth(); 
	float h = r.GetHeight();	
		
	r.SetWidth(h); 
	r.SetHeight(w);
	

	r.SetText(msg1);
	
	
	r.Dump(); 
	cout << "######### ######### ##########" << endl;
}
*/


int main() {

	Rectangle rectA(10,5);
	
	
	char msg1[1000];
	int size = strlen("prova");
	memcpy(msg1,"prova",size); 
	msg1[size]='\0';

	rectA.SetText(msg1);
	Rectangle rectB=rectA;
	
	
	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump(); 
	cout << "****** ********* ******" << endl;
	cout << "****** rectangle B dump ******" << endl;
	rectB.Dump(); 
	cout << "****** ********* ******" << endl;
	
	

	
	ProcessRectangle(&rectA); 
	
	cout << endl;
	cout << "****** rectangle A dump ******" << endl;
	rectA.Dump();
	cout << "****** ********* ******" << endl;
	
	return 0;

}