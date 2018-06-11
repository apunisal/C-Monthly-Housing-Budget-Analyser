#include<iostream>
#include<ctime>
#include<fstream>
#include<string>
using namespace std;

    ofstream f;

  class Default //Contains all Average Values
{  protected:float D_Household=20.0;float D_Savings_Insurance=20.0;float D_Education=15.0;float D_Personal_Care_Medication=10.0;float D_Entertainment=2.0;float D_Holidays_hoteling=10.0;float D_Transportation=6.0;float D_Clothing=7.0;float D_Eves_Celebrations=5.0;float D_Other=5.0;};

class Decorate //Contains all Decorations
{ public :
   void dot()
    {cout<<"\n\n\n``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````\n\n\n\t";}
   void line()
    {cout<<"\n          -----------------------------------------------";}
   void both()
    {line();dot();}
};
class Budget : public Decorate
{ protected :float Household;float Savings_Insurance;float Education;float Personal_Care_Medication;float Entertainment;float Holidays_hoteling;float Transportation;float Clothing;float Eves_Celebrations;float Other;float Total_Monthly_Expences;float Salary;
  float x1,x2,x3,x4,x5;
public:
    void Salary_()
    {  dot();
    cout.width(10);
       cout<<"Enter Your Total Monthly Salary (in hand) : Rs. ";f<<"Your Total Monthly Salary (in hand) : Rs. ";
       cin>>Salary;f<<Salary<<"\n";
    }
    void Budgets()
     {

    //household expenses
       dot();

       cout<<" 1 ]  Household expenses \n\n\t\t\n\t\t - News Paper & Magazine Bill              : Rs. ";
       cin>>x1;
       cout<<"\n\t\t  - Milk man Bill                           : Rs. ";
       cin>>x2;
       cout<<"\n\t\t - Grocery                                 : Rs. ";
       cin>>x3;
       cout<<"\n\t\t - Electricity & other energy Bills        : Rs. ";
       cin>>x4;
       cout<<"\n\t\t - Internet Bill                           : Rs. ";
       cin>>x5;
       Household=x1+x2+x3+x4+x5;
       line();
       cout<<"\n\t      Total Household expenses : Rs. "<<Household;both();f<<"\n\t      Total Household expenses : Rs. "<<Household;
       //Savings & Insurance
       cout<<" 2 ]  Savings & Insurance \n\n\t\t\n\t\t - Total Insurance                         : Rs. ";
       x1=0;x2=0;
       cin>>x1;
       cout<<"\n\t\t - Savings                                 : Rs. ";
       cin>>x2;
       Savings_Insurance=x1+x2;
       line();
       cout<<"\n\t      Total Savings & Inurance expenses : Rs. "<<Savings_Insurance;both();f<<"\n\t      Total Savings & Insurance expenses : Rs. "<<Savings_Insurance;
        //Education
       cout<<" 3 ]  Learning & Education                         : Rs. ";
       cin>>Education;
       line();
       cout<<"\n\t      Total Educational expenses : Rs."<<Education;both();f<<"\n\t      Total Educational expenses : Rs."<<Education;
        //Medication
       cout<<" 4 ]  Personal Care & Medication \n\n\t\t\n\t\t - Medication                              : Rs. ";
       x1=0;x2=0;x3=0;
       cin>>x1;
       cout<<"\n\t\t - Gym/Personal Trainer/Fitness Classes    : Rs. ";
       cin>>x2;
       cout<<"\n\t\t - Salon                                   : Rs. ";
       cin>>x3;
       Personal_Care_Medication=x1+x2+x3;
       line();
       cout<<"\n\t      Total Personal Care & Medication : Rs. "<<Personal_Care_Medication;both();f<<"\n\t      Total Personal Care & Medication : Rs. "<<Personal_Care_Medication;
        //Entertainment
       cout<<" 5 ]  Entertainment                                : Rs. ";
       cin>>Entertainment;
       line();
       cout<<"\n\t      Total Entertainment expenses : Rs. "<<Entertainment;both();f<<"\n\t      Total Entertainment expenses : Rs. "<<Entertainment;
        //Holidays & Hoteling
       cout<<" 6 ]  Holidays & Hoteling                          : Rs. ";
       cin>>Holidays_hoteling;
       line();
       cout<<"\n\t      Total Holidays & Hoteling Expenses : Rs. "<<Holidays_hoteling;both();f<<"\n\t      Total Holidays & Hoteling Expenses : Rs. "<<Holidays_hoteling;
       //Transportation
       cout<<" 7 ]  Transportation                               : Rs. ";
       cin>>Transportation;
       line();
       cout<<"\n\t      Total Transportation Expenses : Rs. "<<Transportation;both();f<<"\n\t      Total Transportation Expenses : Rs. "<<Transportation;
       //Clothing
       cout<<" 8 ]  Clothing                                     : Rs. ";
       cin>>Clothing;
       line();
       cout<<"\n\t      Total Clothing Expenses : Rs. "<<Clothing;both();f<<"\n\t      Total Clothing Expenses : Rs. "<<Clothing;
       //Eves & Celebrations
       cout<<" 9 ]  Eves & Celebrations                          : Rs. ";
       cin>>Eves_Celebrations;
       line();
       cout<<"\n\t      Total Eves & Celebrations Expenses : Rs. "<<Eves_Celebrations;both();
        //Other
       cout<<" 10 ]  Other Expenses                              : Rs. ";
       cin>>Other;
       line();
       cout<<"\n\t      Total Other Expenses : Rs. "<<Other;both();f<<"\n\t      Total Other Expenses : Rs. "<<Other;
     }
     void Total()
    {   f<<"\n-------------------------------------------------------------------------------------------------------------------\n\n";
       Total_Monthly_Expences = Household + Savings_Insurance + Education + Personal_Care_Medication + Entertainment + Holidays_hoteling + Transportation + Clothing + Eves_Celebrations + Other;
       cout<<"\n\t      Your total Monthly expenses are : Rs. "<<Total_Monthly_Expences;f<<"\n\t      Your total Monthly expenses are : Rs. "<<Total_Monthly_Expences;
       f<<"\n-------------------------------------------------------------------------------------------------------------------\n\n";
       dot();
    }

};
class Compare : protected Default,public Budget
{  public :int a[9];float p;
     void graph(int pp)//To display graph
    {for(int i=0;i<pp;i++)
        { cout<<"%";f<<"%"; }
        if(p<0)
       {cout<<" Less than "<<pp<<"%";f<<" Less than "<<pp<<"%";}
         else
       {cout<<" "<<pp<<"%";f<<" "<<pp<<"%";}
    }
  void bar(float a,float b)  //To display graph
   {   int x,y;x=a;y=b;
       cout<<"\n\t      On an AVERAGE, expenses (in this sector) should be : |";f<<"\n\t      On an AVERAGE, expenses (in this sector) should be : |";
       for(int i=0;i<=x;i++)
       {cout<<"%";f<<"%";f<<"%";f<<"%";}
       cout<<"\n\t      Your Expenses                                      : |";f<<"\n\t      Your Expenses                                      : |";
       for(int i=0;i<=y;i++)
       {cout<<"%";f<<"%";}
       cout<<"\n\n";f<<"\n\n";
    }

