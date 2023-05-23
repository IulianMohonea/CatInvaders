#include "Errors.h"
playerErrors::playerErrors(const std::string& mesaj) :
Errors("Miscare invalida: " + mesaj + '\n') {}

fireErrors::fireErrors(const std::string& mesaj) :
Errors("Timp prea putin intre gloante: " + mesaj + '\n') {}