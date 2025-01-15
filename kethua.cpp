#include<bits/stdc++.h>
using namespace std;
class Person{
    private:
    string name,address;
    public:
    string getname(){
        return  this->name;
    }
    string getaddress(){
        return this->address;
    }
    void setName(string name){
        this->name=name;
    }
    void setAddresss(string address){
        this->address=address;
    }
    void input(){
        getline(cin,name); fflush(stdin);
        getline(cin,address); fflush(stdin);
    }
    void out(){
        cout<<name<<" "<<address<<" ";
    }
};
class student:public Person{
    private:
    float gpa;
    public:
    float getGpa(){
        return this->gpa;
    }
    void setGpa(double Gpa){
        this->gpa=Gpa;
    }
    void input(){
        Person::input();
        cin>>gpa;
    }
    void out(){
        Person::out();
        cout<<gpa;
    }
};
class teacher:public Person{
    private:
    string khoa;
    public:
    string getKhoa(){
        return khoa;
    }
    void setKhoa(string khoa){
        this->khoa=khoa;
    }
    void input(){
        Person::input();
        getline(cin,khoa);
    }
    void out(){
        Person::out();
        cout<<khoa;
    }
};
int main(){
    teacher s;
    s.input();
    s.out();
}