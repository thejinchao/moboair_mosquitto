/*
Copyright (c) 2010-2013 Roger Light <roger@atchoo.org>
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. Neither the name of mosquitto nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef _READ_HANDLE_H_
#define _READ_HANDLE_H_

#include "mosquitto.h"
struct mosquitto_db;

int _mosquitto_packet_handle(struct mosquitto *mosq);
int _mosquitto_handle_connack(struct mosquitto *mosq);
int _mosquitto_handle_pingreq(int log_ping, struct mosquitto *mosq);
int _mosquitto_handle_pingresp(struct mosquitto *mosq);
int _mosquitto_handle_pubackcomp(struct mosquitto *mosq, const char *type);
int _mosquitto_handle_publish(struct mosquitto *mosq);
int _mosquitto_handle_pubrec(struct mosquitto *mosq);
int _mosquitto_handle_pubrel(struct mosquitto_db *db, struct mosquitto *mosq);
int _mosquitto_handle_suback(struct mosquitto *mosq);
int _mosquitto_handle_unsuback(struct mosquitto *mosq);


#endif
