#include <iostream>
#include<string.h>
using namespace std;
class passengers {
    public:
        string customer_name; 
        int seat_no;
        int ticket_id;
        string train_name;
        string date;
        string dep_time;
        string status;
        int info;
        void getData();
        void showData();
};
void passengers::getData(){
    cout<<"ticket id: "<<endl;
    cin>>ticket_id;
    cout<<"customer name: "<<endl;
    cin>>customer_name;
    cout<<"train_name: "<<endl;
    cin>>train_name;
    cout<<"seat number: "<<endl;
    cin>>seat_no;
    cout<<"date of departure: "<<endl; 
    cin>>date;
    cout<<"time of departure: "<<endl;
    cin>>dep_time;
    cout<<"confirmation status: "<<endl;
    cin>>status;
}
void passengers::showData(){
    cout<<ticket_id<<endl;
    cout<<customer_name<<endl;
    cout<<train_name<<endl;
    cout<<seat_no<<endl;
    cout<<date<<endl;
    cout<<dep_time<<endl;
    cout<<status<<endl;
}
int main () {
    passengers p1,p2,p3;
    cout<<"give data of p1"<<endl;
    p1.getData();
    cout<<"give data of p2"<<endl;
    p2.getData();
    cout<<"give data of p3"<<endl;
    p3.getData();
    int tikid;
    cout<<"give data of ticket_id to see data"<<endl;
    cin>>tikid;
    if(tikid==p1.ticket_id){
        p1.showData();
    }
    else if(tikid==p2.ticket_id){
        p2.showData();
    }
    else if(tikid==p3.ticket_id){
        p3.showData();
    }
    return 0;
}