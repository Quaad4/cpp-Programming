#include <iostream>

class User
{
    private:
        int user_ID;
        static int user_count;
    public:
        std::string first_name;
        std::string last_name;
        int age;
        char rating;
    static int get_user_count()
    {
        return user_count;
    }
    int get_user_ID()
    {
        return user_ID;
    }
    User()
    {
        user_count++;
    }
    User(int user_ID, std::string first_name, std::string last_name, int age, char rating)
    {
        this-> user_ID = user_ID;
        this-> first_name = first_name;
        this-> last_name = last_name;
        this-> age = age;
        get_rating(rating);
        user_count++;
    }
    void get_rating(char rating)
    {
        if(rating == 'a' || rating == 'A' || rating == 'b' || rating == 'B'
           || rating == 'c' ||  rating == 'C')
        {
            if(rating == 'a')
            {
                this->rating = 'A';
            }
            else if(rating == 'b')
            {
                this->rating = 'B';
            }
            else if(rating == 'c')
            {
                this->rating = 'C';
            }
            else
            {
                this->rating = rating;
            }
        }
        else
        {
            this->rating = 'U';
        }
    }
    ~User()
    {
        user_count--;
    }
    friend std::ostream& operator << (std::ostream& output, User user);
    friend std::istream& operator >> (std::istream& input, User &user);

};
int User::user_count = 0;

std::ostream& operator << (std::ostream& output, User user)
{
    std::cout << '[' << user.user_ID << ']' << " " << user.first_name << " " << user.last_name << '\n'
    << "Age: " << user.age << '\n' << "Rating: " << user.rating << '\n' << "User count: " << User::get_user_count() << std::endl;
}

std::istream& operator >> (std::istream& input, User &user)
{
    std::cout << "ID: ";
    std::cin >> user.user_ID;

    std::cout << "First name: ";
    std::getline(std::cin >> std::ws, user.first_name);

    std::cout << "Last name: ";
    std::getline(std::cin >> std::ws, user.last_name);

    std::cout << "Age: ";
    std::cin >> user.age;

    std::cout << "Rating: ";
    std::cin >> user.rating;
}

int main()
{

    User Alex(0, "Alex", "Wood", 23, 'a');
    std::cout << User::get_user_count() << std::endl;
    std::cout << Alex.get_user_ID() << std::endl;
    std::cout << Alex.rating << std::endl;
    std::cout << Alex.first_name << std::endl;

    User two;
    std::cout << "Count: " << User::get_user_count() << std::endl;
    std::cout << "Enter in ID, first and last name, age and rating(a-c) ";
    std::cin >> two;

    std::cout << two;
    return 0;
}
