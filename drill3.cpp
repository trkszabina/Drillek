#include "std_lib_facilities.h"

int main()
{
	int age;
    char friend_sex=0;
    string first_name, friend_name, simple_error=("You are kidding!");
    cout<<"Enter the name of the person you want to write to: ";
    cin>>first_name;
    cout<<"Enter the name of the friend: ";
    cin>>friend_name;
    cout<<"Enter the sex of the friend! (m/f) ";
    cin>>friend_sex;
    cout<<"Enter the age of the friend: ";
    cin>>age;
    cout<<endl;
    cout<<"Dear "<<first_name<<"!"<<endl<<endl;
    cout<<"How are you? How's it going back home? Not gonna lie, I miss my beloved hometown so much. I miss being around my friends and family. Have you seen "<<friend_name<<" lately? ";
    if(friend_sex=='m')
    {
        cout<<"If you see "<<friend_name<<" please ask him to call me.";
    }
    else
    {
        cout<<"If you see "<<friend_name<<" please ask her to call me.";
    }
    cout<<"I hear you just had a birthday and you are "<<age<<" years old. ";
    if(age<1 or age>110)
        cout<<simple_error;
    if(age<12 and age>0)
        cout<<"Next year tou will be "<<age+1;
    if(age==17)
        cout<<"Next year you will be able to vote. ";
    if(age>70)
        cout<<"I hope you are enjoying retirement. ";
    cout<<endl<<endl;
    cout<<"Yours sincerely, Szabina!\n"<<endl;
    return 0;
}