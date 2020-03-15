#include <string>

namespace tark
{
namespace utils
{

class StringBuilder
{

public:

    enum StringType {
        HelloWorld,
        Random,
        Alphanumeric,
        ASCII,
        Unicode
    };

    std::string BuildString(StringType type);

private:
    std::string result_; 

};

}
}
