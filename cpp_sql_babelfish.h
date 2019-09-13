#ifndef CPP_SQL_BABELFISH_H
#define CPP_SQL_BABELFISH_H

#include <ctime>
#include <iomanip>
#include <string>

#include "babelfish.h"

class CPPSQLBabelFish : BabelFish<time_t, std::string> {
  public:
    std::string convertDateTime(const time_t& input);
    time_t parseDateTime(const std::string& sql_dt);
};

#endif
