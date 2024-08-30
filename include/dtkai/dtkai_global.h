// SPDX-FileCopyrightText: 2024 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef DTKAI_GLOBAL_H
#define DTKAI_GLOBAL_H

#define DAI_NAMESPACE Dtk::AI

#define DAI_USE_NAMESPACE using namespace DAI_NAMESPACE;

#define DAI_BEGIN_NAMESPACE \
    namespace Dtk {         \
    namespace AI {
#define DAI_END_NAMESPACE \
    }                     \
    }

#endif   // DTKAI_GLOBAL_H
