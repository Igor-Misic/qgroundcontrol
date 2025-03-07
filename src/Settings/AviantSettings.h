/****************************************************************************
 *
 *   (c) 2009-2022 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

/// @file
/// @brief Branding settings

#pragma once

#include "SettingsGroup.h"

/// Simple branding. Allows to define icon to use on main toolbar.
class AviantSettings : public SettingsGroup
{
    Q_OBJECT
public:
    AviantSettings(QObject* parent = nullptr);
    DEFINE_SETTING_NAME_GROUP()
    DEFINE_SETTINGFACT(showTrafficIndicators)
    DEFINE_SETTINGFACT(showWinchControlMenu)
    DEFINE_SETTINGFACT(horizontalConflictDistance)
    DEFINE_SETTINGFACT(verticalConflictDistance)
    DEFINE_SETTINGFACT(rssiWarning)
    DEFINE_SETTINGFACT(rssiAlert)
    DEFINE_SETTINGFACT(missionToolsInsecureHttps)
    DEFINE_SETTINGFACT(missionToolsUrl)
    DEFINE_SETTINGFACT(missionToolsToken)
};
