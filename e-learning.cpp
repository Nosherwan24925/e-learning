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


}

void E-Learning::update_course()
{
     courses.update();
}


int main()
{

    return 0;
}
