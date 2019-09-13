#include "cpp_sql_babelfish.h"

std::string CPPSQLBabelFish::convertDateTime(const time_t& dt) {
  const struct tm dt_tm = *(gmtime(&dt));
  const int timestamp_length = 20;
  char dt_char [timestamp_length];
  strftime(&dt_char[0], timestamp_length, "%Y-%m-%d %H:%M:%S", &dt_tm);
  return std::string(dt_char);
}

time_t CPPSQLBabelFish::parseDateTime(const std::string& sql_dt) {
  struct std::tm dt_tm;
  std::istringstream ss(sql_dt);
  ss >> std::get_time(&dt_tm, "%Y-%m-%d %H:%M:%S");
  return timegm(&dt_tm);
}
