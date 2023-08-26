#pragma once

enum Loglevel {
  kError = 3,
  kWarn = 4,
  kInfo = 6,
  kDebug = 7,
};

void SetLogLevel(Loglevel level);

int Log(Loglevel level, const char* format, ...);