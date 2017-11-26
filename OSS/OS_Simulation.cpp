#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int sum(int n1, char opt[], int n2 = 0)
{
    int sum;
    if (opt == "+")
        sum = n1 + n2;
    else if(opt == "-")
        sum = n1 - n2;
    else if(opt == "*")
        sum = n1*n2;
    else if(opt == "/")
        sum = n1/n2;
    else if(opt == "sqrt")
        sum = sqrt(n1);
    else if(opt == "square")
        sum = n1*n1;
    return sum;
}

float cal()
{
    cout<<"\n\n";
    cout<<"Enter 1st number: ";
    float n1, n2;
    cin>>n1;
    cout<<"Enter 2nd number: ";
    cin>>n2;
    float ans;
    char ch;
    cout<<"Enter operation which is needed to be performed: (ex-'+')\t";
    char op;
    cin>>op;
    switch(op)
    {
    case '+':
        ans = n1+n2;
        break;
                
    case '-':
        ans = n1-n2;
        break;
                
    case '*':
        ans = n1*n2;
        break;
                
    case '/':
        ans = n1/n2;
        break;
    }
    cout<<ans<<endl;
    cout<<"Would you like to add on to the final answer? (y/n): ";
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        do
        {
            cout<<"Enter number: ";
            int n;
            cin>>n;
            cout<<"Enter operation which is needed to be performed: (ex-'+')\t";
            char op;
            cin>>op;
            switch(op)
            {
                case '+':
                    ans+=n;
                    break;
                    
                case '-':
                    ans-=n;
                    break;
                    
                case '*':
                    ans*=n;
                    break;
                    
                case '/':
                    ans/=n;
                    break;
            }
            cout<<ans<<endl;
            cout<<"Would you like to add on to the final answer? (y/n): ";
            cin>>ch;
        }while(ch=='y'||ch=='Y');
    }
    else if(ch=='n'||ch=='N')
        cout<<"\n\n";
    return ans;
}

int main()
{
    int n1, n2, count=0;
    char name[15];//declaring array name
    cout<<"Welcome to Simple Operating System"<<endl;
    cout<<"Enter your name :\t";
    cin.getline(name, 15);//gets the string
    cout<<"Hello, "<<name<<"!!"<<endl;
    while (1>0)
    {
        int count=1, n;
        cout<<"\n\nWhat do you want me to do?"<<endl;//asks the task
        cout<<"1. Calculator"<<endl;
        cout<<"2. Update personal information"<<endl;
        cout<<"3. Text document"<<endl;
        cout<<"4. Scheduling"<<endl;
        cout<<"5. Relief"<<endl;
        cout<<"6. Shutdown\t"<<endl;
        cout<<"\nEnter the index no of the application you want perform\t";
        cin>>n;
        if (n == 1)
        {
            cout<<"Final answer = "<<cal();
            count=0;    
        }
            
            else if (n==2)
            {
                count=0;
            }
            
            else if (n==3)
            {
                FILE * fpointer;
                fpointer = fopen("test.txt", "w");
                cout<<"Enter the paragraph\n";
                char arr[250];
                cin>>arr;
                fprintf(fpointer, "hello/n");
                cout<<"Your text is entered in a file!\n";
                fclose(fpointer);
                count=0;    
            }
            
            else if (n==4)
            {
                count=0;    
            }
            
            else if (n==6)
            {
                int n3, m1=2;
                cout<<"Do you want to exit program(0) or shutdown computer(1)\t";
                do{
                    cin>>n3;
                    switch(n3)
                    {
                        case 0:
                            exit (0);   
                            break;
                            
                        case 1:
                            cout<<"Are you sure you want to shutdown(y/n)?\t";
                            char confirm;
                            cin>>confirm;
                            if (confirm=='y'||confirm=='Y')
                            {
                                system("shutdown -s");
                            }
                            m1=0;
                            break;
                        default:
                        cout<<"\nWrong input. Try again"<<endl; 
                    }   
                }
                while(m1!=0);
            }
            
            else if (n==5)
            {
                int n2;
                char i1;
                do
                {
                cout<<"\nDo you want a poem(1) or joke(2)"<<endl;
                cin>>n2;                
                switch (n2)
                {
                    case 1:
                        cout<<"Heres a poem for you"<<endl;
                        cout<<"I often scribble in the sand"<<endl;
                        cout<<"The words I find so hard to say"<<endl;
                        cout<<"And hope the wind will come along"<<endl;
                        cout<<"And blow them all your way"<<endl;
                        break;
                    case 2:
                        cout<<"What do call a roaming nun?......\nA romin' catholic!!"<<endl;
                        break;  
                    default:
                        cout<<"wrong input";
                }
                cout<<"\nDo want to redo [y/n]?\t";
                cin>>i1;
            }
            while(i1=='y');
                count=0;
            }
            
            else
            {   cout << "Wrong input!, Retry" << endl; }    
        } while (count!=0);
}
