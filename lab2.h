#include <iostream>
#include <string>
using namespace std;

class Body{
	public:
		void set(){
			height = 0;
			mass = 0;
		}
		void set(double x,double y){
			height = x;
			mass = y;
		}
		void get(double x,double y){
			height = x;
			mass = y;
		} 
		string BMIs(){
			BMId = BMIn();
			if(BMId<15.0) B = "Very severely underweight";
                	else if(BMId<=16.0) B = "Severely underweight";
                	else if(BMId<=18.5) B = "Underweight";
                	else if(BMId<=25.0) B = "Normal";
                	else if(BMId<=30.0) B = "Overweight";
                	else if(BMId<=35.0) B = "Obese Class I (Moderately obese)";
                	else if(BMId<=40.0) B = "Obese Class II (Severely obese)";
                	else if(BMId>=40.0) B = "Obese Class III (Very severely obese)";
			return B;
		}
		double BMIn(){
			BMIc = (mass/((height/100)*(height/100)));
                        BMIc = (double)((int)(BMIc*100)*0.01);
			return BMIc;
                }
	private:
 		double height;
		double mass;
		double BMIc;
		double BMId;
		string B; 
};
