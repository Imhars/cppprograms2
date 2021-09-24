            #include<iostream>
            using namespace std;
            class bankaccount
            {
                static int Acc;
                string name,address,acctype;
                float balance;
                int number;
                public:
                bankaccount(string na,string a,string t,float b)
                {
                    name =na;
                    address=a;
                    acctype=t;
                    balance=b;
                    number=makeacc();
                    
                }
                int makeacc()
                {
                    Acc++;
                    return Acc;
                }
                void getinfo()
                {
                    cout<<"__________________________________________________\n"
                    <<"\nname :"<<name<<"\n"
                    <<"<number :"<<number<<"\n"
                    <<"address :"<<address<<"\n"
                    <<"accounttype :"<<acctype<<"\n"
                    <<"balance"<<balance<<"\n"
                    <<"__________________________________________________________________\n";
                }
                void deposite()
                {
                        int ammount;
                        cout<<"enter ammount for deposite\n";
                        cin>>ammount;
                        balance =balance + ammount;
                        cout<<"current ballance is "<<balance<<"\n";
                }
                    void withdraw()
                    {
                        int ammount;
                        cout<<"enter ammount to withdraw\n";
                        cin>>ammount;
                        if(balance!=0)
                            {
                                if(ammount<balance)
                                {
                                    cout<<"earn some money\n";
                                }
                                else
                                {
                                    balance = balance -ammount;
                                }
                            }
                        else
                        {
                            cout<<"youraccount is empty\n";
                        }

                    }

                void changeaddress()
                {
                    string newaddress;
                    cout<<"enter new adress \n";
                    cin>>newaddress;
                    address = newaddress;
                }
            };
            int bankaccount::Acc =999;

            int main()
            {
                bankaccount b1("Harsh","vikroli","saving",2000);
                b1.getinfo();
                b1.deposite();
                bankaccount b2("harjot","mumbai","saving",400);
                b1.getinfo();
                b1.deposite();
                b1.withdraw();
                b1.changeaddress();
                b1.getinfo();
                return 0;
            }