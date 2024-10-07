// ********************************** VIRTUAL FUNCTION **************************************

#include<iostream>
#include<cstring>
using namespace std;

class HM{                // Abstract base class
    protected:
    string title;
    float rating;
    public:
    HM(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display()=0; // "=0" pure virtual function 
    

};

class HM_video : public HM{
    float videolen;
    public:
    HM_video(string s, float r, float vl) : HM(s,r){
        videolen = vl;
    }

    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings :  "<<rating<<endl;
        cout<<"Video Length :  "<<videolen<<endl;
    }

};

class HM_text : public HM{
    int words;
    public:
    HM_text(string s, float r, int wc) : HM(s,r){
        words = wc;
    }
    void display(){
        cout<<"Text Title: "<<title<<endl;
        cout<<"Text ratings: "<<rating<<endl;
        cout<<"Word count: "<<words<<endl;
    }
};
int main(){
    string title;
    float rating, videolen;
    int words;
    // for HM Video
    HM_video pt("Python Tutorials!!!", 9.7, 4.5);
    // pt.display();

    // for HM text
    HM_text ht("Hindustan Times", 9.9, 1005);
    // ht.display();
    
    // displaying using pointers instead of direct display
    HM *ptr1[2];
    ptr1[0] = &pt;
    ptr1[1] = &ht;

    (*ptr1[0]).display(); // ptr1[0]->display();
    ptr1[1]->display();

    return 0;
}