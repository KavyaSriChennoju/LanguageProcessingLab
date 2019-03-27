#include <bits/stdc++.h>

using namespace std;
char in[1052];
char* next;

bool check(char t){
	if (*next != '\0')
		return *next++ == t;
		else 
			return false;
}
bool p();
bool p1(){
	if( check('a') && check('a') && check('a')&& p() && check('a') && check('a') && check('a')) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool p2(){
	if(check('a') && check('a'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*bool p3(){
	return term_token('a') && term_token('a');
}
*/
bool p(){
	char *save_pointer = next;

	return (p1() or (next = save_pointer, p2()) );
}

int main(){
	int b=1;
	
		cout << "enter Input the string for first one";
		string st;cin>>st;
		strcpy(in,st.c_str());
		next = &in[0];
		if(p() && *next == '\0'){
			cout<<"accepted\n";
		}
		else
		{
			cout<<"not accepted"<<endl;
		}
		
	
	return 0;
	
}
