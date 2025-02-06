#pragma once
// MESSAGE PAYLOAD_STATUS PACKING

#define MAVLINK_MSG_ID_PAYLOAD_STATUS 20051


typedef struct __mavlink_payload_status_t {
 uint16_t servo_vcc; /*< [mV] Servo rail voltage.*/
 int16_t support_board_temp; /*< [cdegC] Vehicle support board temperature*/
 uint16_t sweep_wing; /*< [cdeg] Sweep Wing Angle in Degrees.*/
 uint8_t flags; /*<  Payload status bitmap flags*/
 uint8_t uplink_quality; /*<  Uplink quality scaled in factor 0 to 255*/
 uint16_t sweep_wing_vcc; /*< [mV] Sweep Swing Servo input Voltage (DA15-N)*/
 int16_t sweep_wing_temp; /*< [cdegC] Volz Wing servo board temperature*/
 uint16_t sweep_wing_current; /*< [mA] Sweep Wing Servo Current (DA15-N)*/
 int16_t hab_cutter_temp; /*< [cdegC] Volz Wing servo board temperature*/
} mavlink_payload_status_t;

#define MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN 16
#define MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN 8
#define MAVLINK_MSG_ID_20051_LEN 16
#define MAVLINK_MSG_ID_20051_MIN_LEN 8

#define MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC 98
#define MAVLINK_MSG_ID_20051_CRC 98



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PAYLOAD_STATUS { \
    20051, \
    "PAYLOAD_STATUS", \
    9, \
    {  { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_payload_status_t, flags) }, \
         { "uplink_quality", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_payload_status_t, uplink_quality) }, \
         { "servo_vcc", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_payload_status_t, servo_vcc) }, \
         { "support_board_temp", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_payload_status_t, support_board_temp) }, \
         { "sweep_wing", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_payload_status_t, sweep_wing) }, \
         { "sweep_wing_vcc", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_payload_status_t, sweep_wing_vcc) }, \
         { "sweep_wing_temp", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_payload_status_t, sweep_wing_temp) }, \
         { "sweep_wing_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_payload_status_t, sweep_wing_current) }, \
         { "hab_cutter_temp", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_payload_status_t, hab_cutter_temp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PAYLOAD_STATUS { \
    "PAYLOAD_STATUS", \
    9, \
    {  { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_payload_status_t, flags) }, \
         { "uplink_quality", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_payload_status_t, uplink_quality) }, \
         { "servo_vcc", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_payload_status_t, servo_vcc) }, \
         { "support_board_temp", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_payload_status_t, support_board_temp) }, \
         { "sweep_wing", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_payload_status_t, sweep_wing) }, \
         { "sweep_wing_vcc", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_payload_status_t, sweep_wing_vcc) }, \
         { "sweep_wing_temp", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_payload_status_t, sweep_wing_temp) }, \
         { "sweep_wing_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_payload_status_t, sweep_wing_current) }, \
         { "hab_cutter_temp", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_payload_status_t, hab_cutter_temp) }, \
         } \
}
#endif

