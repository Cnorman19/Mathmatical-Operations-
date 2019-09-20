#ifndef CMATH_H_INCLUDED
#define CMATH_H_INCLUDED

#include <iostream>
using namespace std;

class MathmaticalOperations{

    public:

        void add(int x, int y){

            int result = 0;

            result = x + y;

            cout << "Here are the results: " << result << endl;

        }

        void subtract(int x, int y){

            int result = 0;

            if(x > y){

                result = x - y;
            }

            else if (y > x){

                result = y - x;
            }

            cout << "Here are the results: " << result << endl;

        }


        void multiply(int x, int y){

            int result = 0;

            result = x * y;

            cout << "Here are the results: " << result << endl;

        }


        void divide(int x, int y){


            int result = 0;

            if(x > y){

                result = x / y;

            }

            else if(y > x){

                result = y / x;
            }

            cout << "Here are the results: " << result << endl;

        }


};




#endif // CMATH_H_INCLUDED
