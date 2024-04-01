#include <iostream>
#include <map>
#include <string>

int main() {
    // Define a map to store phonebook entries (name -> phone number)
    std::map<std::string, std::string> phonebook;

    // Add some entries to the phonebook
    phonebook["Alice"] = "123-456-7890";
    phonebook["Bob"] = "987-654-3210";
    phonebook["Charlie"] = "555-555-5555";

    // Display the phonebook
    std::cout << "Phonebook Entries:" << std::endl;
    for (const auto& entry : phonebook) {
        std::cout << "Name: " << entry.first << ", Phone: " << entry.second << std::endl;
    }

    // Search for a specific entry
    std::string nameToFind = "Bob";
    auto it = phonebook.find(nameToFind);
    if (it != phonebook.end()) {
        std::cout << "Phone number for " << nameToFind << ": " << it->second << std::endl;
    } else {
        std::cout << "Entry for " << nameToFind << " not found in the phonebook." << std::endl;
    }

    // Add a new entry to the phonebook
    std::string newName = "David";
    std::string newPhoneNumber = "999-888-7777";
    phonebook[newName] = newPhoneNumber;

    // Display the updated phonebook
    std::cout << "\nUpdated Phonebook Entries:" << std::endl;
    for (const auto& entry : phonebook) {
        std::cout << "Name: " << entry.first << ", Phone: " << entry.second << std::endl;
    }

    return 0;
}