/**
 * @brief Pack a payload_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param flags  Payload status bitmap flags
 * @param uplink_quality  Uplink quality scaled in factor 0 to 255
 * @param servo_vcc [mV] Servo rail voltage.
 * @param support_board_temp [cdegC] Vehicle support board temperature
 * @param sweep_wing [cdeg] Sweep Wing Angle in Degrees.
 * @param sweep_wing_vcc [mV] Sweep Swing Servo input Voltage (DA15-N)
 * @param sweep_wing_temp [cdegC] Volz Wing servo board temperature
 * @param sweep_wing_current [mA] Sweep Wing Servo Current (DA15-N)
 * @param hab_cutter_temp [cdegC] Volz Wing servo board temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t flags, uint8_t uplink_quality, uint16_t servo_vcc, int16_t support_board_temp, uint16_t sweep_wing, uint16_t sweep_wing_vcc, int16_t sweep_wing_temp, uint16_t sweep_wing_current, int16_t hab_cutter_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, servo_vcc);
    _mav_put_int16_t(buf, 2, support_board_temp);
    _mav_put_uint16_t(buf, 4, sweep_wing);
    _mav_put_uint8_t(buf, 6, flags);
    _mav_put_uint8_t(buf, 7, uplink_quality);
    _mav_put_uint16_t(buf, 8, sweep_wing_vcc);
    _mav_put_int16_t(buf, 10, sweep_wing_temp);
    _mav_put_uint16_t(buf, 12, sweep_wing_current);
    _mav_put_int16_t(buf, 14, hab_cutter_temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#else
    mavlink_payload_status_t packet;
    packet.servo_vcc = servo_vcc;
    packet.support_board_temp = support_board_temp;
    packet.sweep_wing = sweep_wing;
    packet.flags = flags;
    packet.uplink_quality = uplink_quality;
    packet.sweep_wing_vcc = sweep_wing_vcc;
    packet.sweep_wing_temp = sweep_wing_temp;
    packet.sweep_wing_current = sweep_wing_current;
    packet.hab_cutter_temp = hab_cutter_temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
}

/**
 * @brief Pack a payload_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param flags  Payload status bitmap flags
 * @param uplink_quality  Uplink quality scaled in factor 0 to 255
 * @param servo_vcc [mV] Servo rail voltage.
 * @param support_board_temp [cdegC] Vehicle support board temperature
 * @param sweep_wing [cdeg] Sweep Wing Angle in Degrees.
 * @param sweep_wing_vcc [mV] Sweep Swing Servo input Voltage (DA15-N)
 * @param sweep_wing_temp [cdegC] Volz Wing servo board temperature
 * @param sweep_wing_current [mA] Sweep Wing Servo Current (DA15-N)
 * @param hab_cutter_temp [cdegC] Volz Wing servo board temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t flags, uint8_t uplink_quality, uint16_t servo_vcc, int16_t support_board_temp, uint16_t sweep_wing, uint16_t sweep_wing_vcc, int16_t sweep_wing_temp, uint16_t sweep_wing_current, int16_t hab_cutter_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, servo_vcc);
    _mav_put_int16_t(buf, 2, support_board_temp);
    _mav_put_uint16_t(buf, 4, sweep_wing);
    _mav_put_uint8_t(buf, 6, flags);
    _mav_put_uint8_t(buf, 7, uplink_quality);
    _mav_put_uint16_t(buf, 8, sweep_wing_vcc);
    _mav_put_int16_t(buf, 10, sweep_wing_temp);
    _mav_put_uint16_t(buf, 12, sweep_wing_current);
    _mav_put_int16_t(buf, 14, hab_cutter_temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#else
    mavlink_payload_status_t packet;
    packet.servo_vcc = servo_vcc;
    packet.support_board_temp = support_board_temp;
    packet.sweep_wing = sweep_wing;
    packet.flags = flags;
    packet.uplink_quality = uplink_quality;
    packet.sweep_wing_vcc = sweep_wing_vcc;
    packet.sweep_wing_temp = sweep_wing_temp;
    packet.sweep_wing_current = sweep_wing_current;
    packet.hab_cutter_temp = hab_cutter_temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#endif
}

/**
 * @brief Pack a payload_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flags  Payload status bitmap flags
 * @param uplink_quality  Uplink quality scaled in factor 0 to 255
 * @param servo_vcc [mV] Servo rail voltage.
 * @param support_board_temp [cdegC] Vehicle support board temperature
 * @param sweep_wing [cdeg] Sweep Wing Angle in Degrees.
 * @param sweep_wing_vcc [mV] Sweep Swing Servo input Voltage (DA15-N)
 * @param sweep_wing_temp [cdegC] Volz Wing servo board temperature
 * @param sweep_wing_current [mA] Sweep Wing Servo Current (DA15-N)
 * @param hab_cutter_temp [cdegC] Volz Wing servo board temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t flags,uint8_t uplink_quality,uint16_t servo_vcc,int16_t support_board_temp,uint16_t sweep_wing,uint16_t sweep_wing_vcc,int16_t sweep_wing_temp,uint16_t sweep_wing_current,int16_t hab_cutter_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, servo_vcc);
    _mav_put_int16_t(buf, 2, support_board_temp);
    _mav_put_uint16_t(buf, 4, sweep_wing);
    _mav_put_uint8_t(buf, 6, flags);
    _mav_put_uint8_t(buf, 7, uplink_quality);
    _mav_put_uint16_t(buf, 8, sweep_wing_vcc);
    _mav_put_int16_t(buf, 10, sweep_wing_temp);
    _mav_put_uint16_t(buf, 12, sweep_wing_current);
    _mav_put_int16_t(buf, 14, hab_cutter_temp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#else
    mavlink_payload_status_t packet;
    packet.servo_vcc = servo_vcc;
    packet.support_board_temp = support_board_temp;
    packet.sweep_wing = sweep_wing;
    packet.flags = flags;
    packet.uplink_quality = uplink_quality;
    packet.sweep_wing_vcc = sweep_wing_vcc;
    packet.sweep_wing_temp = sweep_wing_temp;
    packet.sweep_wing_current = sweep_wing_current;
    packet.hab_cutter_temp = hab_cutter_temp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAYLOAD_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
}

/**
 * @brief Encode a payload_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param payload_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_payload_status_t* payload_status)
{
    return mavlink_msg_payload_status_pack(system_id, component_id, msg, payload_status->flags, payload_status->uplink_quality, payload_status->servo_vcc, payload_status->support_board_temp, payload_status->sweep_wing, payload_status->sweep_wing_vcc, payload_status->sweep_wing_temp, payload_status->sweep_wing_current, payload_status->hab_cutter_temp);
}

/**
 * @brief Encode a payload_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_payload_status_t* payload_status)
{
    return mavlink_msg_payload_status_pack_chan(system_id, component_id, chan, msg, payload_status->flags, payload_status->uplink_quality, payload_status->servo_vcc, payload_status->support_board_temp, payload_status->sweep_wing, payload_status->sweep_wing_vcc, payload_status->sweep_wing_temp, payload_status->sweep_wing_current, payload_status->hab_cutter_temp);
}

/**
 * @brief Encode a payload_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param payload_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_payload_status_t* payload_status)
{
    return mavlink_msg_payload_status_pack_status(system_id, component_id, _status, msg,  payload_status->flags, payload_status->uplink_quality, payload_status->servo_vcc, payload_status->support_board_temp, payload_status->sweep_wing, payload_status->sweep_wing_vcc, payload_status->sweep_wing_temp, payload_status->sweep_wing_current, payload_status->hab_cutter_temp);
}

/**
 * @brief Send a payload_status message
 * @param chan MAVLink channel to send the message
 *
 * @param flags  Payload status bitmap flags
 * @param uplink_quality  Uplink quality scaled in factor 0 to 255
 * @param servo_vcc [mV] Servo rail voltage.
 * @param support_board_temp [cdegC] Vehicle support board temperature
 * @param sweep_wing [cdeg] Sweep Wing Angle in Degrees.
 * @param sweep_wing_vcc [mV] Sweep Swing Servo input Voltage (DA15-N)
 * @param sweep_wing_temp [cdegC] Volz Wing servo board temperature
 * @param sweep_wing_current [mA] Sweep Wing Servo Current (DA15-N)
 * @param hab_cutter_temp [cdegC] Volz Wing servo board temperature
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_payload_status_send(mavlink_channel_t chan, uint8_t flags, uint8_t uplink_quality, uint16_t servo_vcc, int16_t support_board_temp, uint16_t sweep_wing, uint16_t sweep_wing_vcc, int16_t sweep_wing_temp, uint16_t sweep_wing_current, int16_t hab_cutter_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, servo_vcc);
    _mav_put_int16_t(buf, 2, support_board_temp);
    _mav_put_uint16_t(buf, 4, sweep_wing);
    _mav_put_uint8_t(buf, 6, flags);
    _mav_put_uint8_t(buf, 7, uplink_quality);
    _mav_put_uint16_t(buf, 8, sweep_wing_vcc);
    _mav_put_int16_t(buf, 10, sweep_wing_temp);
    _mav_put_uint16_t(buf, 12, sweep_wing_current);
    _mav_put_int16_t(buf, 14, hab_cutter_temp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_STATUS, buf, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#else
    mavlink_payload_status_t packet;
    packet.servo_vcc = servo_vcc;
    packet.support_board_temp = support_board_temp;
    packet.sweep_wing = sweep_wing;
    packet.flags = flags;
    packet.uplink_quality = uplink_quality;
    packet.sweep_wing_vcc = sweep_wing_vcc;
    packet.sweep_wing_temp = sweep_wing_temp;
    packet.sweep_wing_current = sweep_wing_current;
    packet.hab_cutter_temp = hab_cutter_temp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_STATUS, (const char *)&packet, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#endif
}

/**
 * @brief Send a payload_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_payload_status_send_struct(mavlink_channel_t chan, const mavlink_payload_status_t* payload_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_payload_status_send(chan, payload_status->flags, payload_status->uplink_quality, payload_status->servo_vcc, payload_status->support_board_temp, payload_status->sweep_wing, payload_status->sweep_wing_vcc, payload_status->sweep_wing_temp, payload_status->sweep_wing_current, payload_status->hab_cutter_temp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_STATUS, (const char *)payload_status, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_payload_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t flags, uint8_t uplink_quality, uint16_t servo_vcc, int16_t support_board_temp, uint16_t sweep_wing, uint16_t sweep_wing_vcc, int16_t sweep_wing_temp, uint16_t sweep_wing_current, int16_t hab_cutter_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, servo_vcc);
    _mav_put_int16_t(buf, 2, support_board_temp);
    _mav_put_uint16_t(buf, 4, sweep_wing);
    _mav_put_uint8_t(buf, 6, flags);
    _mav_put_uint8_t(buf, 7, uplink_quality);
    _mav_put_uint16_t(buf, 8, sweep_wing_vcc);
    _mav_put_int16_t(buf, 10, sweep_wing_temp);
    _mav_put_uint16_t(buf, 12, sweep_wing_current);
    _mav_put_int16_t(buf, 14, hab_cutter_temp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_STATUS, buf, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#else
    mavlink_payload_status_t *packet = (mavlink_payload_status_t *)msgbuf;
    packet->servo_vcc = servo_vcc;
    packet->support_board_temp = support_board_temp;
    packet->sweep_wing = sweep_wing;
    packet->flags = flags;
    packet->uplink_quality = uplink_quality;
    packet->sweep_wing_vcc = sweep_wing_vcc;
    packet->sweep_wing_temp = sweep_wing_temp;
    packet->sweep_wing_current = sweep_wing_current;
    packet->hab_cutter_temp = hab_cutter_temp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD_STATUS, (const char *)packet, MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN, MAVLINK_MSG_ID_PAYLOAD_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE PAYLOAD_STATUS UNPACKING


/**
 * @brief Get field flags from payload_status message
 *
 * @return  Payload status bitmap flags
 */
