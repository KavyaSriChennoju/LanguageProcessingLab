#include <bits/stdc++.h>

using namespace std;
char inp[1052];
char* next;

bool term_token(char token){
	if (*next != '\0')
		return *next++ == token;
		else 
			return false;
}
bool p();
bool p1(){
	return term_token('a') && term_token('a') && term_token('a') && p() && term_token('a') && term_token('a') && term_token('a') ;
	
}

bool p2(){
	return term_token('a') && p() && term_token('a');
}

bool p3(){
	return term_token('a') && term_token('a');
}

bool p(){
	char *save_pointer = next;
	char *save_pointer2 = next;
	return p1() or (next = save_pointer, p2()) or (next = save_pointer2, p3());
}

int main(){
	int b=1;
	
		cout << "enter Input the string for last one";
		string st;cin>>st;
		strcpy(inp,st.c_str());
		next = &inp[0];
		if(p() && *next == '\0'){
			cout<<"accepted\n";
		}
		else
		{
			cout<<"not accepted"<<endl;
		}
		
	
	return 0;
	
}
