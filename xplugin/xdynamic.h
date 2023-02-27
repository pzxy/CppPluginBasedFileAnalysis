// Copyright (c) 2017-2018 Telos Foundation & contributors
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#pragma once

#include "xexport.h"

typedef void * HLIB;
class DynamicLib {
public:
    DynamicLib(void);
    ~DynamicLib(void);

    const char * GetName() const;

    // 装载动态库
    bool LoadLib(const char * strLibName);

    void * GetSymbolAddress(const char * strSymbolName) const;

    void FreeLib();

private:
    HLIB m_hDynLib;       // 动态库句柄
    char * m_pszLibName;  // 动态库名字
};
