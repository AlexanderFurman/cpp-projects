# include <iostream>

int main(){
    
    int x; //declaration
    x = 6; //assignment

    int y = 5; //dec. + assign.

    int sum = x+y;

    // double (number including decimal)
    double price = 10.99;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char initial = '$';

    //boolean (true or false)
    bool student = true;
    bool power = false;

    //string (objects that represent sequence of text)
    std::string name = "Alex"; // note that strings are stored within std


    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << price << '\n';
    std::cout << initial << '\n';
    std::cout << power << '\n';
    std::cout << name << '\n';

    //string literal
    std::cout << "Hello " << name << '\n';
    std::cout << "Current tempurature is " << temperature << " degrees. \n";

    return 0;
}