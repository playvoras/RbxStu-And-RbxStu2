//
// Created by Dottik on 18/8/2024.
//
#pragma once
#include "Environment/EnvironmentManager.hpp"


class Globals final : public Library {
public:
    std::string GetLibraryName() override;
    luaL_Reg *GetLibraryFunctions() override;
};
