#ifndef LIGHTNING_PLUGINS_OFFERS_H
#define LIGHTNING_PLUGINS_OFFERS_H
#include "config.h"
#include <common/json.h>

struct command_result;
struct command;

/* Helper to send a reply */
struct command_result *WARN_UNUSED_RESULT
send_onion_reply(struct command *cmd,
		 /* Preferred */
		 struct tlv_onionmsg_payload_reply_path *reply_path,
		 /* Used if reply_path is NULL */
		 const char *jsonbuf,
		 const jsmntok_t *replytok,
		 const char *replyfield,
		 const u8 *replydata);
#endif /* LIGHTNING_PLUGINS_OFFERS_H */
