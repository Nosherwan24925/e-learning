#include<iostream>
using namespace std;


class E-Learning()
{

private:
Course courses;


public:

void Login(String user_name,String user_email);
void create_course();
void update_course();
void orginize_course();

void search_course(String course_id);


};


void E-Learning::Login(Sting user_name,String user_email)
{
     if(user_name=="Nosherwan" && user_email=="Noos@gmail.com")
     {
        cout<<"Login Sucessful"<<endl;                          
     }
 }

void E-Learning::create-course()
{
     courses.create();
}


void E-Learning::update_course()
{
     courses.update();
     
}

void E-Learning::organize_course()
{
     course.organize();
 
}


int main()
{

    return 0;
}
