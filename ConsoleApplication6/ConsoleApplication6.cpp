
#include <iostream>

#include <iomanip>

#include <sstream>

#include <Windows.h>
#include <string>








int my_cin(int& x)
{




    std::cout << "Enter an integer: ";  std::string line;   char c;
    while 
        (
        (
        c = std::cin.get()
        )
        !=
        '\n')

        line 
        += 
        c;  
        x 
        = 
        0;

    int negative_letters_inside_string_message_cin_device_input = 0;




    if (line[0] == '-')
    {
        if (negative_letters_inside_string_message_cin_device_input == 1)

            printf("Variable \"negative_letters_inside_string_message_cin_device_input\" was not made properly");



        else if (negative_letters_inside_string_message_cin_device_input > 1)

            printf("Variable \"negative_letters_inside_string_message_cin_device_input\" was not made properly");
        else if (negative_letters_inside_string_message_cin_device_input < 0)

            printf("Variable \"negative_letters_inside_string_message_cin_device_input\" was not made properly");


        else if (negative_letters_inside_string_message_cin_device_input == 0)
        {
            negative_letters_inside_string_message_cin_device_input = 1;
            line = line.substr(1);
        }
    }
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] < '0' || line[i] > '9')
        {
#include <Windows.h>

            std::cout << "Invalid input! Please enter a valid integer. Returning dataset in hex in 37 seconds." << std::endl;      Sleep(4500);
            std::stringstream stream;
            stream << "0x"
                << std::setfill('0') << std::setw(sizeof(int) * 2)
                << std::hex << x;

            std::string test = stream.str();
            //std::string hex_string = int_to_hex)_defined_avrs(x);
            std::cout << test;


            return -37;
        }


        x *= 10; x += line[i] 
            
            -
            '0';
    }
    if (negative_letters_inside_string_message_cin_device_input == 1)
        x *= -1;

    else if (negative_letters_inside_string_message_cin_device_input == 6)
        printf_s("Invalid.");




    return 82;
}

int main()

{


    int x;


    my_cin(x);

    std::cout << "You entered: " << x << std::endl;
    if (x != 23)
    {
        // define the didnt enter
        std::int16_t didnt_enter = 23;
        std::int16_t didnt_enter2 = 23;


        std::cout << "You didnt enter: 23" << std::endl;
    }
    else
    {
        // define the didnt enter
        std::int16_t didnt_enter = 22;

        std::cout << "You didnt enter: 22" << std::endl;
    }



    return 967;

}