#include <iostream>
using namespace std;
class base_Class
{
public:
    int var_base;
    void display()
    {
        cout << "Variable of base class is called:" << var_base << endl;
    }
};
class derived_Class : public base_Class
{
public:
    int var_derived;
    void display()
    {
        cout << "Variable of base class is called: " << var_base<< endl;
        cout << "Variable of derived class is called: " << var_derived << endl;
    }
};    
    int main()
    {
        base_Class *Base_Class_Pointer;
        base_Class base_obj;
        derived_Class derived_obj;
        Base_Class_Pointer = &derived_obj;
        Base_Class_Pointer->var_base = 3400; 
        // Base_Class_Pointer ->var_derived= 40;
        //throws error:pointer of base class is used        
        Base_Class_Pointer->display ();
        derived_Class *derived_Class_Pointer;
        derived_Class_Pointer = &derived_obj;        
        derived_Class_Pointer->var_derived = 60;        
        derived_Class_Pointer->display();
        derived_Class_Pointer->var_base = 77;
        derived_Class_Pointer->display();



        return 0;
    }