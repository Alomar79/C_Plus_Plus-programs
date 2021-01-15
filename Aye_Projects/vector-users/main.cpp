#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User
{
private:
    string status = "Gold";
public:
    string first_name;
    string last_name;
    string getStatus()
    {
        return status;
    }

    User(string name)
    {
        first_name = name;
        cout<<"Full-Constructor\n";
    }
    User()
    {
        first_name = "";
        cout<<"Empty-Constructor\n";
    }
    ~User()
    {
        cout<<"De-structor\n";
    }
};

int add_user_if_not_exist(vector<User> &users , User user)
{
    for(int i=0; i<users.size(); i++)
    {
        if(users[i].first_name == user.first_name && users[i].last_name == user.last_name)
        {
            return i;
        }
    }

    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    vector<User> users;

    User user1 , user2 , user3;
    cout <<"define users 1,2,3\n";
    user1.first_name = "Sally";
    user1.last_name = "Swan";
    user2.first_name = "Jack";
    user2.last_name = "Johnson";
    user3.first_name = "Caleb";
    user3.last_name = "Curry";



    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    cout <<"after adding 3 users to the vector\n";

    User user4("Sally");
    user4.last_name = "Swan";


    cout << add_user_if_not_exist(users,user4) <<endl;

    cout <<"after adding user4\n";

    cout<<"=====================\n";
    cout<<users[0].first_name <<" , Status : "<<users[0].getStatus()<<endl;
    cout<<users[1].first_name <<" , Status : "<<users[1].getStatus()<<endl;
    cout<<users[2].first_name <<" , Status : "<<users[2].getStatus()<<endl;
    cout<<users[3].first_name <<" , Status : "<<users[3].getStatus()<<endl;

    cout <<"before return\n";


    return 0;
}
