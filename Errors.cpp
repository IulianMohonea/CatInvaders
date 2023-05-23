#include "Errors.h"
playerErrors::playerErrors(const std::string& mesaj) :
Errors(std::string("Miscare invalida: ") + mesaj + '\n') {}

fireErrors::fireErrors(const std::string& mesaj) :
Errors(std::string("Timp prea putin intre gloante: ") + mesaj + '\n') {}