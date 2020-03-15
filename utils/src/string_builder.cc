#include "string_builder.h"

namespace tark
{
namespace utils
{

const std::string kHelloWorld = "Hello World!";

std::string StringBuilder::BuildString(StringType type)
{
    switch (type)
    {
    case StringType::HelloWorld:
        return kHelloWorld;
    
    default:
        break;
    }

    return "";
}

}
}