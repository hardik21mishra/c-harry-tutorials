// ****************Demonstrating Virtual Base Class ****************
// 
//                           Student 
//                              |
//            __________________|__________________
//           |                                     |
//           |                                     |
//         test                                  sports
//           |                                     |
//           |__________________ __________________|
//                              |
//                              |
//                            result

//________________________________________________________________________________________

#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_roll(int a){
        roll_no = a;
    }
    void get_roll(){
        cout<<"The roll no. is "<<roll_no<<endl;
    }
};

class test : virtual public student{
    protected:
    float m,p;
    public:
    void set_marks(float a, float b){
        m = a;
        p = b;
    }
    void get_marks(){
        cout<<"Your marks are here: "<<endl;
        cout<<"Maths marks = "<<m<<endl;
        cout<<"Physics marks = "<<p<<endl;
    }
};
class sports : virtual public student{
    protected:
    float scores; //out of 10
    public:
    void set_score(int a){
        scores = a;
    }
    void get_scores(){
        cout<<"Sports score: "<<scores<<endl;
    }

};
class result : public test, public sports{
    private:
    float total;
    public:
    void disp_all(){
        total = p + m + scores;
        get_roll();
        get_marks();
        get_scores();
        cout<<"Your total score is "<<total<<endl;
    }
};
int main(){
    result harry;
    harry.set_roll(23);
    harry.set_marks(78.9,99.5);
    harry.set_score(9);
    harry.disp_all();
    return 0;
}