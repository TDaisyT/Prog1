#include "../std_lib_facilities.h"

template<typename Iter1, typename Iter2>
Iter2 mycopy(Iter1 f1, Iter1 e1, Iter2 f2){ //beginning=f1, end=e1, where=f2
	for(Iter1 p=f1; p!=e1;++p){

		*f2=*p;
		f2++;	
}
			return f2;
}

//value raise
template<typename T> //needed template for different types
void raise(T& container, int value){
for(auto& i : container){
	i=i+value;
	cout << i << ' ';
					}
									}


int main(){
try{

array<int, 10> ar={0,1,2,3,4,5,6,7,8,9};
vector<int>vec={0,1,2,3,4,5,6,7,8,9};
list<int>lst={0,1,2,3,4,5,6,7,8,9};

//copy
/*
int array2[10];
for(int i=0;i<10;i++){
	array2[i]=array[i];
}*/

array<int, 10> ar2=ar;
vector<int>vec2=vec;
list<int>lst2=lst;

//value raise
cout << "The array values are: ";
raise(ar,2);
cout << endl;
cout << "The vector values are: ";
raise(vec,3);
cout << endl;
cout << "The list values are: ";
raise(lst,4);
cout << "\n\n";

//Itercopy
cout << "The copied vector values are: ";
mycopy(ar.begin(),ar.end(),vec2.begin());
for(auto i : vec){
cout << i << ' ';
}
cout << endl;

cout << "The copied array values are: ";
mycopy(lst.begin(),lst.end(),ar.begin());
for(auto i : ar){
cout << i << ' ';
}
cout << "\n\n";


//find()
int vecnum=3;
int lstnum=27;

auto vecnumpos=find(vec.begin(),vec.end(),vecnum);
	if(vecnumpos!=vec.end())
		cout << "The vector value was found at the " << distance(vec.begin(),vecnumpos) << " position.\n";
	else
		cout << "The vector value wasn't found\n";



auto lstnumpos=find(lst.begin(),lst.end(),lstnum);
	if(lstnumpos!=lst.end())
		cout << "The list value was found at the " << distance(lst.begin(),lstnumpos)<< " position.\n";
	else
		cout << "The list value wasn't found\n";



return 0;
	}
catch(exception &e){
	cout << "Exception: " << e.what() << endl;
}
catch(...){
	cout << "Error\n";
}

}