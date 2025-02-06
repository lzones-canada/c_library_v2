/** @file
 *    @brief MAVLink comm protocol testsuite generated from lzc.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef LZC_TESTSUITE_H
#define LZC_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_lzc(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_lzc(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_payload_ctrl(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PAYLOAD_CTRL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_payload_ctrl_t packet_in = {
        5,72,139,206
    };
    mavlink_payload_ctrl_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.flags = packet_in.flags;
        packet1.beacon_lights = packet_in.beacon_lights;
        packet1.sweep_wing_calibrate = packet_in.sweep_wing_calibrate;
        packet1.sweep_wing_value = packet_in.sweep_wing_value;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PAYLOAD_CTRL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_ctrl_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_payload_ctrl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_ctrl_pack(system_id, component_id, &msg , packet1.flags , packet1.beacon_lights , packet1.sweep_wing_calibrate , packet1.sweep_wing_value );
    mavlink_msg_payload_ctrl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_ctrl_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.flags , packet1.beacon_lights , packet1.sweep_wing_calibrate , packet1.sweep_wing_value );
    mavlink_msg_payload_ctrl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_payload_ctrl_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_ctrl_send(MAVLINK_COMM_1 , packet1.flags , packet1.beacon_lights , packet1.sweep_wing_calibrate , packet1.sweep_wing_value );
    mavlink_msg_payload_ctrl_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PAYLOAD_CTRL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PAYLOAD_CTRL) != NULL);
#endif
}

static void mavlink_test_station_ctrl(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_STATION_CTRL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_station_ctrl_t packet_in = {
        5
    };
    mavlink_station_ctrl_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.flags = packet_in.flags;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_STATION_CTRL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_station_ctrl_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_station_ctrl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_station_ctrl_pack(system_id, component_id, &msg , packet1.flags );
    mavlink_msg_station_ctrl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_station_ctrl_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.flags );
    mavlink_msg_station_ctrl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_station_ctrl_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_station_ctrl_send(MAVLINK_COMM_1 , packet1.flags );
    mavlink_msg_station_ctrl_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("STATION_CTRL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_STATION_CTRL) != NULL);
#endif
}

static void mavlink_test_imet_sensor_raw(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IMET_SENSOR_RAW >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_imet_sensor_raw_t packet_in = {
        963497464,17,{ 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147 }
    };
    mavlink_imet_sensor_raw_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.data_length = packet_in.data_length;
        
        mav_array_memcpy(packet1.data, packet_in.data, sizeof(uint8_t)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IMET_SENSOR_RAW_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_imet_sensor_raw_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_imet_sensor_raw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_imet_sensor_raw_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.data_length , packet1.data );
    mavlink_msg_imet_sensor_raw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_imet_sensor_raw_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.data_length , packet1.data );
    mavlink_msg_imet_sensor_raw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_imet_sensor_raw_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_imet_sensor_raw_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.data_length , packet1.data );
    mavlink_msg_imet_sensor_raw_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IMET_SENSOR_RAW") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IMET_SENSOR_RAW) != NULL);
#endif
}

static void mavlink_test_payload_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PAYLOAD_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_payload_status_t packet_in = {
        17235,17339,17443,151,218,17651,17755,17859,17963
    };
    mavlink_payload_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.servo_vcc = packet_in.servo_vcc;
        packet1.support_board_temp = packet_in.support_board_temp;
        packet1.sweep_wing = packet_in.sweep_wing;
        packet1.flags = packet_in.flags;
        packet1.uplink_quality = packet_in.uplink_quality;
        packet1.sweep_wing_vcc = packet_in.sweep_wing_vcc;
        packet1.sweep_wing_temp = packet_in.sweep_wing_temp;
        packet1.sweep_wing_current = packet_in.sweep_wing_current;
        packet1.hab_cutter_temp = packet_in.hab_cutter_temp;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PAYLOAD_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_payload_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_status_pack(system_id, component_id, &msg , packet1.flags , packet1.uplink_quality , packet1.servo_vcc , packet1.support_board_temp , packet1.sweep_wing , packet1.sweep_wing_vcc , packet1.sweep_wing_temp , packet1.sweep_wing_current , packet1.hab_cutter_temp );
    mavlink_msg_payload_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.flags , packet1.uplink_quality , packet1.servo_vcc , packet1.support_board_temp , packet1.sweep_wing , packet1.sweep_wing_vcc , packet1.sweep_wing_temp , packet1.sweep_wing_current , packet1.hab_cutter_temp );
    mavlink_msg_payload_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_payload_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_payload_status_send(MAVLINK_COMM_1 , packet1.flags , packet1.uplink_quality , packet1.servo_vcc , packet1.support_board_temp , packet1.sweep_wing , packet1.sweep_wing_vcc , packet1.sweep_wing_temp , packet1.sweep_wing_current , packet1.hab_cutter_temp );
    mavlink_msg_payload_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PAYLOAD_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PAYLOAD_STATUS) != NULL);
#endif
}

static void mavlink_test_station_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_STATION_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_station_status_t packet_in = {
        5
    };
    mavlink_station_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.flags = packet_in.flags;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_STATION_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_STATION_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_station_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_station_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_station_status_pack(system_id, component_id, &msg , packet1.flags );
    mavlink_msg_station_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_station_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.flags );
    mavlink_msg_station_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_station_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_station_status_send(MAVLINK_COMM_1 , packet1.flags );
    mavlink_msg_station_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("STATION_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_STATION_STATUS) != NULL);
#endif
}

static void mavlink_test_lzc(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_payload_ctrl(system_id, component_id, last_msg);
    mavlink_test_station_ctrl(system_id, component_id, last_msg);
    mavlink_test_imet_sensor_raw(system_id, component_id, last_msg);
    mavlink_test_payload_status(system_id, component_id, last_msg);
    mavlink_test_station_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // LZC_TESTSUITE_H
