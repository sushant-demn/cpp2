                            // single inheritance
                            
                            
                            #include <iostream>
                            #include<vector>
                            using namespace std;
                            class base  //base class 
                            {
                                int a;

                            public:
                                base(){};
                                int b, c;
                                void setdata();
                                void getdata();
                                int getdata1();
                            };
                            void base ::setdata()
                            {
                                cin >> a >> b >> c;
                            }
                            void base ::getdata()
                            {
                                cout << "The data 1 is " << a << "\nThe data 2 is " << b << "\nThe data3 is " << c << "\n";
                            }
                            int base ::getdata1()
                            {
                                return a;
                            };
                            class derived : public base //derived class from base class uses public member of base class as public member of derived class
                            {int data;
                            public:
                                derived(){};
                                void process(); //squares int a 
                                void display();
                            };
                            void derived ::process()
                            {
                                data = getdata1() * getdata1();
                            }
                            void derived ::display()
                            {
                                cout << "The square of data 1 "<<data <<"\n";
                            }
                            int main()
                            {
                                derived der;
                                der.setdata();
                                der.getdata();
                                der.process();
                                der.display();
                                
                                return 0;
                            }


                            /*
                            notes
                            1. as the int a variable is pvt member of class base therefore we have made a public member function (getdata1()) which returns a to use in derived class



                            */