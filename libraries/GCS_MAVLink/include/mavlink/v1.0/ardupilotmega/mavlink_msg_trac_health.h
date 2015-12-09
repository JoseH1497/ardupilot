// MESSAGE TRAC_HEALTH PACKING

#define MAVLINK_MSG_ID_TRAC_HEALTH 227

typedef struct __mavlink_trac_health_t
{
 uint8_t rpm_D4; /*< D4 field of 0x0CF00400 256^0*D4+256^1*D5=Total Decimal*/
 uint8_t rpm_D5; /*< D5 field of 0x0CF00400 256^0*D4+256^1*D5=Total Decimal*/
 uint8_t coolan_temp_D1; /*< D1 field of 0x18FEEE00 1degree/bit -40 offset*/
 uint8_t oil_pres_D4; /*< D4 field of 0x18FEEF00 4kpa/bit no offset*/
 uint8_t fuel_level_D2; /*< D2 field of 0x18FEFC47 0.4%/bit no offset*/
} mavlink_trac_health_t;

#define MAVLINK_MSG_ID_TRAC_HEALTH_LEN 5
#define MAVLINK_MSG_ID_227_LEN 5

#define MAVLINK_MSG_ID_TRAC_HEALTH_CRC 65
#define MAVLINK_MSG_ID_227_CRC 65



#define MAVLINK_MESSAGE_INFO_TRAC_HEALTH { \
	"TRAC_HEALTH", \
	5, \
	{  { "rpm_D4", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_trac_health_t, rpm_D4) }, \
         { "rpm_D5", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_trac_health_t, rpm_D5) }, \
         { "coolan_temp_D1", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_trac_health_t, coolan_temp_D1) }, \
         { "oil_pres_D4", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_trac_health_t, oil_pres_D4) }, \
         { "fuel_level_D2", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_trac_health_t, fuel_level_D2) }, \
         } \
}


/**
 * @brief Pack a trac_health message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rpm_D4 D4 field of 0x0CF00400 256^0*D4+256^1*D5=Total Decimal
 * @param rpm_D5 D5 field of 0x0CF00400 256^0*D4+256^1*D5=Total Decimal
 * @param coolan_temp_D1 D1 field of 0x18FEEE00 1degree/bit -40 offset
 * @param oil_pres_D4 D4 field of 0x18FEEF00 4kpa/bit no offset
 * @param fuel_level_D2 D2 field of 0x18FEFC47 0.4%/bit no offset
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_trac_health_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t rpm_D4, uint8_t rpm_D5, uint8_t coolan_temp_D1, uint8_t oil_pres_D4, uint8_t fuel_level_D2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TRAC_HEALTH_LEN];
	_mav_put_uint8_t(buf, 0, rpm_D4);
	_mav_put_uint8_t(buf, 1, rpm_D5);
	_mav_put_uint8_t(buf, 2, coolan_temp_D1);
	_mav_put_uint8_t(buf, 3, oil_pres_D4);
	_mav_put_uint8_t(buf, 4, fuel_level_D2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#else
	mavlink_trac_health_t packet;
	packet.rpm_D4 = rpm_D4;
	packet.rpm_D5 = rpm_D5;
	packet.coolan_temp_D1 = coolan_temp_D1;
	packet.oil_pres_D4 = oil_pres_D4;
	packet.fuel_level_D2 = fuel_level_D2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TRAC_HEALTH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TRAC_HEALTH_LEN, MAVLINK_MSG_ID_TRAC_HEALTH_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#endif
}

/**
 * @brief Pack a trac_health message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rpm_D4 D4 field of 0x0CF00400 256^0*D4+256^1*D5=Total Decimal
 * @param rpm_D5 D5 field of 0x0CF00400 256^0*D4+256^1*D5=Total Decimal
 * @param coolan_temp_D1 D1 field of 0x18FEEE00 1degree/bit -40 offset
 * @param oil_pres_D4 D4 field of 0x18FEEF00 4kpa/bit no offset
 * @param fuel_level_D2 D2 field of 0x18FEFC47 0.4%/bit no offset
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_trac_health_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t rpm_D4,uint8_t rpm_D5,uint8_t coolan_temp_D1,uint8_t oil_pres_D4,uint8_t fuel_level_D2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TRAC_HEALTH_LEN];
	_mav_put_uint8_t(buf, 0, rpm_D4);
	_mav_put_uint8_t(buf, 1, rpm_D5);
	_mav_put_uint8_t(buf, 2, coolan_temp_D1);
	_mav_put_uint8_t(buf, 3, oil_pres_D4);
	_mav_put_uint8_t(buf, 4, fuel_level_D2);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#else
	mavlink_trac_health_t packet;
	packet.rpm_D4 = rpm_D4;
	packet.rpm_D5 = rpm_D5;
	packet.coolan_temp_D1 = coolan_temp_D1;
	packet.oil_pres_D4 = oil_pres_D4;
	packet.fuel_level_D2 = fuel_level_D2;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_TRAC_HEALTH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TRAC_HEALTH_LEN, MAVLINK_MSG_ID_TRAC_HEALTH_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#endif
}

/**
 * @brief Encode a trac_health struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param trac_health C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_trac_health_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_trac_health_t* trac_health)
{
	return mavlink_msg_trac_health_pack(system_id, component_id, msg, trac_health->rpm_D4, trac_health->rpm_D5, trac_health->coolan_temp_D1, trac_health->oil_pres_D4, trac_health->fuel_level_D2);
}

/**
 * @brief Encode a trac_health struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param trac_health C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_trac_health_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_trac_health_t* trac_health)
{
	return mavlink_msg_trac_health_pack_chan(system_id, component_id, chan, msg, trac_health->rpm_D4, trac_health->rpm_D5, trac_health->coolan_temp_D1, trac_health->oil_pres_D4, trac_health->fuel_level_D2);
}

/**
 * @brief Send a trac_health message
 * @param chan MAVLink channel to send the message
 *
 * @param rpm_D4 D4 field of 0x0CF00400 256^0*D4+256^1*D5=Total Decimal
 * @param rpm_D5 D5 field of 0x0CF00400 256^0*D4+256^1*D5=Total Decimal
 * @param coolan_temp_D1 D1 field of 0x18FEEE00 1degree/bit -40 offset
 * @param oil_pres_D4 D4 field of 0x18FEEF00 4kpa/bit no offset
 * @param fuel_level_D2 D2 field of 0x18FEFC47 0.4%/bit no offset
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_trac_health_send(mavlink_channel_t chan, uint8_t rpm_D4, uint8_t rpm_D5, uint8_t coolan_temp_D1, uint8_t oil_pres_D4, uint8_t fuel_level_D2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_TRAC_HEALTH_LEN];
	_mav_put_uint8_t(buf, 0, rpm_D4);
	_mav_put_uint8_t(buf, 1, rpm_D5);
	_mav_put_uint8_t(buf, 2, coolan_temp_D1);
	_mav_put_uint8_t(buf, 3, oil_pres_D4);
	_mav_put_uint8_t(buf, 4, fuel_level_D2);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAC_HEALTH, buf, MAVLINK_MSG_ID_TRAC_HEALTH_LEN, MAVLINK_MSG_ID_TRAC_HEALTH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAC_HEALTH, buf, MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#endif
#else
	mavlink_trac_health_t packet;
	packet.rpm_D4 = rpm_D4;
	packet.rpm_D5 = rpm_D5;
	packet.coolan_temp_D1 = coolan_temp_D1;
	packet.oil_pres_D4 = oil_pres_D4;
	packet.fuel_level_D2 = fuel_level_D2;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAC_HEALTH, (const char *)&packet, MAVLINK_MSG_ID_TRAC_HEALTH_LEN, MAVLINK_MSG_ID_TRAC_HEALTH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAC_HEALTH, (const char *)&packet, MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_TRAC_HEALTH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_trac_health_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rpm_D4, uint8_t rpm_D5, uint8_t coolan_temp_D1, uint8_t oil_pres_D4, uint8_t fuel_level_D2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint8_t(buf, 0, rpm_D4);
	_mav_put_uint8_t(buf, 1, rpm_D5);
	_mav_put_uint8_t(buf, 2, coolan_temp_D1);
	_mav_put_uint8_t(buf, 3, oil_pres_D4);
	_mav_put_uint8_t(buf, 4, fuel_level_D2);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAC_HEALTH, buf, MAVLINK_MSG_ID_TRAC_HEALTH_LEN, MAVLINK_MSG_ID_TRAC_HEALTH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAC_HEALTH, buf, MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#endif
#else
	mavlink_trac_health_t *packet = (mavlink_trac_health_t *)msgbuf;
	packet->rpm_D4 = rpm_D4;
	packet->rpm_D5 = rpm_D5;
	packet->coolan_temp_D1 = coolan_temp_D1;
	packet->oil_pres_D4 = oil_pres_D4;
	packet->fuel_level_D2 = fuel_level_D2;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAC_HEALTH, (const char *)packet, MAVLINK_MSG_ID_TRAC_HEALTH_LEN, MAVLINK_MSG_ID_TRAC_HEALTH_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRAC_HEALTH, (const char *)packet, MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE TRAC_HEALTH UNPACKING


/**
 * @brief Get field rpm_D4 from trac_health message
 *
 * @return D4 field of 0x0CF00400 256^0*D4+256^1*D5=Total Decimal
 */
