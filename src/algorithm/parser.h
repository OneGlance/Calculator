﻿#pragma once

#include "token.h"

#include <string>
#include <tuple>

std::tuple<double, std::string> parseNum(std::string input);

std::tuple<Token, std::string> parseToken(std::string input);

//解析因子
std::tuple<double, std::string> parseFactor(std::string input);

//解析项
std::tuple<double, std::string> parseTerm(std::string input);

//解析表达式
std::tuple<double, std::string> parseExpression(std::string input);