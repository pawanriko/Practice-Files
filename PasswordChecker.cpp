#include <iostream>
#include <string>
#include <cctype>

bool isValidPassword(std::string password) {
    if (password.length() < 8) {
        std::cout << "Error: Minimum 8 characters required" << std::endl;
        return false;
    }
    bool hasUpper = false;
    for(char c : password) {
        if (std::isupper(c)) {
            hasUpper = true;
            break;
        }
    }
    if (!hasUpper) {
        std::cout << "Error: Must contain Uppercase letter" << std::endl;
        return false;
    }
    
    bool hasLower = false;
    for (char c : password) {
        if (std::islower(c)) {
            hasLower = true;
            break;
        }
    }
    if (!hasLower) {
        std::cout << "Eror: Must contain Lowercase letter" << std::endl;
        return false;
    }
    bool hasDigit = false;
    for (char c : password) {
        if (std::isdigit(c)) {
            hasDigit = true;
            break;
        }
    }
    if (!hasDigit) {
        std::cout << "Error: Must contain Digit" << std::endl;
        return false;
    }
    return true;
}
int main() {
    
    std::string password;
    std::cout << "Enter Password: ";
    std::getline(std::cin, password);
    
    if (isValidPassword(password)) {
        std::cout << "Password is Valid!" << std::endl;
    } else {
        std::cout << "Password is Invalid!, Please check your Password..." << std::endl; 
    }
    return 0;
}