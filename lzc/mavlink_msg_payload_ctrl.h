#pragma once
// MESSAGE PAYLOAD_CTRL PACKING

#define MAVLINK_MSG_ID_PAYLOAD_CTRL 20000


typedef struct __mavlink_payload_ctrl_t {
 uint8_t flags; /*<  Payload control bitmap flags*/
 uint8_t beacon_lights; /*<  Beacon lights payload*/
 uint8_t sweep_wing_calibrate; /*<  Sweep wing calibration flag*/
 uint8_t sweep_wing_value; /*<  Seep wing value*/
} mavlink_payload_ctrl_t;

#define MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN 4
#define MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN 4
#define MAVLINK_MSG_ID_20000_LEN 4
#define MAVLINK_MSG_ID_20000_MIN_LEN 4

#define MAVLINK_MSG_ID_PAYLOAD_CTRL_CRC 34
#define MAVLINK_MSG_ID_20000_CRC 34



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PAYLOAD_CTRL { \
    20000, \
    "PAYLOAD_CTRL", \
    4, \
    {  { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_payload_ctrl_t, flags) }, \
         { "beacon_lights", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_payload_ctrl_t, beacon_lights) }, \
         { "sweep_wing_calibrate", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_payload_ctrl_t, sweep_wing_calibrate) }, \
         { "sweep_wing_value", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_payload_ctrl_t, sweep_wing_value) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PAYLOAD_CTRL { \
    "PAYLOAD_CTRL", \
    4, \
    {  { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_payload_ctrl_t, flags) }, \
         { "beacon_lights", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_payload_ctrl_t, beacon_lights) }, \
         { "sweep_wing_calibrate", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_payload_ctrl_t, sweep_wing_calibrate) }, \
         { "sweep_wing_value", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_payload_ctrl_t, sweep_wing_value) }, \
         } \
}
#endif

