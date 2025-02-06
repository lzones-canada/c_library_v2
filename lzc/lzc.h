/** @file
 *  @brief MAVLink comm protocol generated from lzc.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_LZC_H
#define MAVLINK_LZC_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_LZC.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_LZC_XML_HASH -9096814090859213131

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{20000, 34, 4, 4, 0, 0, 0}, {20001, 35, 1, 1, 0, 0, 0}, {20050, 144, 69, 69, 0, 0, 0}, {20051, 98, 8, 16, 0, 0, 0}, {20052, 16, 1, 1, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_LZC

// ENUM DEFINITIONS


/** @brief These encode the payload control flags and sent as part of the MAV_CMD_PAYLOAD_CTRL message. */
#ifndef HAVE_ENUM_PAYLOAD_CONTROL_FLAGS
#define HAVE_ENUM_PAYLOAD_CONTROL_FLAGS
typedef enum PAYLOAD_CONTROL_FLAGS
{
   PAYLOAD_CONTROL_FLAGS_RESERVED1=1, /* Reserved - Future use. | */
   PAYLOAD_CONTROL_FLAGS_RESERVED2=2, /* Reserved - Future use. | */
   PAYLOAD_CONTROL_FLAGS_RESERVED3=4, /* Reserved - Future use. | */
   PAYLOAD_CONTROL_FLAGS_RESERVED4=8, /* Reserved - Future use. | */
   PAYLOAD_CONTROL_FLAGS_RESERVED5=16, /* Reserved - Future use. | */
   PAYLOAD_CONTROL_SWEEP_WING_VALUE=32, /* Valid value in command when bit set ON | */
   PAYLOAD_CONTROL_SWEEP_WING_CALIBRATE=64, /* Valid value in command when bit set ON | */
   PAYLOAD_CONTROL_SET_BEACON_LIGHTS=128, /* Valid value in command when bit set ON | */
   PAYLOAD_CONTROL_FLAGS_ENUM_END=129, /*  | */
} PAYLOAD_CONTROL_FLAGS;
#endif

/** @brief These encode the station control flags and sent as part of the MAV_CMD_STATION_CTRL message. */
#ifndef HAVE_ENUM_STATION_CONTROL_FLAGS
#define HAVE_ENUM_STATION_CONTROL_FLAGS
typedef enum STATION_CONTROL_FLAGS
{
   STATION_CONTROL_FLAGS_RESERVED1=1, /* Reserved - Future use. | */
   STATION_CONTROL_FLAGS_RESERVED2=2, /* Reserved - Future use. | */
   STATION_CONTROL_FLAGS_RESERVED3=4, /* Reserved - Future use. | */
   STATION_CONTROL_FLAGS_RESERVED4=8, /* Reserved - Future use. | */
   STATION_CONTROL_FLAGS_RESERVED5=16, /* Reserved - Future use. | */
   STATION_CONTROL_FLAGS_MODEM_BOOST=32, /* Reserved - Future use. | */
   STATION_CONTROL_FLAGS_TX_STBD=64, /* Transmit data out Stbd Modem | */
   STATION_CONTROL_FLAGS_TX_PORT=128, /* Transmit data out Port Modem | */
   STATION_CONTROL_FLAGS_ENUM_END=129, /*  | */
} STATION_CONTROL_FLAGS;
#endif

/** @brief These encode the payload status and sent as part of the PAYLOAD_STATUS message. */
#ifndef HAVE_ENUM_PAYLOAD_STATUS_FLAGS
#define HAVE_ENUM_PAYLOAD_STATUS_FLAGS
typedef enum PAYLOAD_STATUS_FLAGS
{
   PAYLOAD_STATUS_FLAGS_RESERVED2=1, /* Reserved - Future use. | */
   PAYLOAD_STATUS_FLAGS_MAX14830_HEALTH=2, /* Max14830 Chip - Healthy when set. | */
   PAYLOAD_STATUS_FLAGS_SWEEP_WING_LIMIT=4, /* Sweep Wing Limit Status (Pin 54) - on when set. | */
   PAYLOAD_STATUS_FLAGS_HSTM_POWER=8, /* HSTM Power status (Pin 105) - on when set. | */
   PAYLOAD_STATUS_FLAGS_BEACON_LIGHTS=16, /* Beacon lights status (Pin 102) - on when set. | */
   PAYLOAD_STATUS_FLAGS_POSITION_LIGHTS=32, /* Position lights status (Pin 101) - on when set. | */
   PAYLOAD_STATUS_FLAGS_BALLOON_RELEASE=64, /* Balloon release status (Pin 104) - on when set. | */
   PAYLOAD_STATUS_FLAGS_PARACHUTE_RELEASE=128, /* Parachute Deploy status (Pin 103) - on when set. | */
   PAYLOAD_STATUS_FLAGS_ENUM_END=129, /*  | */
} PAYLOAD_STATUS_FLAGS;
#endif

/** @brief These encode the station status and sent as part of the STATION_STATUS message. */
#ifndef HAVE_ENUM_STATION_STATUS_FLAGS
#define HAVE_ENUM_STATION_STATUS_FLAGS
typedef enum STATION_STATUS_FLAGS
{
   STATION_STATUS_FLAGS_RESERVED1=1, /* Reserved - Future use. | */
   STATION_STATUS_FLAGS_RESERVED2=2, /* Reserved - Future use. | */
   STATION_STATUS_FLAGS_RESERVED3=4, /* Reserved - Future use. | */
   STATION_STATUS_FLAGS_RESERVED4=8, /* Reserved - Future use. | */
   STATION_STATUS_FLAGS_RESERVED5=16, /* Reserved - Future use. | */
   STATION_STATUS_FLAGS_MODEM_BOOST=32, /* Modem boost status - on when set. | */
   STATION_STATUS_FLAGS_TX_STBD=64, /* Tx Stbd modem status - on when set. | */
   STATION_STATUS_FLAGS_TX_PORT=128, /* Tx Port modem status - on when set. | */
   STATION_STATUS_FLAGS_ENUM_END=129, /*  | */
} STATION_STATUS_FLAGS;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_payload_ctrl.h"
#include "./mavlink_msg_station_ctrl.h"
#include "./mavlink_msg_imet_sensor_raw.h"
#include "./mavlink_msg_payload_status.h"
#include "./mavlink_msg_station_status.h"

// base include



#if MAVLINK_LZC_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_PAYLOAD_CTRL, MAVLINK_MESSAGE_INFO_STATION_CTRL, MAVLINK_MESSAGE_INFO_IMET_SENSOR_RAW, MAVLINK_MESSAGE_INFO_PAYLOAD_STATUS, MAVLINK_MESSAGE_INFO_STATION_STATUS}
# define MAVLINK_MESSAGE_NAMES {{ "IMET_SENSOR_RAW", 20050 }, { "PAYLOAD_CTRL", 20000 }, { "PAYLOAD_STATUS", 20051 }, { "STATION_CTRL", 20001 }, { "STATION_STATUS", 20052 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_LZC_H
