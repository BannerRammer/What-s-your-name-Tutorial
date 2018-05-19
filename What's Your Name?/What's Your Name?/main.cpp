//
//  main.cpp
//  What's Your Name?
//
//  Created by Lorenzo Tablante on 19/5/18.
//  Copyright © 2018 BlastCorp. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main () {
    string username;
    std::cout<<"What's your name: "; cin >> username;
    std::cout<<"Hello " << username << endl;
    return 0;
}
