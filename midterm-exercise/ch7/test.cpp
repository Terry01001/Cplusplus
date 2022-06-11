#include <iostream>
#include <string>
#include <iomanip>
#include<cstdlib>
#include<vector>

using namespace std;

 

class Pizza{
private:
    int pie_type;
    int pie_size;
    int pie_topz;

public:

    void Output_Description();  //Displays pizza type, size, toppings

    void Compute_Price();       //Displays cost of pizza

     

    void input_Ptype();         //User input of pizza type

    void input_Psize();         //User input of pizza size

    void input_NumTops();       //User input of number of toppings

};

class Order

{

private:
    vector <Pizza> orders;
public:

    void add_pizz\a(Pizza);

};
 
const string Pizza_Type [3] = {"Deep Dish", "Hand Tossed", "Pan"};
const string Pizza_Size [3] = {"Small", "Medium", "Large"};
const string Pizza_Topz [3] = {"Pepperoni", "Cheese", "Pepperoni and Cheese"};

const int Pizza_Cost [3] = {10, 12, 17};

int main()

{

    Pizza pie;

    pie.input_Ptype();

    pie.input_Psize();

    pie.input_NumTops();

    pie.Output_Description();
}

 

void Pizza::input_Ptype(){

    cout << "Type of Pizza\n";

    cout << "1 - " << Pizza_Type[0] << "\n";

    cout << "2 - " << Pizza_Type[1] << "\n";

    cout << "3 - " << Pizza_Type[2] << "\n";

    cin >> pie_type;

    if (pie_type > 3 || pie_type == 0)

    {

        cout << "Invalid selection for pizza type.\n"

             << "Selection must be 1, 2, or 3\n\n"
             << "Program will now terminate."

             << endl;
        exit(1);
        
    }

}

 

void Pizza::input_Psize(){

    cout << "Pizza Size\n";

    cout << "1 - " << Pizza_Size[0] << "\n";

    cout << "2 - " << Pizza_Size[1] << "\n";

    cout << "3 - " << Pizza_Size[2] << "\n";

    cin >> pie_size;


    if (pie_size > 3 || pie_size == 0)  

    {   cout << "Invalid selection for pizza size.\n"

             << "Selection must be 1, 2, or 3\n\n"

             << "Program will terminate."

             << endl;
091
        exit (1);
092
    }
093
}
094
 
095
void Pizza::input_NumTops(){
096
    cout << "\nPizza Toppings\n"
097
         << "Number of toppings for this pizza.\n"
098
         << "Each topping is $2.00: ";
099
     
100
    cout << "\n1 - " << Pizza_Topz[0] << "\n";
101
    cout << "2 - " << Pizza_Topz[1] << "\n";
102
    cout << "3 - " << Pizza_Topz[2] << "\n";
103
    cin >> pie_topz;
104
 
105
    if (pie_topz > 3 || pie_topz == 0)  
106
    {   cout << "Invalid selection for pizza toppins.\n"
107
             << "Selection must be 1, 2, or 3\n\n"
108
             << "Program will terminate."
109
             << endl;
110
        exit (1);
111
    }
112
}
113
void Pizza::Output_Description()
114
{
115
    //Order lfm;
116
    //lfm.orders.push_back(pt,ps, topz1);
117
    //lfm.orders.push_back("j",1);
118
    cout << "\nThe output for Pizza Type: "
119
         << pie_type
120
         << "\nThe output for Pizza Size: "
121
         << pie_size
122
         << "\nThe output for Pizza Toppings: "
123
         << pie_topz << endl;
124
    //cout << lfm.orders[0];
125
}

