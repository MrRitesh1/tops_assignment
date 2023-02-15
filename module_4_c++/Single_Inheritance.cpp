# include<iostream>
# include<string.h>
# include<stdio.h>
using namespace std;
class cricketer // cricketer is sub class
{
    public:
        char name[100];
        int run[5],j=1,i=0;
    public:
    void getdata()
    {
        cout<<"--------------------------------------\n";
        cout<<"Enter batsman name: ";
        cin>>name; //getline(cin,name,'\n');//gets(name);
        cout<<"--------------------------------------\n";
        cout<<"Enter run of 5 matches:";
        //cin>>match;
        //int run[match];
        for (i=0;i<5;i++)
        {
            cout<<"\nEnter run of match-"<<j<<":";
            cin>>run[i];
            j++;
        }
    }    
};
class batsman:public cricketer // batsman is derived class and is inherit cricketer class
{
    public:
    float averageRun;
    int totalrun=0,best=0;
    void Total()
    {
        for(int i=0;i<5;i++)
        {   
            totalrun = totalrun + run[i];
        }
        //cout<<"Total run: "<<totalrun;
    }
    void average()
    {
        averageRun = (float)totalrun/5;  
              //cout<<"\nEverage run of total match: "<<averageRun<<"%"<<endl;
    }
    void performance()
    {
        
        for(int i=0;i<5;i++)
        {
            if(run[i]>averageRun)
            {
                //cout<<"Best performance: "<<run[i]<<"\n";
                best++;
            }
        }
        //cout<<"Total Best Performance = "<<best<<endl;
    }
    void display()
    {
        cout<<"\n"<<name<<"\t\t|"<<totalrun<<"\t\t|"<<averageRun<<"\t\t|"<<best;
        cout<<"\n----------------------------------------------------";
    }
    };
int main()
{
    int num;
    cout<<"Enter the number of batsman: ";
    cin>>num;
    batsman player[num];
    for (int i = 0; i < num; i++)
    {
        player[i].getdata();
        player[i].Total();
        player[i].average();
        player[i].performance();
    }
    cout<<"\nName \t\t|Total run\t|average run\t|Total best performance";
    cout<<"\n----------------------------------------------------";
    for (int i = 0; i < num; i++)
    {
        player[i].display();
    }      
    return 0;
}
