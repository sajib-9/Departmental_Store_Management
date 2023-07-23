#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int b[100],c[100],n=5,i,sum=0,mn;
    b[1]=100;c[1]=10;
    b[2]=100;c[2]=15;
    b[3]=200;c[3]=50;
    b[4]=250;c[4]=41;
    b[5]=150;c[5]=15;


    cout<<"\nENTER YOUR CHOICE:\n";
    cout<<"\n1. Show all stored items:";
    cout<<"\n2. Add an old item:";
    cout<<"\n3. Add a new item:";
    cout<<"\n4. Sell an item:";
    cout<<"\n5.  Quit"<<endl;
    cin>>mn;
    system("cls");
    if(mn==2)
    {

        while(1)    //old
        {
            int k,l,o,p,sum,z;
           cout<<"Enter Code"<<endl;
           cin>>k;
           cout<<"Enter quantity"<<endl;
           cin>>l;
           cout<<"Enter price"<<endl;
            cin>>p;
            b[k]=b[k]+l,c[k]=p;
            cout<<"IF YOUR RESTORING IS COMPLETE PRESS -1 ###### OTHERWISE PRESS 0"<<endl;
            cin>>z;
            if(z==-1)
            {
                break;
            }
            else
                continue;
        }
        cout<<"\nENTER YOUR CHOICE:\n";
    cout<<"\n1. Show all stored items:";
    cout<<"\n2. Add an old item:";
    cout<<"\n3. Add a new item:";
    cout<<"\n4. Sell an item:";
    cout<<"\n5.  Quit"<<endl;
    cin>>mn;
     system("cls");
    }

    if(mn==3)
    {
        int need;
        cout<<"HOW MANY CODE?"<<endl;
        cin>>need;
        n=need+n;

          cout<<"Enter"<<endl;
        for(int k=6; k<6+need; k++) // new
        {
            cin>>b[k]>>c[k];
        }
        cout<<"\nENTER YOUR CHOICE:\n";
    cout<<"\n1. Show all stored items:";
    cout<<"\n2. Add an old item:";
    cout<<"\n3. Add a new item:";
    cout<<"\n4. Sell an item:";
    cout<<"\n5.  Quit"<<endl;
    cin>>mn;
     system("cls");
    }

    if(mn==4)
    {


        while(1) //sell
        {
            int k1,l1,z1;
            cout<<"ENTER CODE NO"<<endl;
            cin>>k1;
            cout<<"HOW MUCH DO YOU WANT TO SELL?";
            cin>>l1;
            b[k1]=b[k1]-l1;
            sum=sum+(l1*c[k1]);
            cout<<"IF YOUR SELLING IS COMPLETE PRESS -1 ###### OTHERWISE PRESS 0"<<endl;
            cin>>z1;

            if(z1==-1)
            {

                cout<<"Total Sell: "<<sum;
                break;
            }
            else
                continue;


        }
             cout<<"\nENTER YOUR CHOICE:\n";
    cout<<"\n1. Show all stored items:";
    cout<<"\n2. Add an old item:";
    cout<<"\n3. Add a new item:";
    cout<<"\n4. Sell an item:";
    cout<<"\n5.  Quit"<<endl;
    cin>>mn;
     system("cls");


    }

    if(mn==1)
    {

        for(int i=1; i<=n; i++)
        {
            cout<<"Code : "<<i<<endl<<"Quantity : "<<b[i]<<endl<<"price (per unit): "<<c[i]<<endl;
        }
      cout<<"RESTART FOR PRESS 1"<<endl;
      cout<<"EXIT FOR PRESS 0"<<endl;
    cin>>mn;
    if(mn==1)
    {
        main();
    }
     system("cls");
    }



}
