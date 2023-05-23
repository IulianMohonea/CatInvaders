#include <stdexcept>

class Errors :public std::runtime_error {
    using std::runtime_error::runtime_error;
};

class playerErrors :public Errors{
private:
    const std::string replica = "Miscare invalida: ";
public:
    explicit playerErrors(std::string& mesaj);
};

class fireErrors : public Errors{
private:
    const std::string replica2 = "Timp prea putin intre gloante: ";
public:
    explicit fireErrors(std::string& mesaj);
};

