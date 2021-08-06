// Our First C++ Program

#include <iostream>



int results(int user_input) {
    std::cout << "Thank you for typing a number between 1 & 100. The number you entered is: "<< user_input << '\n';
	return 0;
}	



int main() {
    int user_input;
    bool loop_condition;
    std::cout << "Welcome to our first C++ program! \n";
    loop_condition=true;
    while(loop_condition){
        std::cout << "Please type a number between 1 & 100. \n";
        std::cin >> user_input;
        if(user_input > 0 and user_input <= 100){
            loop_condition=false;
        }
        else{
            std::cout << "The number you typed is not between 1 & 100 because it is wrong. Please try again. \n";
        }
        
    }
    results(user_input);
    return 0;
}
