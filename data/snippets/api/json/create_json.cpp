#include "splashkit.h"
#include <string>

using namespace std;

int main()
{
    //Create the JSON object.
    json json_object = create_json();

    //Set "name" to "SplashKit"
    json_set_string(json_object, "name", "SplashKit");

    //Set "type" to "A programming library"
    json_set_string(json_object, "type", "A programming library");

    //Set "age" to 2.
    json_set_number(json_object, "age", 2);

    //Access each of the stored keys.
    write_line("My name is: " + json_read_string(json_object, "name"));
    write_line("My type is: " + json_read_string(json_object, "type"));
    write_line("I am " + to_string( json_read_number(json_object, "age") ) + " years old.");

    //Ensure you free the resources after completion.
    free_json(json_object);

    return 0;
}