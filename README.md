Desktop Login System

A lightweight and secure desktop login system developed in C++ using the Qt framework. Designed for Linux environments, this project demonstrates a modular approach to building GUI-based applications with a focus on usability and security.

Features

User Authentication: Implements a secure and efficient login system for desktop applications.
Qt-Powered Interface: Utilizes Qt's tools for a responsive and intuitive graphical user interface.
Modular Architecture: Easily extensible for future features, such as multi-user support or external authentication integration (e.g., LDAP or OAuth).
Linux Optimization: Designed natively for Linux, ensuring compatibility and performance.

Getting Started

Prerequisites

Linux Distribution: Tested on Ubuntu 22.04 (but compatible with most distributions).
Qt Framework: Install Qt (version 5 or higher) using your package manager or from the Qt official site.
C++ Compiler: GCC or Clang with C++17 or higher support.

Installation
Clone this repository:

bash
Copy code
git clone https://github.com/Stelios-X/Login-System.git  
cd desktop-login-system  
Build the project:

bash
Copy code
mkdir build  
cd build  
qmake ../desktop-login-system.pro  
make  

Run the application:

bash
Copy code
./desktop-login-system  

Usage

Launch the application.
Enter your username and password to authenticate.
If authentication is successful, access to the system is granted.
Future enhancements (coming soon):

Multi-user support.
Password encryption using bcrypt.
Integration with external authentication services.
Project Structure
plaintext
Copy code
desktop-login-system/  
├── src/            # Source files  
├── include/        # Header files  
├── ui/             # Qt UI files  
├── resources/      # Icons and other assets  
├── build/          # Build directory (ignored in .gitignore)  
├── desktop-login-system.pro  # Qt project file  
└── README.md       # Project documentation  
Contributions
Contributions are welcome! If you’d like to improve the project, feel free to fork the repository, make changes, and submit a pull request.

License
This project is licensed under the MIT License - see the LICENSE file for details.

Contact
For any questions or feedback, feel free to reach out at your.ebobby@outlook.com.