   void com()//compare
   {   if(Total_Monthly_Expences>Salary)
         { float x;
         x=Total_Monthly_Expences-Salary;
        f<<"\n-------------------------------------------------------------------------------------------------------------------\n\n";
         cout<<"\n\tYour salary is Rs."<<x<<" less than your total expenses for this month.\n\t\n\tLet's add Rs."<<x<<" to your salary and compare"; f<<"\n\tYour salary is Rs."<<x<<" less than your total expenses for this month.\n\t\n\tLet's add Rs."<<x<<" to your salary and compare";
         Salary=Salary+x;
         }
         if(Total_Monthly_Expences<Salary)
         { float x;
         x=Salary-Total_Monthly_Expences;
         f<<"\n-------------------------------------------------------------------------------------------------------------------\n\n";
         cout<<"\n\tYour salary is Rs."<<x<<" more than your total expenses for this month.\n\t\tLet's add Rs."<<x<<" to your Savings and compare\n";f<<"\n\tYour salary is Rs."<<x<<" more than your total expenses for this month.\n\t\tLet's add Rs."<<x<<" to your Savings and compare\n";

         Savings_Insurance=Savings_Insurance+x;
         }
      p=((Household/Salary)*100);p=(int)p;a[0]=p;
      if(D_Household<p)
      {
          cout<<"\n\t      Your Household Expenses are "<<p-D_Household<<"% more.";f<<"\n\t      Your Household Expenses are "<<p-D_Household<<"% more.";bar(D_Household,p);
      }

   /*   p=((Savings_Insurance/Salary)*100);p=(int)p;a[1]=p;
      if(D_Savings_Insurance<p)
      {cout<<"\n\t      Your Savings & Insurance Expenses are "<<p-D_Savings_Insurance<<"% more.";f<<"\n\t      Your Savings & Insurance Expenses are "<<p-D_Savings_Insurance<<"% more.";bar(D_Savings_Insurance,p);}*/

      p=((Education/Salary)*100);p=(int)p;a[2]=p;
      if(D_Education<p)
      {cout<<"\n\t      Your Educational Expenses are "<<p-D_Education<<"% more.";f<<"\n\t      Your Educational Expenses are "<<p-D_Education<<"% more.";bar(D_Education,p);}

      p=((Personal_Care_Medication/Salary)*100);p=(int)p;a[3]=p;
      if(D_Personal_Care_Medication<p)
      {cout<<"\n\t      Your Personal Care& Medication Expenses are "<<p-D_Personal_Care_Medication<<"% more.";bar(D_Personal_Care_Medication,p);}

       p=((Entertainment/Salary)*100);p=(int)p;a[4]=p;
      if(D_Entertainment<p)
      {cout<<"\n\t      Your Entertainment Expenses are "<<p-D_Entertainment<<"% more.";f<<"\n\t      Your Entertainment Expenses are "<<p-D_Entertainment<<"% more.";bar(D_Entertainment,p);}

      p=((Holidays_hoteling/Salary)*100);p=(int)p;a[5]=p;
      if(D_Holidays_hoteling<p)
      {cout<<"\n\t      Your Holidays & hoteling Expenses are "<<p-D_Holidays_hoteling<<"% more.";bar(D_Holidays_hoteling,p);}

      p=((Transportation/Salary)*100);p=(int)p;a[6]=p;
      if(D_Transportation<p)
      {cout<<"\n\t      Your Transportation Expenses are "<<p-D_Transportation<<"% more.";f<<"\n\t      Your Transportation Expenses are "<<p-D_Transportation<<"% more.";bar(D_Transportation,p);}

      p=((Clothing/Salary)*100);p=(int)p;a[7]=p;
      if(D_Clothing<p)
      {cout<<"\n\t      Your Clothing Expenses are "<<p-D_Clothing<<"% more.";f<<"\n\t      Your Clothing Expenses are "<<p-D_Clothing<<"% more.";bar(D_Clothing,p);}

      p=((Eves_Celebrations/Salary)*100);p=(int)p;a[8]=p;
      if(D_Eves_Celebrations<p)
      {cout<<"\n\t      Your Eves & Celebrations Expenses are "<<p-D_Eves_Celebrations<<"% more.";f<<"\n\t      Your Eves & Celebrations Expenses are "<<p-D_Eves_Celebrations<<"% more.";bar(D_Eves_Celebrations,p);}

      p=((Other/Salary)*100);p=(int)p;a[9]=p;
      if(D_Other<p)
      {cout<<"\n\t      Your Other Expenses are "<<p-D_Other<<"% more.";f<<"\n\t      Your Other Expenses are "<<p-D_Other<<"% more.";bar(D_Other,p);}

      //To display Salary Graph
    {  dot();         f<<"\n-------------------------------------------------------------------------------";
    cout<<"\n\t*************Your Salary Graph****************\n"; f<<"\n\t*************Your Salary Graph****************\n";
         f<<"\n-------------------------------------------------------------------------------";
         cout<<"\n\tHousehold Expenses                  : ";f<<"\n\tHousehold Expenses                  : ";graph(a[0]);
         cout<<"\n\tSavings and Insurance Expenses      : ";f<<"\n\t\tSavings and Insurance Expenses      : ";graph(a[1]);
         cout<<"\n\tEducation                           : ";f<<"\n\t\tEducation                           : ";graph(a[2]);
         cout<<"\n\tPersonal Care & Medication Expenses : ";f<<"\n\t\tPersonal Care & Medication Expenses : ";graph(a[3]);
         cout<<"\n\tEntertainment                       : ";f<<"\n\t\tEntertainment                       : ";graph(a[4]);
         cout<<"\n\tHolidays_hoteling Expenses          : ";f<<"\n\t\tHolidays_hoteling Expenses          : ";graph(a[5]);
         cout<<"\n\tTransportation Expenses             : ";f<<"\n\t\tTransportation Expenses             : ";graph(a[6]);
         cout<<"\n\tClothing Expenses                   : ";f<<"\n\t\tClothing Expenses                   : ";graph(a[7]);
         cout<<"\n\tEves & Celebrations Expenses        : ";f<<"\n\t\tEves & Celebrations Expenses        : ";graph(a[8]);
         cout<<"\n\tOther Expenses                      : ";f<<"\n\t\tOther Expenses                      : ";graph(a[9]);
         dot();
    }
    }
};//end of class compare
class main_data : public Compare
{
 public :


main_data()
{   int o;Compare s;Decorate d;
     time_t now = time(0);// current date/time based on current system
   tm *ltm = localtime(&now);
   cout<< "\n Year  : " << 1900 + ltm->tm_year;f<<"\n Year  : " << 1900 + ltm->tm_year;
   cout<< "  Month : "<< 1 + ltm->tm_mon;f<< "  Month : "<< 1 + ltm->tm_mon;
   cout<< "  Day   : "<<  ltm->tm_mday;f<<"  Day   : "<<  ltm->tm_mday;f<<"\n\n\n";
   d.dot();
   cout<<"\n                                                                                         __                           A";
   cout<<"\n $-$      $-$                                 $-$   $-$                                 $  $                          N";
   cout<<"\n $-$ $  $ $-$  __        ___                  $-$   $-$  __        __  ___        __    $  $       _    __   __ ___   A";
   cout<<"\n $-$  $$  $-$ |  | |$  |  |  |  | |   $  /    $-$$$$$-$ |  | |  | |     |  |$  | |      $__/ |  | | $  |    |    |    L";
   cout<<"\n $-$      $-$ |  | | $ |  |  |__| |    $/     $-$   $-$ |  | |  | |__   |  | $ | | _    $  $ |  | |  ) | _  |__  |    Y";
   cout<<"\n $-$      $-$ |__| |  $|  |  |  | |__  /      $-$   $-$ |__| |__|  __| _|_ |  $| |__|   $__$ |__| |_$  |__| |__  |    Z";
   cout<<"\n                                                                                                                      E";
   cout<<"\n                                                                                                                      R\n\n";


do{s.Salary_();s.Budgets();s.Total();s.com();

       cout<<"\n\t     If you want to continue press 1 ,if not press 0 ? :";
       cin>>o;}while(o!=0);
    cout<<"\n\t     ------------GOODBYE & Have a nice day! ------------\n\n\n";

}

};
int main()
{


   f.open("xxx.txt",ios::out | ios::binary);
   main_data();
   f.close();



    return 0;
}
