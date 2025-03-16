#include <iostream>
#include <cstdlib>

int main() {
    // Initialize a Git repository
    std::system("git init");

    // Add all files to the staging area
    std::system("git add .");

    // Commit the files with a message
    std::system("git commit -m \"Initial commit\"");

    std::cout << "Git repository initialized and files committed!" << std::endl;

    return 0;
}
