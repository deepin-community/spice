/* this is a file autogenerated by spice_codegen.py */
/*
  Copyright (C) 2013 Red Hat, Inc.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
*/

#include "common/client_marshallers.h"
#include <spice/protocol.h>
#include "common/marshaller.h"

#ifndef _H_GENERATED_CLIENT_MARSHALLERS
#define _H_GENERATED_CLIENT_MARSHALLERS

SPICE_BEGIN_DECLS

typedef struct {
    void (*msgc_ack_sync)(SpiceMarshaller *m, SpiceMsgcAckSync *msg);
    void (*msg_SpiceMsgEmpty)(SpiceMarshaller *m, SpiceMsgEmpty *msg);
    void (*msgc_pong)(SpiceMarshaller *m, SpiceMsgPing *msg);
    void (*msg_SpiceMsgData)(SpiceMarshaller *m, SpiceMsgData *msg);
    void (*msgc_disconnecting)(SpiceMarshaller *m, SpiceMsgDisconnect *msg);
    void (*msgc_main_client_info)(SpiceMarshaller *m, SpiceMsgcClientInfo *msg);
    void (*msgc_main_mouse_mode_request)(SpiceMarshaller *m, SpiceMsgcMainMouseModeRequest *msg);
    void (*msgc_main_agent_start)(SpiceMarshaller *m, SpiceMsgMainAgentTokens *msg);
    void (*msgc_main_agent_token)(SpiceMarshaller *m, SpiceMsgMainAgentTokens *msg);
    void (*msgc_main_migrate_dst_do_seamless)(SpiceMarshaller *m, SpiceMsgcMainMigrateDstDoSeamless *msg);
    void (*msgc_display_init)(SpiceMarshaller *m, SpiceMsgcDisplayInit *msg);
    void (*msgc_display_stream_report)(SpiceMarshaller *m, SpiceMsgcDisplayStreamReport *msg);
    void (*msgc_display_preferred_compression)(SpiceMarshaller *m, SpiceMsgcDisplayPreferredCompression *msg);
    void (*msgc_display_gl_draw_done)(SpiceMarshaller *m, SpiceMsgcDisplayGlDrawDone *msg);
    void (*msgc_display_preferred_video_codec_type)(SpiceMarshaller *m, SpiceMsgcDisplayPreferredVideoCodecType *msg);
    void (*msgc_inputs_key_down)(SpiceMarshaller *m, SpiceMsgcKeyDown *msg);
    void (*msgc_inputs_key_up)(SpiceMarshaller *m, SpiceMsgcKeyUp *msg);
    void (*msgc_inputs_key_modifiers)(SpiceMarshaller *m, SpiceMsgcKeyModifiers *msg);
    void (*msgc_inputs_mouse_motion)(SpiceMarshaller *m, SpiceMsgcMouseMotion *msg);
    void (*msgc_inputs_mouse_position)(SpiceMarshaller *m, SpiceMsgcMousePosition *msg);
    void (*msgc_inputs_mouse_press)(SpiceMarshaller *m, SpiceMsgcMousePress *msg);
    void (*msgc_inputs_mouse_release)(SpiceMarshaller *m, SpiceMsgcMouseRelease *msg);
    void (*msgc_record_data)(SpiceMarshaller *m, SpiceMsgPlaybackPacket *msg);
    void (*msgc_record_mode)(SpiceMarshaller *m, SpiceMsgPlaybackMode *msg);
    void (*msgc_record_start_mark)(SpiceMarshaller *m, SpiceMsgcRecordStartMark *msg);
#ifdef USE_SMARTCARD
    void (*msgc_smartcard_data)(SpiceMarshaller *m, VSCMsgHeader *msg);
#endif /* USE_SMARTCARD */
    void (*msg_SpiceMsgCompressedData)(SpiceMarshaller *m, SpiceMsgCompressedData *msg);
    void (*msgc_port_event)(SpiceMarshaller *m, SpiceMsgcPortEvent *msg);
} SpiceMessageMarshallers;

SpiceMessageMarshallers *spice_message_marshallers_get(void);


SPICE_END_DECLS

#endif