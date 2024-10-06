// Crystal Zhang
// 10/1/2024
// Homework 2 Part 2

#include <iostream> 

using namespace std; 

int main() 
{
    //declaring variables for all six judges 
    double judge1; 
    double judge2; 
    double judge3; 
    double judge4;
    double judge5; 
    double judge6;
    
    //asking user for input for all six judges using cout and allowing them to input their scores using cin
    cout << "What's judge 1's score?" << endl; 
    cin >> judge1; 
    
    cout << "What's judge 2's score?" << endl; 
    cin >> judge2; 
    
    cout << "What's judge 3's score?" << endl; 
    cin >> judge3; 
    
    cout << "What's judge 4's score?" << endl; 
    cin >> judge4; 
    
    cout << "What's judge 5's score?" << endl; 
    cin >> judge5; 
    
    cout << "What's judge 6's score?" << endl; 
    cin >> judge6; 


    
    //if any judge's score is less than all of the other judges, their score will turn 0/essentially have no value 
    if ((judge1 < judge2) && (judge1 < judge3) && (judge1 <judge4) && (judge1 < judge5) && (judge1 < judge6))
        judge1 = 0; 
    
    if ((judge2 < judge1) && (judge2 < judge3) && (judge2 <judge4) && (judge2 < judge5) && (judge2 < judge6))
        judge2 = 0; 
    
    if ((judge3 < judge1) && (judge3 < judge2) && (judge3 <judge4) && (judge3 < judge5) && (judge3 < judge6))
        judge3 = 0; 
    
    if ((judge4 < judge1) && (judge4 < judge2) && (judge4 <judge3) && (judge4 < judge5) && (judge4 < judge6))
        judge4 = 0; 
    
    if ((judge5 < judge1) && (judge5 < judge2) && (judge5 <judge3) && (judge5 < judge4) && (judge5 < judge6))
        judge5 = 0; 
    
    if ((judge6 < judge1) && (judge6 < judge2) && (judge6 <judge3) && (judge6 < judge4) && (judge6 < judge5))
        judge6 = 0; 


    
    //if any judge's score is greater than all of the other judges, their score will turn 0/essentially have no value 
    if ((judge1 > judge2) && (judge1 > judge3) && (judge1 >judge4) && (judge1 > judge5) && (judge1 > judge6))
        judge1 = 0; 
    
    if ((judge2 > judge1) && (judge2 > judge3) && (judge2 >judge4) && (judge2 > judge5) && (judge2 > judge6))
        judge2 = 0; 
    
    if ((judge3 > judge1) && (judge3 > judge2) && (judge3 >judge4) && (judge3 > judge5) && (judge3 > judge6))
        judge3 = 0; 
    
    if ((judge4 > judge1) && (judge4 > judge2) && (judge4 >judge3) && (judge4 > judge5) && (judge4 > judge6))
        judge4 = 0; 
    
    if ((judge5 > judge1) && (judge5 > judge2) && (judge5 >judge3) && (judge5 > judge4) && (judge5 > judge6))
        judge5 = 0; 
    
    if ((judge6 > judge1) && (judge6 > judge2) && (judge6 >judge3) && (judge6 > judge4) && (judge6 > judge5))
        judge6 = 0; 

    //decalres the output as all the judges' scores added up (the scores greater or less than the rest have turned to zero and have no influence on the            average of the other four) and divided by four 
    cout << "The final score is " << (judge1 + judge2 + judge3 + judge4 + judge5 + judge6) / 4; 

    /* 
    output if: 
    judge 1 = 5 
    judge 2 = 3
    judge 3 = 8 
    judge 4 = 10 
    judge 5 = 4
    judge 6 = 7 
    
    What's judge 1's score?
    5
    What's judge 2's score?
    3
    What's judge 3's score?
    8
    What's judge 4's score?
    10
    What's judge 5's score?
    4
    What's judge 6's score?
    7
    The final score is 6 
    */ 
    
    return 0; //return code

}
