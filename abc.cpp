#include<iostream>
using namespace std;

class locate{
    long long int isbn[5]={3463580853574,4569763594168,8974649449553,9878456324175,2356741598246};
    string book [5]={"Mein Kamph","Romeo and Juliet","Illiad","The Great Gatsby","Principia"};
    string author[5]={"Adolf Hitler","William Shakespeare","Homer","F. Scott Fitzgerald","Isaac Newton"};
    long long int isbn_no;

    public:
        void get(){
            cout<<"enter the ISBN number of the book that you want : "<<endl;
            cin>>isbn_no;
            cout<<endl;
        }
        void locates(){
            int n=0;
            for(int i=0;i<5;i++){
                if(isbn_no==isbn[i]){
                    n=1;
                    cout<<"Your Book : "<<book[i]<<endl;
                    cout<<"Author : "<<author[i]<<endl;

                    break;
                    
                    
                }
                
                
            }
            if(n==0){
                    cout<<"BOOK NOT FOUND ERROR 404 NOT FOUND"<<endl;
                }
        }
};
int main(){
    locate l1;
    l1.get();
    l1.locates();
    cout<<"Kartik Vashisht 2310997141"<<endl;

    return 0;
}
