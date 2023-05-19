#include <bits/stdc++.h>
using namespace std;
#define ll long long

//////////////////////Program to find middle character of a palindrome formed list
char findmiddlechar(vector<char> &v){
	int n = v.size();
	map<char,int> m; //map to store frequency of char
	for(int i=0;i<n;i++){
		m[v[i]]++; //////////////////we are storing frequency of each character in the input vector
	}
	for(int i=0;i<26;i++){
		if(m[v[i]]%2!=0) return v[i]; //here if we find frequency of a character odd no it means it has to be in middle else palindrome won't be possible
	}
	return 'a';
}
////////program to print two lists one containing only elements which had duplicates and one containing elements that did not have duplicates.
void printlist(vector<int> &v){
	int n = v.size();
	vector<int> a;//list that contains only elements which had duplicates
	vector<int> b;//list that contains only elements that did not have duplicates.
	map<char,int> m; //map to store frequency of elements.
	for(int i=0;i<n;i++){
        m[v[i]]++;  
	}
	for(int i=0;i<n;i++){
        if(m[v[i]]>1) {
			a.push_back(v[i]);//if frequency of v[i]>1 we push in vector a
			m[v[i]]=0;
		}else if(m[v[i]]==1){
			b.push_back(v[i]);//if frequency of v[i]=1 we push in vector a
			m[v[i]]=0;
		}  
	}
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";    //to print list a
	}
	cout<<'\n';
	for(int i=0;i<b.size();i++){
		cout<<b[i]<<" ";   // to print list b
	}

}
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	vector<char> v= {'a','m','m', 'a','d'};
	vector<char> v1= {'i','i','e','d','e','r','d','r','v'};
	cout<<findmiddlechar(v)<<'\n';
	cout<<findmiddlechar(v1)<<'\n';
	vector<int> v2={1,5,1,3,7,21,25,2,5,3,21};
	printlist(v2);
}