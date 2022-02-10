#include <stdbool.h>

typedef char priorityType;
typedef int senderNumber;
typedef int recevierNumber;
typedef bool callerId;
typedef bool roaming;
typedef int packets ;
typedef  struct voiceCall{  // VOICE CALL OPTION
 callerId ci;
 roaming r;

 }v1;  // child from the above struct
 typedef struct dataCall{   // DATA CALL OPTION
 packets p;

 }d1;  // child from the above struct

typedef struct general{   // GENERAL OPTION
priorityType priority;
senderNumber sn;
recevierNumber rn;
struct dataCall d;
struct voiceCall v;

}g1; // child from the above struct

