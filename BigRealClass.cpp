#include "BigRealClass.h"

// Default constructor
BigReal:: BigReal(double realNumber = 0.0){

} 

BigReal::BigReal(string realNumber){
    
}

BigReal::BigReal(BigDecimalInt bigInteger){
    
}
// Copy construor
BigReal::BigReal(const BigReal& other){
    
} 
// Movectconstruor
BigReal::BigReal(BigReal&& other){
    
} 
 // Assignment operator
BigReal& BigReal:: operator= (BigReal& other){
    
} 
// Move assignment 
BigReal& BigReal:: operator= (BigReal&& other){
    
}  

BigReal BigReal:: operator+ (BigReal& other){
    
}

BigReal BigReal:: operator- (BigReal& other){
    
}

bool BigReal::operator< (BigReal anotherReal){
    
} 

bool BigReal::operator> (BigReal anotherReal){
    
} 

bool BigReal::operator== (BigReal anotherReal){
    
} 

int BigReal::size(){
    
} 

int BigReal::sign(){
    
} 


ostream& operator << (ostream& out, BigReal num){

}

istream& operator >> (istream& out, BigReal num){
    
}