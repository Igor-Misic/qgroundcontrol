/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQuick          2.3
import QtLocation       5.3
import QtPositioning    5.3

import QGroundControl           1.0
import QGroundControl.Palette   1.0

/// The MissionLineView control is used to add lines between mission items
MapItemView {
    property bool showSpecialVisual: false
    delegate: MapPolyline {
        line.width: 3
        line.color: object && showSpecialVisual && object.specialVisual ? "green" : "#be781c"                           // Hack, can't get palette to work in here
        z:          QGroundControl.zOrderWaypointLines
        path:       object && object.coordinate1.isValid && object.coordinate2.isValid ? [ object.coordinate1, object.coordinate2 ] : []
 
        property bool _terrainCollision:    object && object.terrainCollision
        property bool _showSpecialVisual:   object && showSpecialVisual && object.specialVisual
    }
}