static inline uint8_t mavlink_msg_trac_health_get_rpm_D4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field rpm_D5 from trac_health message
 *
 * @return D5 field of 0x0CF00400 256^0*D4+256^1*D5=Total Decimal
 */
static inline uint8_t mavlink_msg_trac_health_get_rpm_D5(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field coolan_temp_D1 from trac_health message
 *
 * @return D1 field of 0x18FEEE00 1degree/bit -40 offset
 */
static inline uint8_t mavlink_msg_trac_health_get_coolan_temp_D1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field oil_pres_D4 from trac_health message
 *
 * @return D4 field of 0x18FEEF00 4kpa/bit no offset
 */
static inline uint8_t mavlink_msg_trac_health_get_oil_pres_D4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field fuel_level_D2 from trac_health message
 *
 * @return D2 field of 0x18FEFC47 0.4%/bit no offset
 */
static inline uint8_t mavlink_msg_trac_health_get_fuel_level_D2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a trac_health message into a struct
 *
 * @param msg The message to decode
 * @param trac_health C-struct to decode the message contents into
 */
static inline void mavlink_msg_trac_health_decode(const mavlink_message_t* msg, mavlink_trac_health_t* trac_health)
{
#if MAVLINK_NEED_BYTE_SWAP
	trac_health->rpm_D4 = mavlink_msg_trac_health_get_rpm_D4(msg);
	trac_health->rpm_D5 = mavlink_msg_trac_health_get_rpm_D5(msg);
	trac_health->coolan_temp_D1 = mavlink_msg_trac_health_get_coolan_temp_D1(msg);
	trac_health->oil_pres_D4 = mavlink_msg_trac_health_get_oil_pres_D4(msg);
	trac_health->fuel_level_D2 = mavlink_msg_trac_health_get_fuel_level_D2(msg);
#else
	memcpy(trac_health, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_TRAC_HEALTH_LEN);
#endif
}
