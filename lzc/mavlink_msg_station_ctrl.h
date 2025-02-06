#pragma once
// MESSAGE STATION_CTRL PACKING

#define MAVLINK_MSG_ID_STATION_CTRL 20001


typedef struct __mavlink_station_ctrl_t {
 uint8_t flags; /*<  Station control bitmap flags*/
} mavlink_station_ctrl_t;

#define MAVLINK_MSG_ID_STATION_CTRL_LEN 1
#define MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN 1
#define MAVLINK_MSG_ID_20001_LEN 1
#define MAVLINK_MSG_ID_20001_MIN_LEN 1

#define MAVLINK_MSG_ID_STATION_CTRL_CRC 35
#define MAVLINK_MSG_ID_20001_CRC 35



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_STATION_CTRL { \
    20001, \
    "STATION_CTRL", \
    1, \
    {  { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_station_ctrl_t, flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_STATION_CTRL { \
    "STATION_CTRL", \
    1, \
    {  { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_station_ctrl_t, flags) }, \
         } \
}
#endif

/**
 * @brief Pack a station_ctrl message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param flags  Station control bitmap flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_station_ctrl_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_STATION_CTRL_LEN];
    _mav_put_uint8_t(buf, 0, flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_STATION_CTRL_LEN);
#else
    mavlink_station_ctrl_t packet;
    packet.flags = flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_STATION_CTRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_STATION_CTRL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN, MAVLINK_MSG_ID_STATION_CTRL_LEN, MAVLINK_MSG_ID_STATION_CTRL_CRC);
}

/**
 * @brief Pack a station_ctrl message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param flags  Station control bitmap flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_station_ctrl_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_STATION_CTRL_LEN];
    _mav_put_uint8_t(buf, 0, flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_STATION_CTRL_LEN);
#else
    mavlink_station_ctrl_t packet;
    packet.flags = flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_STATION_CTRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_STATION_CTRL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN, MAVLINK_MSG_ID_STATION_CTRL_LEN, MAVLINK_MSG_ID_STATION_CTRL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN, MAVLINK_MSG_ID_STATION_CTRL_LEN);
#endif
}

/**
 * @brief Pack a station_ctrl message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flags  Station control bitmap flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_station_ctrl_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_STATION_CTRL_LEN];
    _mav_put_uint8_t(buf, 0, flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_STATION_CTRL_LEN);
#else
    mavlink_station_ctrl_t packet;
    packet.flags = flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_STATION_CTRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_STATION_CTRL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN, MAVLINK_MSG_ID_STATION_CTRL_LEN, MAVLINK_MSG_ID_STATION_CTRL_CRC);
}

/**
 * @brief Encode a station_ctrl struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param station_ctrl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_station_ctrl_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_station_ctrl_t* station_ctrl)
{
    return mavlink_msg_station_ctrl_pack(system_id, component_id, msg, station_ctrl->flags);
}

/**
 * @brief Encode a station_ctrl struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param station_ctrl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_station_ctrl_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_station_ctrl_t* station_ctrl)
{
    return mavlink_msg_station_ctrl_pack_chan(system_id, component_id, chan, msg, station_ctrl->flags);
}

/**
 * @brief Encode a station_ctrl struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param station_ctrl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_station_ctrl_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_station_ctrl_t* station_ctrl)
{
    return mavlink_msg_station_ctrl_pack_status(system_id, component_id, _status, msg,  station_ctrl->flags);
}

/**
 * @brief Send a station_ctrl message
 * @param chan MAVLink channel to send the message
 *
 * @param flags  Station control bitmap flags
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_station_ctrl_send(mavlink_channel_t chan, uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_STATION_CTRL_LEN];
    _mav_put_uint8_t(buf, 0, flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_STATION_CTRL, buf, MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN, MAVLINK_MSG_ID_STATION_CTRL_LEN, MAVLINK_MSG_ID_STATION_CTRL_CRC);
#else
    mavlink_station_ctrl_t packet;
    packet.flags = flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_STATION_CTRL, (const char *)&packet, MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN, MAVLINK_MSG_ID_STATION_CTRL_LEN, MAVLINK_MSG_ID_STATION_CTRL_CRC);
#endif
}

/**
 * @brief Send a station_ctrl message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_station_ctrl_send_struct(mavlink_channel_t chan, const mavlink_station_ctrl_t* station_ctrl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_station_ctrl_send(chan, station_ctrl->flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_STATION_CTRL, (const char *)station_ctrl, MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN, MAVLINK_MSG_ID_STATION_CTRL_LEN, MAVLINK_MSG_ID_STATION_CTRL_CRC);
#endif
}

#if MAVLINK_MSG_ID_STATION_CTRL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_station_ctrl_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_STATION_CTRL, buf, MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN, MAVLINK_MSG_ID_STATION_CTRL_LEN, MAVLINK_MSG_ID_STATION_CTRL_CRC);
#else
    mavlink_station_ctrl_t *packet = (mavlink_station_ctrl_t *)msgbuf;
    packet->flags = flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_STATION_CTRL, (const char *)packet, MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN, MAVLINK_MSG_ID_STATION_CTRL_LEN, MAVLINK_MSG_ID_STATION_CTRL_CRC);
#endif
}
#endif

#endif

// MESSAGE STATION_CTRL UNPACKING


/**
 * @brief Get field flags from station_ctrl message
 *
 * @return  Station control bitmap flags
 */
static inline uint8_t mavlink_msg_station_ctrl_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a station_ctrl message into a struct
 *
 * @param msg The message to decode
 * @param station_ctrl C-struct to decode the message contents into
 */
static inline void mavlink_msg_station_ctrl_decode(const mavlink_message_t* msg, mavlink_station_ctrl_t* station_ctrl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    station_ctrl->flags = mavlink_msg_station_ctrl_get_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_STATION_CTRL_LEN? msg->len : MAVLINK_MSG_ID_STATION_CTRL_LEN;
        memset(station_ctrl, 0, MAVLINK_MSG_ID_STATION_CTRL_LEN);
    memcpy(station_ctrl, _MAV_PAYLOAD(msg), len);
#endif
}