/**
 * @brief Pack a payload_ctrl message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param flags  Payload control bitmap flags
 * @param beacon_lights  Beacon lights payload
 * @param sweep_wing_calibrate  Sweep wing calibration flag
 * @param sweep_wing_value  Seep wing value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_ctrl_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t flags, uint8_t beacon_lights, uint8_t sweep_wing_calibrate, uint8_t sweep_wing_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN];
    _mav_put_uint8_t(buf, 0, flags);
    _mav_put_uint8_t(buf, 1, beacon_lights);
    _mav_put_uint8_t(buf, 2, sweep_wing_calibrate);
    _mav_put_uint8_t(buf, 3, sweep_wing_value);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN);
#else
    mavlink_payload_ctrl_t packet;
    packet.flags = flags;
    packet.beacon_lights = beacon_lights;
    packet.sweep_wing_calibrate = sweep_wing_calibrate;
    packet.sweep_wing_value = sweep_wing_value;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_CTRL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_CRC);
}

/**
 * @brief Pack a payload_ctrl message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param flags  Payload control bitmap flags
 * @param beacon_lights  Beacon lights payload
 * @param sweep_wing_calibrate  Sweep wing calibration flag
 * @param sweep_wing_value  Seep wing value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_ctrl_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t flags, uint8_t beacon_lights, uint8_t sweep_wing_calibrate, uint8_t sweep_wing_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN];
    _mav_put_uint8_t(buf, 0, flags);
    _mav_put_uint8_t(buf, 1, beacon_lights);
    _mav_put_uint8_t(buf, 2, sweep_wing_calibrate);
    _mav_put_uint8_t(buf, 3, sweep_wing_value);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN);
#else
    mavlink_payload_ctrl_t packet;
    packet.flags = flags;
    packet.beacon_lights = beacon_lights;
    packet.sweep_wing_calibrate = sweep_wing_calibrate;
    packet.sweep_wing_value = sweep_wing_value;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_CTRL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN);
#endif
}

/**
 * @brief Pack a payload_ctrl message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flags  Payload control bitmap flags
 * @param beacon_lights  Beacon lights payload
 * @param sweep_wing_calibrate  Sweep wing calibration flag
 * @param sweep_wing_value  Seep wing value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_ctrl_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t flags,uint8_t beacon_lights,uint8_t sweep_wing_calibrate,uint8_t sweep_wing_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN];
    _mav_put_uint8_t(buf, 0, flags);
    _mav_put_uint8_t(buf, 1, beacon_lights);
    _mav_put_uint8_t(buf, 2, sweep_wing_calibrate);
    _mav_put_uint8_t(buf, 3, sweep_wing_value);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN);
#else
    mavlink_payload_ctrl_t packet;
    packet.flags = flags;
    packet.beacon_lights = beacon_lights;
    packet.sweep_wing_calibrate = sweep_wing_calibrate;
    packet.sweep_wing_value = sweep_wing_value;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_CTRL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_CRC);
}

/**
 * @brief Encode a payload_ctrl struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param payload_ctrl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_ctrl_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_payload_ctrl_t* payload_ctrl)
{
    return mavlink_msg_payload_ctrl_pack(system_id, component_id, msg, payload_ctrl->flags, payload_ctrl->beacon_lights, payload_ctrl->sweep_wing_calibrate, payload_ctrl->sweep_wing_value);
}

/**
 * @brief Encode a payload_ctrl struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload_ctrl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_ctrl_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_payload_ctrl_t* payload_ctrl)
{
    return mavlink_msg_payload_ctrl_pack_chan(system_id, component_id, chan, msg, payload_ctrl->flags, payload_ctrl->beacon_lights, payload_ctrl->sweep_wing_calibrate, payload_ctrl->sweep_wing_value);
}

/**
 * @brief Encode a payload_ctrl struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param payload_ctrl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_ctrl_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_payload_ctrl_t* payload_ctrl)
{
    return mavlink_msg_payload_ctrl_pack_status(system_id, component_id, _status, msg,  payload_ctrl->flags, payload_ctrl->beacon_lights, payload_ctrl->sweep_wing_calibrate, payload_ctrl->sweep_wing_value);
}

/**
 * @brief Send a payload_ctrl message
 * @param chan MAVLink channel to send the message
 *
 * @param flags  Payload control bitmap flags
 * @param beacon_lights  Beacon lights payload
 * @param sweep_wing_calibrate  Sweep wing calibration flag
 * @param sweep_wing_value  Seep wing value
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_payload_ctrl_send(mavlink_channel_t chan, uint8_t flags, uint8_t beacon_lights, uint8_t sweep_wing_calibrate, uint8_t sweep_wing_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN];
    _mav_put_uint8_t(buf, 0, flags);
    _mav_put_uint8_t(buf, 1, beacon_lights);
    _mav_put_uint8_t(buf, 2, sweep_wing_calibrate);
    _mav_put_uint8_t(buf, 3, sweep_wing_value);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_CTRL, buf, MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_CRC);
#else
    mavlink_payload_ctrl_t packet;
    packet.flags = flags;
    packet.beacon_lights = beacon_lights;
    packet.sweep_wing_calibrate = sweep_wing_calibrate;
    packet.sweep_wing_value = sweep_wing_value;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_CTRL, (const char *)&packet, MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_CRC);
#endif
}

/**
 * @brief Send a payload_ctrl message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_payload_ctrl_send_struct(mavlink_channel_t chan, const mavlink_payload_ctrl_t* payload_ctrl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_payload_ctrl_send(chan, payload_ctrl->flags, payload_ctrl->beacon_lights, payload_ctrl->sweep_wing_calibrate, payload_ctrl->sweep_wing_value);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_CTRL, (const char *)payload_ctrl, MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_CRC);
#endif
}

#if MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_payload_ctrl_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t flags, uint8_t beacon_lights, uint8_t sweep_wing_calibrate, uint8_t sweep_wing_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, flags);
    _mav_put_uint8_t(buf, 1, beacon_lights);
    _mav_put_uint8_t(buf, 2, sweep_wing_calibrate);
    _mav_put_uint8_t(buf, 3, sweep_wing_value);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_CTRL, buf, MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_CRC);
#else
    mavlink_payload_ctrl_t *packet = (mavlink_payload_ctrl_t *)msgbuf;
    packet->flags = flags;
    packet->beacon_lights = beacon_lights;
    packet->sweep_wing_calibrate = sweep_wing_calibrate;
    packet->sweep_wing_value = sweep_wing_value;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_CTRL, (const char *)packet, MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN, MAVLINK_MSG_ID_PAYLOAD_CTRL_CRC);
#endif
}
#endif

#endif

// MESSAGE PAYLOAD_CTRL UNPACKING


/**
 * @brief Get field flags from payload_ctrl message
 *
 * @return  Payload control bitmap flags
 */
static inline uint8_t mavlink_msg_payload_ctrl_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field beacon_lights from payload_ctrl message
 *
 * @return  Beacon lights payload
 */
static inline uint8_t mavlink_msg_payload_ctrl_get_beacon_lights(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field sweep_wing_calibrate from payload_ctrl message
 *
 * @return  Sweep wing calibration flag
 */
static inline uint8_t mavlink_msg_payload_ctrl_get_sweep_wing_calibrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field sweep_wing_value from payload_ctrl message
 *
 * @return  Seep wing value
 */
static inline uint8_t mavlink_msg_payload_ctrl_get_sweep_wing_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Decode a payload_ctrl message into a struct
 *
 * @param msg The message to decode
 * @param payload_ctrl C-struct to decode the message contents into
 */
static inline void mavlink_msg_payload_ctrl_decode(const mavlink_message_t* msg, mavlink_payload_ctrl_t* payload_ctrl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    payload_ctrl->flags = mavlink_msg_payload_ctrl_get_flags(msg);
    payload_ctrl->beacon_lights = mavlink_msg_payload_ctrl_get_beacon_lights(msg);
    payload_ctrl->sweep_wing_calibrate = mavlink_msg_payload_ctrl_get_sweep_wing_calibrate(msg);
    payload_ctrl->sweep_wing_value = mavlink_msg_payload_ctrl_get_sweep_wing_value(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN? msg->len : MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN;
        memset(payload_ctrl, 0, MAVLINK_MSG_ID_PAYLOAD_CTRL_LEN);
    memcpy(payload_ctrl, _MAV_PAYLOAD(msg), len);
#endif
}
