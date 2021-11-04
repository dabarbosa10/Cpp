#include <iostream>
#include <cmath>

using namespace std;




int solve(double meal_cost, double tip_percent, double tax_percent) {

double tip,tax,total_cost;
tip=(tip_percent)*(meal_cost/100);
tax=(meal_cost)*(tax_percent/100);
total_cost=meal_cost+tip+tax;
//cout<<total_cost;
//cout<<"tip: "<<tip << " tax: "<<tax <<" total cost: "<< total_cost<<endl;
//cout<<"Meal cost: "<< meal_cost << " tip prc "<< tip_percent << " tax_perc: "<<tax_percent<<endl;
//cout<<round(total_cost);
return round(total_cost);


}

int main()
{
    /*string meal_cost_temp;
    getline(cin, meal_cost_temp);

    double meal_cost = stod(ltrim(rtrim(meal_cost_temp)));

    string tip_percent_temp;
    getline(cin, tip_percent_temp);

    int tip_percent = stoi(ltrim(rtrim(tip_percent_temp)));

    string tax_percent_temp;
    getline(cin, tax_percent_temp); */

    //int tax_percent = stoi(ltrim(rtrim(tax_percent_temp)));
    double mc;
    double tp,taxp;
    cin>>mc;
    cin>>tp;
    cin>>taxp;
    double z;
    z=solve(mc, tp, taxp);
    cout<<z<<endl;

    return 0;
}

