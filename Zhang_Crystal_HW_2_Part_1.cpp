// Crystal Zhang
// 10/1/2024
// Homework 2 Part 1

#include <iostream> 

using namespace std; 

int main() 
{
    //variables for the user to input 
    int month; 
    int day; 

    cout << "What month is it right now in a number?" << endl; 
    //prompts the user to enter the current month in a number 
    cin >> month; 
    //allows the user to enter the current month 

    cout << "What day is it right now in a number?" << endl; 
    //prompts the user to enter the current day in a number 
    cin >> day; 
    //allows the user to enter the current day 

    //Spring
    if ((month == 3 && day >=21) || (month > 3 && month < 6) || (month == 6 && day <=20)) 
        /* 
            if the date is 3/21 or over in the month of 3 
        or the month is between 3 and 6 non-inclusive 
        or the month is 6 and the day is less than 20, print below 
        else go to else 
        */ 
            cout << "It is now Spring!"; 
    //print if qualifies 

        
            //Summer
            else if ((month == 6  && day >=21) || (month > 6 && month < 9) || (month == 9 && day <=22)) 
             /* 
                if the date is 6/21 or over in the month of 6 
                 or the month is between 6 and 9 non-inclusive 
                 or the month is 9 and the day is less than 22, print below 
                 else go to else 
             */ 
                cout << "It is now Summer!"; 
                //print if qualifies 

                
                //Fall
                else if ((month == 9 && day >=23) || (month > 9 && month < 12) || (month == 12 && day <=21)) 
                 /* 
                    if the date is 9/23 or over in the month of 9 
                    or the month is between 9 and 12 non-inclusive 
                    or the month is 12 and the day is less than 21, print below 
                    else go to else 
                 */ 
                     cout << "It is now Fall!"; 
                    //print if qualifies 

                        else 
                        cout << "It is now Winter!"; 
                        //print if none else qualities 
                        // (if the qualifications for the other seasons are not met, then the only one left is winter) 
    
    /* 
    output if: 
    month = 10
    day = 30 

    What month is it right now in a number? 
    10 
    What day is it right now in a number? 
    30 
    It is now Fall!
    */ 
    
        

    return 0; //return code

}
