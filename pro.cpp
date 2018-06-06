#include <iostream>
#include <fstream>
using namespace std;
void insert (){
	char cont='y';
	string product; int price ; int exp ; int amount ; string company;
	string e_product ; int e_price ; int e_exp ; int e_amount ; string e_company;
    ofstream project ("project-file.txt", ios::app) ;
    ifstream project1 ("project-file.txt") ;

 
 cout<<"enter the new product"<<endl;
 cout <<"product_price_expiry period_amount_company"<<endl;
 while (cont=='y'||cont=='Y'){
 
 cin >> product >> price >> exp >>amount >> company ;
 project<<product<<" "<<price<<" "<<exp<<" "<<amount<<" "<<company<<endl;
 cout<<"want to insert again ? Y/N"<<endl;
 cin>>cont;
}
}
void search ( string product_search){
	

		string product;
		int price ;
		int exp ;
		 int amount ;
		 string company ;
		ifstream project("project-file.txt");
        while (project>>product>>price>>exp>>amount>>company){
        	if (product.compare(product_search)==0)
        	{
        		cout<<product<<" "<<price<<" "<<exp<<" "<<amount<<" "<<company<<endl;
        		
			}
        	
		}
	}void search_price ( int S_price){
	

		string product;
		int price ;
		int exp ;
		 int amount ;
		 string company ;
		ifstream project("project-file.txt");
        while (project>>product>>price>>exp>>amount>>company){
        	int flag=0;
        	if (price<S_price)
        	{
        		cout<<product<<" "<<price<<" "<<exp<<" "<<amount<<" "<<company<<endl;
        		
			}
        	
		}
	}
		void display ()
	{
		int i;
   		string product; int price ; int exp ; int amount ; string company;
		ifstream project ("project-file.txt");
		while(project >> product >> price >> exp >> amount >> company)
		{
			cout<<product<<" "<<price<<" "<<exp<<" "<<amount<<" "<<company<<endl;
		}

	}
	void delete_1 (string product_delete){
		string product; int price ; int exp ; int amount ; string company;
		ifstream project("project-file.txt");
		ofstream project1("project1.txt" , ios::app);
		while(project >> product >> price >> exp >> amount >> company)
		{
			
			if(product.compare(product_delete)==0){}
			else{
			     project1 <<  product <<" " <<price <<" " <<exp<<" "<<amount<<" "<<company<<"\n" ;

			}
		}
		project.close();
   		project1.close();
		remove("project-file.txt");
		rename("project1.txt","project-file.txt");
		

	}
void update (string U_product , int U_price , int U_exp , int U_amount , string U_company){
    string product; int price ; int exp ; int amount ; string company;
    ifstream project ("project-file.txt") ;
    ofstream project1 ("project1.txt", ios::app) ;
    while (project >> product >> price >> exp>>amount>>company){
        
        if (product.compare(U_product) == 0){
               project1 <<  product <<" " <<U_price <<" " <<exp<<" "<<U_amount<<" "<<company<<"\n" ;
        }else {
                project1 <<  product <<" " << price <<" " <<exp<<" "<<amount<<" "<<company<<"\n" ;
        }

    }
    	project.close();
   		project1.close();
   		
		remove("project-file.txt");
		rename("project1.txt","project-file.txt");
		
}

 void start(){
    cout<<endl;
    
	cout <<"                                        ";
 	cout<<"** vilagio super market **"<<endl;
 	cout <<"                                  ";
 	cout<<"*******************************************"<<endl;
 	cout<<"enter your desired number"<<endl;
 	cout<<"1-insert";
 	cout<<"              ";
 	cout<<"2-display"<<endl;
 	cout<<"3-search";
 	cout<<"              ";
 	cout<<"4-delete"<<endl;
  	cout<<"5-update";
 	cout<<"              ";
 	cout<<"6-display by price"<<endl;
 	char check='y';
 	int price , amount , exp;
 	string product , company ;
 	int flag;
 	cin>>flag;
 	while (check=='y'||check=='Y')
 	{
 		switch (flag){
 			int i;
 			case 1 :insert () ; break;
 			case 2 :display () ; break;
 			case 3 : cout <<"enter product :"<<endl; cin>>product; search(product) ; break;
 			case 4 : cout <<"enter product :"<<endl; cin>>product; delete_1(product) ; break;
 			case 5 : cout <<"enter product / price  / amount  "<<endl; 
 				cin >> product >> price>>amount ;  
			 	update(product , price , exp , amount , company) ;
			 	break;
			case 6 : cout<<"ENter price" ; cin>>i; search_price(i) ; break ;
 			default : cout <<"enter a number from 1 to 5"<<endl;

		 }
		
		if (check=='y'||check=='Y')
		{
  		    cout <<"                                        ";
          	cout<<"**vilagio super market**"<<endl;
 	        cout <<"                                  ";
           	cout<<"*******************************************"<<endl;
           	cout<<"1-insert";
           	cout<<"              ";
          	cout<<"2-display"<<endl;
           	cout<<"3-search";
          	cout<<"              ";
 	        cout<<"4-delete"<<endl;
 	        cout<<"5-update";
 	        cout<<"              ";
 	        cout<<"6-display by price"<<endl;
 	        cin>>flag;
		}
	 }
 }

int main(){

        start();
        cout<<"project made by [nouran || hager || nafisa || yasmeen || hadeer]"<<endl;
   		cout <<"under the supervision of eng/amgad && doctor/hamdy mousa"<<endl;
    }
