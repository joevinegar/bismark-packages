#ifndef _BISMARK_PASSIVE_CONSTANTS_H_
#define _BISMARK_PASSIVE_CONSTANTS_H_

/* Uncomment to disable debug messages */
/*#define NDEBUG*/

/* Uncomment to disable anonymization.
 * IMPORTANT: Never commit changes to git! */
/*#define DISABLE_ANONYMIZATION*/

#define PACKET_DATA_BUFFER_ENTRIES 65536
#define FLOW_TABLE_ENTRIES 65535
#define DNS_TABLE_A_ENTRIES 1024
#define DNS_TABLE_CNAME_ENTRIES 1024
#define MAC_TABLE_ENTRIES 256

/* Flows older than this are eligable for expiration. */
#define FLOW_TABLE_EXPIRATION_SECONDS (30*60)
/* Flows that are this many seconds newer than the base timestamp will be
 * expired to prevent timestamp inaccuracy. */
#define FLOW_TABLE_MAX_UPDATE_OFFSET INT16_MAX
/* Flows that are this many seconds older than the base timestamp will be
 * expired to prevent timestamp inaccuracy. */
#define FLOW_TABLE_MIN_UPDATE_OFFSET INT16_MIN

/* Generate differential updates this often. */
#define UPDATE_PERIOD_SECONDS 30
#define UPDATE_FILENAME "/tmp/bismark-passive-update.gz"

#define ANONYMIZATION_SEED_LEN 16
#define ANONYMIZATION_SEED_FILE "/etc/bismark/passive.key"
/* For testing on non-Bismark machines */
/*#define ANONYMIZATION_SEED_FILE "/tmp/passive.key"*/

/* Hashtable parameters */
#define HT_NUM_PROBES 3
#define HT_C1 0.5
#define HT_C2 0.5

#define NUM_MICROS_PER_SECOND 1e6
#define TIMEVAL_TO_MICROS(tv) ((tv)->tv_sec * NUM_MICROS_PER_SECOND + (tv)->tv_usec)

#endif
