#include <mqueue.h>

int msgqueue_handler_init( mtp_ctx * ctx );
int msgqueue_handler_deinit( mtp_ctx * ctx );
mqd_t get_message_queue();
int send_message_queue( char * message );
