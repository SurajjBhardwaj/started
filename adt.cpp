//ADT:- Abstract data type
#include<iostream>
using namespace std;
  
  struct Array{
  	
  	int *A;
  	int size;
  	int length;
  	
  	
  };
  
  void display(struct Array arr){
  	
  	cout<<"the numers are"<<endl;
  	
  	for(int i=0;i<arr.length;i++){
  		cout<<" "<<arr.A[i];
  		
	  }

  }


//adding element in array

void add(struct Array *arr,int num){
	
	if(arr->length<arr->size){
		
		arr->A[arr->length++]=num;
		
		
	}
	
}

void insert(struct Array *arr,int index,int num){
	
	if(index<0 && index>arr->size){
		cout<<"invalid index"<<endl;
	}
	
	else {
		
		for (int i=arr->length;i>index;i--){
			
			arr->A[i]=arr->A[i-1];
			
		}
		
		arr->A[index]=num;
		arr->length++;
	}
	
	
	
}
  
int  Delete(struct Array *arr,int index){
  	
  	int x=0;
  	int i;
  	
  	if(index>0 && index<arr->length){
  		
  		x=arr->A[index];
  		
  		for(i=index;i<arr->length;i--){
  			
  			arr->A[i]=arr->A[i+1];
		  }
  		
  		arr->length--;
  		
  		
	  }
   
  	return x;
  }
  
  
  
int main(){
	
 struct Array arr;
  int n,i;
  cout<<"enter size of an aray";
  cin>>arr.size;
  arr.A=new int [arr.size];
  arr.length=0;
	
	cout<<"enter no of numbers";
	cin>>n;
	
	if(n<arr.size)
	{
		
cout<<"enter"<<n<<" numbers"<<endl;

for(i=0;i<n;i++){
	
	cin>>arr.A[i];

arr.length=n;	
}



//adding in the list



//cout<<"enter two numbers to add"<<endl;
//int p,q;
//cin>>p>>q;
//add(&arr,p);
//add(&arr,q);
//

//insert
int a,b;
cout<<"enter the position and the value which you want to insert"<<endl;
cin>>a>>b;
insert(&arr,a,b);

cout<<"delete anything"<<endl;
int d;
cout<<"enter the position you want to delete"<<endl;
cin>>d;
Delete(&arr,d);

display(arr);



	}
	
else cout<<"invalid array"<<endl;	
	return 0;	
	
	
}
