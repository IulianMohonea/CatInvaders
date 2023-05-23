#include <stdexcept>

class Errors :public std::runtime_error {
    using std::runtime_error::runtime_error;
};

class playerErrors :public Errors{
public:
    explicit playerErrors(const std::string& mesaj);
};

class fireErrors : public Errors{
public:
    explicit fireErrors(const std::string& mesaj);
};

