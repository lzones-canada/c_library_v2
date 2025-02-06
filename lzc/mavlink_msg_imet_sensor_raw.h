#pragma once
// MESSAGE IMET_SENSOR_RAW PACKING

#define MAVLINK_MSG_ID_IMET_SENSOR_RAW 20050


typedef struct __mavlink_imet_sensor_raw_t {
 uint32_t time_boot_ms; /*<  Timestamp (milliseconds since system boot)*/
 uint8_t data_length; /*<  Data length.*/
 uint8_t data[64]; /*<  IMET sensor raw data message*/
} mavlink_imet_sensor_raw_t;

#define MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN 69
#define MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN 69
#define MAVLINK_MSG_ID_20050_LEN 69
#define MAVLINK_MSG_ID_20050_MIN_LEN 69

#define MAVLINK_MSG_ID_IMET_SENSOR_RAW_CRC 144
#define MAVLINK_MSG_ID_20050_CRC 144

#define MAVLINK_MSG_IMET_SENSOR_RAW_FIELD_DATA_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IMET_SENSOR_RAW { \
    20050, \
    "IMET_SENSOR_RAW", \
    3, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_imet_sensor_raw_t, time_boot_ms) }, \
         { "data_length", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_imet_sensor_raw_t, data_length) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 64, 5, offsetof(mavlink_imet_sensor_raw_t, data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IMET_SENSOR_RAW { \
    "IMET_SENSOR_RAW", \
    3, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_imet_sensor_raw_t, time_boot_ms) }, \
         { "data_length", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_imet_sensor_raw_t, data_length) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 64, 5, offsetof(mavlink_imet_sensor_raw_t, data) }, \
         } \
}
#endif

/**
 * @brief Pack a imet_sensor_raw message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param data_length  Data length.
 * @param data  IMET sensor raw data message
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_imet_sensor_raw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t data_length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, data_length);
    _mav_put_uint8_t_array(buf, 5, data, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN);
#else
    mavlink_imet_sensor_raw_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.data_length = data_length;
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IMET_SENSOR_RAW;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_CRC);
}

/**
 * @brief Pack a imet_sensor_raw message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param data_length  Data length.
 * @param data  IMET sensor raw data message
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_imet_sensor_raw_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t data_length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, data_length);
    _mav_put_uint8_t_array(buf, 5, data, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN);
#else
    mavlink_imet_sensor_raw_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.data_length = data_length;
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IMET_SENSOR_RAW;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN);
#endif
}

/**
 * @brief Pack a imet_sensor_raw message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param data_length  Data length.
 * @param data  IMET sensor raw data message
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_imet_sensor_raw_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t data_length,const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, data_length);
    _mav_put_uint8_t_array(buf, 5, data, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN);
#else
    mavlink_imet_sensor_raw_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.data_length = data_length;
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IMET_SENSOR_RAW;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_CRC);
}

/**
 * @brief Encode a imet_sensor_raw struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param imet_sensor_raw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_imet_sensor_raw_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_imet_sensor_raw_t* imet_sensor_raw)
{
    return mavlink_msg_imet_sensor_raw_pack(system_id, component_id, msg, imet_sensor_raw->time_boot_ms, imet_sensor_raw->data_length, imet_sensor_raw->data);
}

/**
 * @brief Encode a imet_sensor_raw struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param imet_sensor_raw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_imet_sensor_raw_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_imet_sensor_raw_t* imet_sensor_raw)
{
    return mavlink_msg_imet_sensor_raw_pack_chan(system_id, component_id, chan, msg, imet_sensor_raw->time_boot_ms, imet_sensor_raw->data_length, imet_sensor_raw->data);
}

/**
 * @brief Encode a imet_sensor_raw struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param imet_sensor_raw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_imet_sensor_raw_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_imet_sensor_raw_t* imet_sensor_raw)
{
    return mavlink_msg_imet_sensor_raw_pack_status(system_id, component_id, _status, msg,  imet_sensor_raw->time_boot_ms, imet_sensor_raw->data_length, imet_sensor_raw->data);
}

/**
 * @brief Send a imet_sensor_raw message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms  Timestamp (milliseconds since system boot)
 * @param data_length  Data length.
 * @param data  IMET sensor raw data message
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_imet_sensor_raw_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t data_length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, data_length);
    _mav_put_uint8_t_array(buf, 5, data, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMET_SENSOR_RAW, buf, MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_CRC);
#else
    mavlink_imet_sensor_raw_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.data_length = data_length;
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMET_SENSOR_RAW, (const char *)&packet, MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_CRC);
#endif
}

/**
 * @brief Send a imet_sensor_raw message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_imet_sensor_raw_send_struct(mavlink_channel_t chan, const mavlink_imet_sensor_raw_t* imet_sensor_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_imet_sensor_raw_send(chan, imet_sensor_raw->time_boot_ms, imet_sensor_raw->data_length, imet_sensor_raw->data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMET_SENSOR_RAW, (const char *)imet_sensor_raw, MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_CRC);
#endif
}

#if MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_imet_sensor_raw_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t data_length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, data_length);
    _mav_put_uint8_t_array(buf, 5, data, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMET_SENSOR_RAW, buf, MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_CRC);
#else
    mavlink_imet_sensor_raw_t *packet = (mavlink_imet_sensor_raw_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->data_length = data_length;
    mav_array_memcpy(packet->data, data, sizeof(uint8_t)*64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IMET_SENSOR_RAW, (const char *)packet, MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN, MAVLINK_MSG_ID_IMET_SENSOR_RAW_CRC);
#endif
}
#endif

#endif

// MESSAGE IMET_SENSOR_RAW UNPACKING


/**
 * @brief Get field time_boot_ms from imet_sensor_raw message
 *
 * @return  Timestamp (milliseconds since system boot)
 */
static inline uint32_t mavlink_msg_imet_sensor_raw_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field data_length from imet_sensor_raw message
 *
 * @return  Data length.
 */
static inline uint8_t mavlink_msg_imet_sensor_raw_get_data_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field data from imet_sensor_raw message
 *
 * @return  IMET sensor raw data message
 */
static inline uint16_t mavlink_msg_imet_sensor_raw_get_data(const mavlink_message_t* msg, uint8_t *data)
{
    return _MAV_RETURN_uint8_t_array(msg, data, 64,  5);
}

/**
 * @brief Decode a imet_sensor_raw message into a struct
 *
 * @param msg The message to decode
 * @param imet_sensor_raw C-struct to decode the message contents into
 */
static inline void mavlink_msg_imet_sensor_raw_decode(const mavlink_message_t* msg, mavlink_imet_sensor_raw_t* imet_sensor_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    imet_sensor_raw->time_boot_ms = mavlink_msg_imet_sensor_raw_get_time_boot_ms(msg);
    imet_sensor_raw->data_length = mavlink_msg_imet_sensor_raw_get_data_length(msg);
    mavlink_msg_imet_sensor_raw_get_data(msg, imet_sensor_raw->data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN? msg->len : MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN;
        memset(imet_sensor_raw, 0, MAVLINK_MSG_ID_IMET_SENSOR_RAW_LEN);
    memcpy(imet_sensor_raw, _MAV_PAYLOAD(msg), len);
#endif
}
