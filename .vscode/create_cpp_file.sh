#!/bin/bash

# Prompt for the file name
echo "Enter the filename (without extension): "
read filename

# Create a C++ file with the entered name
file="${filename}.cpp"

# Create the file with basic C++ boilerplate code
cat > "$file" <<EOL
#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
  
    return 0;
}
EOL

echo "C++ file $file created with boilerplate code."
