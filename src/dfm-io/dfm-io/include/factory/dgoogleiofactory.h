/*
 * Copyright (C) 2020 ~ 2021 Uniontech Software Technology Co., Ltd.
 *
 * Author:     lanxuesong<lanxuesong@uniontech.com>
 *
 * Maintainer: max-lv<lvwujun@uniontech.com>
 *             xushitong<xushitong@uniontech.com>
 *             zhangsheng<zhangsheng@uniontech.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DGOOGLEIOFACTORY_H
#define DGOOGLEIOFACTORY_H

#include "dfmio_global.h"

#include "core/diofactory.h"

BEGIN_IO_NAMESPACE

class DGoogleIOFactory : public DIOFactory
{
public:
    explicit DGoogleIOFactory(const QUrl &uri);
    ~DGoogleIOFactory();
};

END_IO_NAMESPACE

#endif // DGOOGLEIOFACTORY_H