static inline uint8_t mavlink_msg_payload_status_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field uplink_quality from payload_status message
 *
 * @return  Uplink quality scaled in factor 0 to 255
 */
static inline uint8_t mavlink_msg_payload_status_get_uplink_quality(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field servo_vcc from payload_status message
 *
 * @return [mV] Servo rail voltage.
 */
static inline uint16_t mavlink_msg_payload_status_get_servo_vcc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field support_board_temp from payload_status message
 *
 * @return [cdegC] Vehicle support board temperature
 */
static inline int16_t mavlink_msg_payload_status_get_support_board_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field sweep_wing from payload_status message
 *
 * @return [cdeg] Sweep Wing Angle in Degrees.
 */
static inline uint16_t mavlink_msg_payload_status_get_sweep_wing(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field sweep_wing_vcc from payload_status message
 *
 * @return [mV] Sweep Swing Servo input Voltage (DA15-N)
 */
static inline uint16_t mavlink_msg_payload_status_get_sweep_wing_vcc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field sweep_wing_temp from payload_status message
 *
 * @return [cdegC] Volz Wing servo board temperature
 */
static inline int16_t mavlink_msg_payload_status_get_sweep_wing_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field sweep_wing_current from payload_status message
 *
 * @return [mA] Sweep Wing Servo Current (DA15-N)
 */
static inline uint16_t mavlink_msg_payload_status_get_sweep_wing_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field hab_cutter_temp from payload_status message
 *
 * @return [cdegC] Volz Wing servo board temperature
 */
static inline int16_t mavlink_msg_payload_status_get_hab_cutter_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Decode a payload_status message into a struct
 *
 * @param msg The message to decode
 * @param payload_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_payload_status_decode(const mavlink_message_t* msg, mavlink_payload_status_t* payload_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    payload_status->servo_vcc = mavlink_msg_payload_status_get_servo_vcc(msg);
    payload_status->support_board_temp = mavlink_msg_payload_status_get_support_board_temp(msg);
    payload_status->sweep_wing = mavlink_msg_payload_status_get_sweep_wing(msg);
    payload_status->flags = mavlink_msg_payload_status_get_flags(msg);
    payload_status->uplink_quality = mavlink_msg_payload_status_get_uplink_quality(msg);
    payload_status->sweep_wing_vcc = mavlink_msg_payload_status_get_sweep_wing_vcc(msg);
    payload_status->sweep_wing_temp = mavlink_msg_payload_status_get_sweep_wing_temp(msg);
    payload_status->sweep_wing_current = mavlink_msg_payload_status_get_sweep_wing_current(msg);
    payload_status->hab_cutter_temp = mavlink_msg_payload_status_get_hab_cutter_temp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN? msg->len : MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN;
        memset(payload_status, 0, MAVLINK_MSG_ID_PAYLOAD_STATUS_LEN);
    memcpy(payload_status, _MAV_PAYLOAD(msg), len);
#endif
}
