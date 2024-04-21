std::string seconds_to_string_dhms(uint32_t seconds) {

      int days = 0;
      int hours = 0;
      int minuts = 0;
      if (seconds > 86399) {
        days = trunc(seconds / 86400);
        seconds = seconds - (days * 86400);
      }
      if (seconds > 3599) {
        hours = trunc(seconds / 3600);
        seconds = seconds - (hours * 3600);
      }
      if (seconds > 59) {
        minuts = trunc(seconds / 60);
        seconds = seconds - (minuts * 60);
      }
      char buffer[14];
      sprintf(buffer, "%uд %02u:%02u:%02u", days, hours, minuts, seconds);
      return {buffer};
}

std::string seconds_to_string_hms(uint32_t seconds) {

      int hours = 0;
      int minuts = 0;
      if (seconds > 3599) {
        hours = trunc(seconds / 3600);
        seconds = seconds - (hours * 3600);
      }
      if (seconds > 59) {
        minuts = trunc(seconds / 60);
        seconds = seconds - (minuts * 60);
      }
      char buffer[10];
      sprintf(buffer, "%u:%02u:%02u", hours, minuts, seconds);
      return {buffer};
}